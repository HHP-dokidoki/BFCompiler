#include "Optimizer.h"
#include "MathSolver.h"

#include <algorithm>
#include <unordered_set>
#include <functional>

namespace {
constexpr long long kTapeMod = 256;

// Normalize value to [0, mod-1]
long long modNorm(long long value, long long mod) {
    long long result = value % mod;
    return (result < 0) ? (result + mod) : result;
}

// Convert value to unsigned char (0-255)
unsigned char toByte(long long value) {
    return static_cast<unsigned char>(modNorm(value, kTapeMod));
}

bool blockEqual(const std::vector<Instruction>& lhs, const std::vector<Instruction>& rhs);

bool instructionEqual(const Instruction& lhs, const Instruction& rhs) {
    if (lhs.type != rhs.type || lhs.offset != rhs.offset || lhs.value != rhs.value) {
        return false;
    }
    return blockEqual(lhs.sub_inst, rhs.sub_inst);
}

bool blockEqual(const std::vector<Instruction>& lhs, const std::vector<Instruction>& rhs) {
    if (lhs.size() != rhs.size()) {
        return false;
    }
    for (size_t i = 0; i < lhs.size(); ++i) {
        if (!instructionEqual(lhs[i], rhs[i])) {
            return false;
        }
    }
    return true;
}

// Sort memory pairs by offset for deterministic code generation
std::vector<std::pair<long long, long long>> sortedNonZeroPairs(const std::unordered_map<long long, long long>& values) {
    std::vector<std::pair<long long, long long>> pairs;
    pairs.reserve(values.size());
    for (const auto& [offset, value] : values) {
        if (toByte(value) != 0) {
            pairs.push_back({offset, value});
        }
    }
    std::sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;
    });
    return pairs;
}
}

// Build Abstract Syntax Tree from flat instructions
std::vector<Instruction> Optimizer::buildAst(const std::vector<Operation>& instructions, size_t& index)
{
    std::vector<Instruction> block;

    while (index < instructions.size()) {
        const auto& inst = instructions[index++];

        if (inst.type == Tp::LOP_E) {
            break;
        }

        Instruction node;
        node.type = inst.type;
        node.value = inst.value;
        node.offset = 0;

        if (inst.type == Tp::LOP_S) {
            node.sub_inst = buildAst(instructions, index);
        }

        block.push_back(std::move(node));
    }

    return block;
}


// Flush accumulated memory changes to instruction list
inline void Optimizer::flushMemoryState(std::unordered_map<long long, long long>& mem_state, std::vector<Instruction>& optimized)
{
    const auto pairs = sortedNonZeroPairs(mem_state);
    for (const auto& [offset, value] : pairs) {
        optimized.push_back(Instruction{Tp::ADD_V, offset, value, {}});
    }
    mem_state.clear();
}

// Canonicalization: combine adjacent MOV_P and ADD_V, shift offsets
std::vector<Instruction> Optimizer::canonicalization(const std::vector<Instruction>& block, bool& changed)
{
    std::vector<Instruction> optimized;
    std::unordered_map<long long, long long> mem_state;
    long long delta_p = 0;

    auto flushPointer = [&](long long& delta_p_ref, std::vector<Instruction>& optimized_ref) {
        if (delta_p_ref != 0) {
            optimized_ref.push_back(Instruction{Tp::MOV_P, 0, delta_p_ref, {}});
            delta_p_ref = 0;
        }
    };

    for (const auto& inst : block) {
        if (inst.type == Tp::MOV_P) {
            delta_p += inst.value;
            continue;
        }

        if (inst.type == Tp::ADD_V) {
            mem_state[delta_p + inst.offset] += inst.value;
            continue;
        }

        // IN, OUT, SET_V can be shifted by delta_p, but must flush pending ADD_V first
        if (inst.type == Tp::IN || inst.type == Tp::OUT || inst.type == Tp::SET_V) {
            flushMemoryState(mem_state, optimized);
            Instruction shifted = inst;
            shifted.offset += delta_p;
            optimized.push_back(std::move(shifted));
            continue;
        }

        // Instructions that depend on pointer being at a specific location
        flushMemoryState(mem_state, optimized);
        flushPointer(delta_p, optimized);

        if (inst.type == Tp::MAC || inst.type == Tp::SCAN || inst.type == Tp::MATH_MAC ||
            inst.type == Tp::LOP_S || inst.type == Tp::IF_S) {
            Instruction node = inst;
            if (inst.type == Tp::LOP_S || inst.type == Tp::IF_S) {
                node.sub_inst = canonicalization(inst.sub_inst, changed);
            }
            optimized.push_back(std::move(node));
            continue;
        }

        optimized.push_back(inst);
    }

    flushMemoryState(mem_state, optimized);
    flushPointer(delta_p, optimized);

    // Clean up no-ops
    std::vector<Instruction> compact;
    compact.reserve(optimized.size());
    for (const auto& inst : optimized) {
        if ((inst.type == Tp::ADD_V || inst.type == Tp::MOV_P) && inst.value == 0) {
            changed = true;
            continue;
        }
        if (inst.type == Tp::IF_S && inst.sub_inst.empty()) {
            changed = true;
            continue;
        }
        compact.push_back(inst);
    }

    if (!blockEqual(compact, block)) {
        changed = true;
    }

    return compact;
}

// Semantic Lifting: Detect common patterns like [-], [->+<], etc.
std::vector<Instruction> Optimizer::semanticLifting(const std::vector<Instruction>& block, bool& changed)
{
    std::vector<Instruction> optimized;
    optimized.reserve(block.size());

    for (const auto& inst : block) {
        if (inst.type == Tp::LOP_S) {
            Instruction loop_node = inst;
            loop_node.sub_inst = semanticLifting(inst.sub_inst, changed);

            // Check if loop body only contains pointer moves and value additions
            bool simple_loop = true;
            for (const auto& sub_inst : loop_node.sub_inst) {
                if (sub_inst.type != Tp::ADD_V && sub_inst.type != Tp::MOV_P) {
                    simple_loop = false;
                    break;
                }
            }

            if (!simple_loop) {
                optimized.push_back(std::move(loop_node));
                continue;
            }

            long long delta_p = 0;
            std::unordered_map<long long, long long> mem_state;
            for (const auto& sub_inst : loop_node.sub_inst) {
                if (sub_inst.type == Tp::MOV_P) {
                    delta_p += sub_inst.value;
                } else if (sub_inst.type == Tp::ADD_V) {
                    mem_state[delta_p + sub_inst.offset] += sub_inst.value;
                }
            }

            // Remove zero changes
            for (auto it = mem_state.begin(); it != mem_state.end();) {
                if (toByte(it->second) == 0) {
                    it = mem_state.erase(it);
                } else {
                    ++it;
                }
            }

            if (delta_p == 0) {
                const auto it_zero = mem_state.find(0);

                // Pattern: [-] or [+]
                if (mem_state.size() == 1 && it_zero != mem_state.end() && std::abs(it_zero->second) == 1) {
                    optimized.push_back(Instruction{Tp::SET_V, 0, 0, {}});
                    changed = true;
                    continue;
                }

                // Pattern: [->+<] (Multiply and Accumulate)
                if (it_zero != mem_state.end() && it_zero->second == -1 && mem_state.size() > 1) {
                    const auto pairs = sortedNonZeroPairs(mem_state);
                    for (const auto& [offset, value] : pairs) {
                        if (offset != 0) {
                            optimized.push_back(Instruction{Tp::MAC, offset, value, {}});
                        }
                    }
                    optimized.push_back(Instruction{Tp::SET_V, 0, 0, {}});
                    changed = true;
                    continue;
                }

                // Complex linear loop: solve using linear congruence
                if (it_zero != mem_state.end() && it_zero->second != 0) {
                    Instruction math_mac;
                    math_mac.type = Tp::MATH_MAC;
                    math_mac.offset = 0;
                    math_mac.value = it_zero->second; // value change of loop counter

                    const auto pairs = sortedNonZeroPairs(mem_state);
                    for (const auto& [offset, value] : pairs) {
                        if (offset != 0) {
                            math_mac.sub_inst.push_back(Instruction{Tp::ADD_V, offset, value, {}});
                        }
                    }

                    optimized.push_back(std::move(math_mac));
                    changed = true;
                    continue;
                }
            }

            // Pattern: [>] or [<] (Scan for zero)
            if (delta_p != 0 && mem_state.empty()) {
                optimized.push_back(Instruction{Tp::SCAN, 0, delta_p, {}});
                changed = true;
                continue;
            }

            optimized.push_back(std::move(loop_node));
            continue;
        }

        if (inst.type == Tp::IF_S) {
            Instruction if_node = inst;
            if_node.sub_inst = semanticLifting(inst.sub_inst, changed);
            optimized.push_back(std::move(if_node));
            continue;
        }

        optimized.push_back(inst);
    }

    return optimized;
}

namespace {

// Traverse AST to conservatively collect all touched memory offsets.
// Returns false if the block has dynamic pointer movement (e.g., SCAN or unbalanced loops).
bool collectTouches(const std::vector<Instruction>& block, long long& current_offset, std::unordered_set<long long>& touched) {
    for (const auto& inst : block) {
        switch (inst.type) {
            case Tp::MOV_P:
                current_offset += inst.value;
                break;
            case Tp::ADD_V:
            case Tp::SET_V:
            case Tp::IN:
            case Tp::MAC:
                touched.insert(current_offset + inst.offset);
                break;
            case Tp::MATH_MAC:
                touched.insert(current_offset); // Anchor cell becomes 0
                for (const auto& effect : inst.sub_inst) {
                    touched.insert(current_offset + effect.offset);
                }
                break;
            case Tp::LOP_S:
            case Tp::IF_S: {
                long long branch_offset = current_offset;
                if (!collectTouches(inst.sub_inst, branch_offset, touched)) {
                    return false;
                }
                // If a loop/if has unmatched pointer movement, its net effect is dynamic.
                if (branch_offset != current_offset) {
                    return false;
                }
                break;
            }
            case Tp::SCAN:
                return false;
            default:
                break;
        }
    }
    return true;
}

// Internal implementation of static analysis for constant folding
std::vector<Instruction> analyzeBlockImpl(
    const std::vector<Instruction>& input,
    AnalysisState& state,
    std::unordered_set<long long>* touched_out,
    bool& changed)
{
    std::vector<Instruction> output;
    output.reserve(input.size());

    auto readCell = [&](const AnalysisState& current_state, long long addr) {
        if (!current_state.v_ptr_known) {
            return MEMCell{ValState::UNKNOWN, 0};
        }
        auto it = current_state.v_mem.find(addr);
        if (it == current_state.v_mem.end()) {
            return MEMCell{ValState::KNOWN, 0};
        }
        return it->second;
    };

    auto writeKnown = [&](AnalysisState& current_state, long long addr, long long value) {
        if (!current_state.v_ptr_known) {
            current_state.v_mem.clear();
            return;
        }
        const unsigned char normalized = toByte(value);
        current_state.v_mem[addr] = MEMCell{ValState::KNOWN, normalized};
    };

    auto writeUnknown = [&](AnalysisState& current_state, long long addr) {
        if (!current_state.v_ptr_known) {
            current_state.v_mem.clear();
            return;
        }
        current_state.v_mem[addr] = MEMCell{ValState::UNKNOWN, 0};
    };


    auto touch = [&](long long addr) {
        if (touched_out != nullptr) {
            touched_out->insert(addr);
        }
    };

    for (const auto& inst : input) {
        switch (inst.type) {
            case Tp::MOV_P:
                state.v_ptr += inst.value;
                output.push_back(inst);
                break;

            case Tp::SET_V: {
                const long long addr = state.v_ptr + inst.offset;
                const MEMCell before = readCell(state, addr);
                const unsigned char normalized = toByte(inst.value);

                writeKnown(state, addr, normalized);
                touch(addr);

                // Fold redundant SET_V
                if (before.state == ValState::KNOWN && before.value == normalized) {
                    changed = true;
                    break;
                }

                Instruction folded = inst;
                folded.value = normalized;
                output.push_back(std::move(folded));
                break;
            }

            case Tp::ADD_V: {
                const long long addr = state.v_ptr + inst.offset;
                const MEMCell before = readCell(state, addr);
                touch(addr);

                if (before.state == ValState::KNOWN) {
                    // Constant folding ADD_V -> SET_V
                    const unsigned char after = toByte(static_cast<long long>(before.value) + inst.value);
                    writeKnown(state, addr, after);
                    output.push_back(Instruction{Tp::SET_V, inst.offset, after, {}});
                    changed = true;
                } else {
                    writeUnknown(state, addr);
                    output.push_back(inst);
                }
                break;
            }

            case Tp::IN: {
                const long long addr = state.v_ptr + inst.offset;
                writeUnknown(state, addr);
                touch(addr);
                output.push_back(inst);
                break;
            }

            case Tp::OUT:
                output.push_back(inst);
                break;

            case Tp::MAC: {
                const long long src_addr = state.v_ptr;
                const long long dst_addr = state.v_ptr + inst.offset;
                const MEMCell src = readCell(state, src_addr);
                const MEMCell dst = readCell(state, dst_addr);
                touch(dst_addr);

                if (src.state == ValState::KNOWN && src.value == 0) {
                    // src is 0, MAC does nothing
                    changed = true;
                    break;
                }

                if (src.state == ValState::KNOWN && dst.state == ValState::KNOWN) {
                    // Constant folding MAC -> SET_V
                    const unsigned char after = toByte(static_cast<long long>(dst.value) + static_cast<long long>(src.value) * inst.value);
                    writeKnown(state, dst_addr, after);
                    output.push_back(Instruction{Tp::SET_V, inst.offset, after, {}});
                    changed = true;
                } else {
                    writeUnknown(state, dst_addr);
                    output.push_back(inst);
                }
                break;
            }

            case Tp::MATH_MAC: {
                const long long src_addr = state.v_ptr;
                const MEMCell src = readCell(state, src_addr);

                if (src.state == ValState::KNOWN) {
                    const long long src_value = src.value;
                    if (src_value == 0) {
                        changed = true;
                        break;
                    }

                    long long k = 0;
                    long long period = 0;
                    // Solve for number of iterations k
                    const bool solvable = MathSolver::solveLinearCongruence(inst.value, -src_value, kTapeMod, k, period);
                    if (!solvable) {
                        output.push_back(Instruction{Tp::TRAP, 0, 0, {}});
                        changed = true;
                        break;
                    }

                    if (k == 0) k = period;

                    // Apply effects for k iterations
                    for (const auto& effect : inst.sub_inst) {
                        const long long addr = state.v_ptr + effect.offset;
                        const long long delta = effect.value * k;
                        const MEMCell before = readCell(state, addr);
                        touch(addr);

                        if (before.state == ValState::KNOWN) {
                            const unsigned char after = toByte(static_cast<long long>(before.value) + delta);
                            writeKnown(state, addr, after);
                            output.push_back(Instruction{Tp::SET_V, effect.offset, after, {}});
                        } else {
                            writeUnknown(state, addr);
                            output.push_back(Instruction{Tp::ADD_V, effect.offset, delta, {}});
                        }
                    }

                    writeKnown(state, src_addr, 0);
                    touch(src_addr);
                    output.push_back(Instruction{Tp::SET_V, 0, 0, {}});
                    changed = true;
                } else {
                    // Source unknown, but loop ends when cell is 0
                    writeKnown(state, src_addr, 0);
                    touch(src_addr);
                    for (const auto& effect : inst.sub_inst) {
                        writeUnknown(state, state.v_ptr + effect.offset);
                        touch(state.v_ptr + effect.offset);
                    }
                    output.push_back(inst);
                }
                break;
            }

            case Tp::SCAN: {
                const MEMCell anchor = readCell(state, state.v_ptr);
                if (anchor.state == ValState::KNOWN && anchor.value == 0) {
                    changed = true;
                    break;
                }
                output.push_back(inst);
                // SCAN makes pointer and memory state unknown
                state.v_mem.clear();
                state.v_ptr_known = false;
                break;
            }

            case Tp::LOP_S: {
                const long long anchor_addr = state.v_ptr;
                const MEMCell anchor = readCell(state, anchor_addr);
                if (anchor.state == ValState::KNOWN && anchor.value == 0) {
                    changed = true;
                    break;
                }

                // Identify all cells touched by the loop
                std::unordered_set<long long> touched_inside;
                long long dummy_offset = 0;
                bool predictable_movement = collectTouches(inst.sub_inst, dummy_offset, touched_inside);

                // Analyze with touched cells marked as UNKNOWN
                const AnalysisState snapshot = state;
                AnalysisState sandbox = state;

                if (!predictable_movement) {
                    sandbox.v_mem.clear();
                    sandbox.v_ptr_known = false;
                } else {
                    for (long long rel_addr : touched_inside) {
                        writeUnknown(sandbox, state.v_ptr + rel_addr);
                    }
                }

                std::vector<Instruction> analyzed_body = analyzeBlockImpl(inst.sub_inst, sandbox, nullptr, changed);

                const MEMCell anchor_after = readCell(sandbox, anchor_addr);

                // Pointer is known and returns to the same position, anchor cell becomes 0, and no unknown cells are introduced.
                const bool single_iteration = (sandbox.v_ptr_known && snapshot.v_ptr_known &&
                                               sandbox.v_ptr == snapshot.v_ptr &&
                                               anchor_after.state == ValState::KNOWN &&
                                               anchor_after.value == 0);

                if (single_iteration) {
                    Instruction if_node;
                    if_node.type = Tp::IF_S;
                    if_node.offset = 0;
                    if_node.value = 0;
                    if_node.sub_inst = std::move(analyzed_body);
                    output.push_back(std::move(if_node));
                    changed = true;
                } else {
                    Instruction loop_node = inst;
                    loop_node.sub_inst = std::move(analyzed_body);
                    output.push_back(std::move(loop_node));
                }

                // Update state after loop
                state = snapshot;
                if (!predictable_movement) {
                    state.v_mem.clear();
                    state.v_ptr_known = false;
                } else {
                    for (long long rel_addr : touched_inside) {
                        writeUnknown(state, state.v_ptr + rel_addr);
                    }
                    if (sandbox.v_ptr != snapshot.v_ptr) {
                        state.v_ptr_known = false;
                    }
                    if (state.v_ptr_known) {
                        writeKnown(state, anchor_addr, 0);
                    }
                }
                break;
            }

            case Tp::IF_S: {
                const AnalysisState snapshot = state;
                AnalysisState branch_state = state;
                std::unordered_set<long long> touched_inside;
                long long dummy_offset = 0;
                bool predictable_movement = collectTouches(inst.sub_inst, dummy_offset, touched_inside);

                if (!predictable_movement) {
                    branch_state.v_mem.clear();
                    branch_state.v_ptr_known = false;
                } else {
                    for (long long rel_addr : touched_inside) {
                        writeUnknown(branch_state, state.v_ptr + rel_addr);
                    }
                }

                Instruction if_node = inst;
                if_node.sub_inst = analyzeBlockImpl(inst.sub_inst, branch_state, nullptr, changed);

                if (if_node.sub_inst.empty()) {
                    changed = true;
                } else {
                    output.push_back(std::move(if_node));
                }

                state = snapshot;
                if (!predictable_movement) {
                    state.v_mem.clear();
                    state.v_ptr_known = false;
                } else {
                    for (long long rel_addr : touched_inside) {
                        writeUnknown(state, state.v_ptr + rel_addr);
                    }
                    if (branch_state.v_ptr != snapshot.v_ptr) {
                        state.v_ptr_known = false;
                    }
                }
                break;
            }

            default:
                output.push_back(inst);
                break;
        }
    }

    return output;
}
} // namespace

// Static Analysis pass for constant folding and redundancy removal
std::vector<Instruction> Optimizer::staticAnalysis(const std::vector<Instruction>& block, bool& changed)
{
    AnalysisState root_state;
    return analyzeBlockImpl(block, root_state, nullptr, changed);
}

std::vector<Instruction> Optimizer::eliminateRedundantWrites(const std::vector<Instruction>& block, bool& changed)
{
    std::vector<Instruction> output;
    output.reserve(block.size());

    std::vector<bool> keep;
    keep.reserve(block.size());

    std::unordered_map<long long, size_t> last_write;
    bool ptr_known = true;
    long long ptr = 0;

    auto invalidate_addr = [&](long long addr) {
        last_write.erase(addr);
    };

    auto clear_tracking = [&]() {
        last_write.clear();
    };

    for (const auto& inst : block) {
        if (inst.type == Tp::MOV_P) {
            if (ptr_known) {
                ptr += inst.value;
            }
            output.push_back(inst);
            keep.push_back(true);
            continue;
        }

        if (inst.type == Tp::LOP_S || inst.type == Tp::IF_S) {
            bool sub_changed = false;
            Instruction node = inst;
            node.sub_inst = eliminateRedundantWrites(inst.sub_inst, sub_changed);
            changed = changed || sub_changed;

            output.push_back(std::move(node));
            keep.push_back(true);

            clear_tracking();
            ptr_known = false;
            continue;
        }

        if (inst.type == Tp::SCAN) {
            output.push_back(inst);
            keep.push_back(true);
            clear_tracking();
            ptr_known = false;
            continue;
        }

        if (!ptr_known) {
            output.push_back(inst);
            keep.push_back(true);
            continue;
        }

        const long long addr = ptr + inst.offset;

        switch (inst.type) {
            case Tp::SET_V:
            case Tp::IN: {
                // I/O operations must be preserved.
                auto it = last_write.find(addr);
                if (it != last_write.end()) {
                    keep[it->second] = false;
                    changed = true;
                }
                output.push_back(inst);
                keep.push_back(true);
                invalidate_addr(addr); 
                break;
            }

            case Tp::ADD_V: {
                invalidate_addr(addr); // read of old value
                output.push_back(inst);
                keep.push_back(true);
                last_write[addr] = output.size() - 1;
                break;
            }

            case Tp::OUT: {
                invalidate_addr(addr); // read
                output.push_back(inst);
                keep.push_back(true);
                break;
            }

            case Tp::MAC: {
                const long long src_addr = ptr;
                const long long dst_addr = ptr + inst.offset;
                invalidate_addr(src_addr); // read
                invalidate_addr(dst_addr); // read-modify-write

                output.push_back(inst);
                keep.push_back(true);
                last_write[dst_addr] = output.size() - 1;
                break;
            }

            case Tp::MATH_MAC: {
                output.push_back(inst);
                keep.push_back(true);
                clear_tracking();
                break;
            }

            default:
                output.push_back(inst);
                keep.push_back(true);
                clear_tracking();
                break;
        }
    }

    std::vector<Instruction> compact;
    compact.reserve(output.size());
    for (size_t i = 0; i < output.size(); ++i) {
        if (keep[i]) {
            compact.push_back(std::move(output[i]));
        }
    }

    if (!blockEqual(compact, block)) {
        changed = true;
    }

    return compact;
}

// Main optimization loop: iterate until fixed point or max iterations reached
std::vector<Instruction> Optimizer::optimize(const std::vector<Operation>& instructions)
{
    size_t index = 0;
    std::vector<Instruction> ir = buildAst(instructions, index);

    bool changed = true;
    int iteration = 0;
    constexpr int k_max_iterations = 32;

    while (changed && iteration < k_max_iterations) {
        changed = false;

        bool pass_changed = false;
        ir = canonicalization(ir, pass_changed);
        changed = changed || pass_changed;

        pass_changed = false;
        ir = semanticLifting(ir, pass_changed);
        changed = changed || pass_changed;

        pass_changed = false;
        ir = staticAnalysis(ir, pass_changed);
        changed = changed || pass_changed;

        pass_changed = false;
        ir = eliminateRedundantWrites(ir, pass_changed);
        changed = changed || pass_changed;

        ++iteration;
    }

    if (iteration >= k_max_iterations) {
        std::cerr << "Warning: Optimization did not converge after "
                  << k_max_iterations << " iterations." << std::endl;
    }

    return ir;
}
