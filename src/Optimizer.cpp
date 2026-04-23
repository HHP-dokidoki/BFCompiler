#include "Optimizer.h"




std::vector<Instruction> Optimizer::buildAST(const std::vector<OPT>& instructions, size_t& index)
{
    std::vector<Instruction> block;

    while (index < instructions.size()) {

        const auto& inst = instructions[index++];

        if (inst.type == Tp::LOP_E) {
            break;
        }

        Instruction node;
        node.type   = inst.type;
        node.value  = inst.value;
        node.offset = 0;

        if (inst.type == Tp::LOP_S) {
            node.sub_inst = buildAST(instructions, index);
        }

        block.push_back(std::move(node));
    }   
    return block;
}

inline void Optimizer::flush_memory_state(std::unordered_map<long long, long long>&mem_state, std::vector<Instruction>& optimized)
{
    for (const auto& [offset, val] : mem_state) {
        if (val != 0) {
            optimized.push_back(Instruction{Tp::ADD_V, offset, val, {}});
        }
    }
    mem_state.clear();
}

std::vector<Instruction> Optimizer::canonicalization(const std::vector<Instruction>& block)
{
    std::vector<Instruction> optimized;
    std::unordered_map<long long, long long> mem_state;

    long long deltaP = 0;

    for (const auto& inst : block) {

        if (inst.type == Tp::MOV_P) {
            deltaP += inst.value;

        } else if (inst.type == Tp::ADD_V) {
            mem_state[deltaP] += inst.value;

        } else {

            flush_memory_state(mem_state, optimized);

            if (inst.type == Tp::LOP_S) {
                if (deltaP != 0) {
                    optimized.push_back((Instruction){Tp::MOV_P, 0, deltaP, {}});
                    deltaP = 0;
                }

                Instruction sub_block;
                sub_block.type     = inst.type;
                sub_block.value    = inst.value;
                sub_block.offset   = inst.offset;
                sub_block.sub_inst = canonicalization(inst.sub_inst);

                optimized.push_back(std::move(sub_block));
            } else if (inst.type == Tp::OUT || inst.type == Tp::IN){
                if (inst.type == Tp::IN) {
                    printf("Optimizing IN instruction at offset %lld with value %lld\n", deltaP + inst.offset, inst.value);
                } else {
                    printf("Optimizing OUT instruction at offset %lld with value %lld\n", deltaP + inst.offset, inst.value);
                }
                Instruction temp;
                temp.type   = inst.type;
                temp.offset = deltaP;
                temp.value  = inst.value;
                optimized.push_back(std::move(temp));
            }
        }
    }

    flush_memory_state(mem_state, optimized);
    if (deltaP != 0) {
        optimized.push_back((Instruction){Tp::MOV_P, 0, deltaP, {}});
        deltaP = 0;
    }
    return optimized;
}

// std::vector<Instruction> Optimizer::semantic_lifting(const std::vector<Instruction>& block)
// {
//     std::vector<Instruction> optimized;

//     for (const auto& inst : block) {
//         if (inst.type == Tp::LOP_S) {
//             Instruction new_loop = inst;
//             new_loop.sub_inst = semantic_lifting(inst.sub_inst);

//             bool is_complex = false;
//             for (const auto& sub_inst : new_loop.sub_inst) {
//                 if (sub_inst.type == Tp::IN     || sub_inst.type == Tp::OUT ||
//                     sub_inst.type == Tp::LOP_S  || sub_inst.type == Tp::MATH_MAC) {
//                     is_complex = true;
//                     break;
//                 }
//             }

//             if (!is_complex) {
//                 // ... (Since we are trying to lift *this* loop, and it has no LOP_S inside, 
//                 // new_loop.sub_inst and inst.sub_inst are identical in structure).
//                 long long delta_P = 0;
//                 std::unordered_map<long long, long long> mem_state;
                
//                 for (const auto& sub_inst : new_loop.sub_inst) {
//                     if (sub_inst.type == Tp::MOV_P) {
//                         delta_P += sub_inst.value;
//                     } else if (sub_inst.type == Tp::ADD_V) {
//                         mem_state[sub_inst.offset + delta_P] += sub_inst.value;
//                     } else if (sub_inst.type == Tp::SET_V) {
//                         mem_state[sub_inst.offset + delta_P] = sub_inst.value;
//                     } else if (sub_inst.type == Tp::MAC) {
//                         mem_state[sub_inst.offset + delta_P] += mem_state[delta_P] * sub_inst.value;
//                     }
//                 }

//                 if (delta_P == 0) {
//                     if (mem_state.size() == 1 && mem_state.count(0) && std::abs(mem_state[0]) == 1) {
//                         optimized.push_back(Instruction{Tp::SET_V, 0, 0, {}});
//                         continue;
//                     }
//                     else if (mem_state.count(0) && mem_state[0] == -1) {
//                         for (const auto& [off, val] : mem_state) {
//                             if (off != 0 && val != 0) {
//                                 optimized.push_back(Instruction{Tp::MAC, off, val, {}});
//                             }
//                         }
//                         optimized.push_back(Instruction{Tp::SET_V, 0, 0, {}});
//                         continue;
//                     }
//                     else if (mem_state.count(0) && mem_state[0] != 0 && std::abs(mem_state[0]) != 1) {
//                         Instruction math_mac;
//                         math_mac.type = Tp::MATH_MAC;
//                         math_mac.value = mem_state[0]; 
//                         for (const auto& [off, val] : mem_state) {
//                             if (off != 0 && val != 0) {
//                                 math_mac.sub_inst.push_back(Instruction{Tp::ADD_V, off, val, {}});
//                             }
//                         }
//                         optimized.push_back(std::move(math_mac));
//                         continue;
//                     }
//                 } else if (mem_state.empty() && delta_P != 0) {
//                     optimized.push_back(Instruction{Tp::SCAN, 0, delta_P, {}});
//                     continue;
//                 }
//             } else {
//                 new_loop.type == Tp::LOP_S;
//                 optimized.push_back(std::move(new_loop));
//             }
//         } else {
//             optimized.push_back(inst);
//         }
//     }
//     return optimized;
// }

// std::vector<Instruction> Optimizer::static_analysis(const std::vector<Instruction>& block)
// {
//     // Implement Status Machine for constant folding, dead code elimination, and sandbox execution
//     std::unordered_map<long long, MEMCell> v_mem;
//     long long v_ptr = 0;

//     auto execute_block = [&](auto& self, const std::vector<Instruction>& sub_block) -> std::vector<Instruction> {
//         std::vector<Instruction> processed;
//         for (const auto& inst : sub_block) {
//             if (inst.type == Tp::MOV_P) {
//                 v_ptr += inst.value;
//                 processed.push_back(inst);
//             } 
//             else if (inst.type == Tp::SET_V) {
//                 v_mem[v_ptr + inst.offset] = {ValState::KNOWN, static_cast<unsigned char>(inst.value)};
//                 processed.push_back(inst);
//             } 
//             else if (inst.type == Tp::ADD_V) {
//                 long long abs_pos = v_ptr + inst.offset;
//                 if (v_mem.count(abs_pos) && v_mem[abs_pos].state == ValState::KNOWN) {
//                     v_mem[abs_pos].value += inst.value;
//                     // Fold into SET_V if we want, but keeping ADD_V with known state is fine for now
//                 }
//                 processed.push_back(inst);
//             }
//             else if (inst.type == Tp::IN) {
//                 v_mem[v_ptr + inst.offset] = {ValState::UNKNOWN, 0};
//                 processed.push_back(inst);
//             }
//             else if (inst.type == Tp::OUT) {
//                 processed.push_back(inst);
//             }
//             else if (inst.type == Tp::MAC) {
//                 long long src = v_ptr;
//                 long long dst = v_ptr + inst.offset;
//                 if (v_mem.count(src) && v_mem[src].state == ValState::KNOWN && 
//                     v_mem.count(dst) && v_mem[dst].state == ValState::KNOWN) {
//                     v_mem[dst].value += v_mem[src].value * inst.value;
//                 } else {
//                     v_mem[dst] = {ValState::UNKNOWN, 0};
//                 }
//                 processed.push_back(inst);
//             }
//             else if (inst.type == Tp::MATH_MAC) {
//                 long long src = v_ptr;
//                 if (v_mem.count(src) && v_mem[src].state == ValState::KNOWN) {
//                     // Situation A: Initial value is KNOWN. We can theoretically resolve GCD/ExtGCD here.
//                     // But for brevity of the framework, we simulate marking it corrupted or solving it.
//                     for (const auto& eff : inst.sub_inst) {
//                         long long dst = v_ptr + eff.offset;
//                         v_mem[dst] = {ValState::UNKNOWN, 0};
//                     }
//                     v_mem[src] = {ValState::UNKNOWN, 0};
//                     processed.push_back(inst);
//                 } else {
//                     // Situation B: Initial value is UNKNOWN.
//                     for (const auto& eff : inst.sub_inst) {
//                         long long dst = v_ptr + eff.offset;
//                         v_mem[dst] = {ValState::UNKNOWN, 0};
//                     }
//                     processed.push_back(inst);
//                 }
//             }
//             else if (inst.type == Tp::LOP_S) {
//                 bool is_dead = false;
//                 if (v_mem.count(v_ptr) && v_mem[v_ptr].state == ValState::KNOWN && v_mem[v_ptr].value == 0) {
//                     is_dead = true;
//                 }

//                 if (is_dead) {
//                     continue; // Skip the whole loop block
//                 } else {
//                     // Snapshot and dry run (simplified Sandbox implementation)
//                     Instruction sandbox_loop = inst;
//                     sandbox_loop.sub_inst = self(self, inst.sub_inst);

//                     // We taint memory that is modified in the loop as UNKNOWN 
//                     // because we can't fully predict loop counts without heavy symbolic execution
//                     for (const auto& sub : sandbox_loop.sub_inst) {
//                         if (sub.type == Tp::ADD_V || sub.type == Tp::SET_V || sub.type == Tp::IN || sub.type == Tp::MAC) {
//                             v_mem[v_ptr + sub.offset] = {ValState::UNKNOWN, 0};
//                         } else if (sub.type == Tp::MATH_MAC) {
//                             for (const auto& eff : sub.sub_inst) {
//                                 v_mem[v_ptr + eff.offset] = {ValState::UNKNOWN, 0};
//                             }
//                         }
//                     }
//                     processed.push_back(sandbox_loop);
//                 }
//             }
//             else {
//                 processed.push_back(inst);
//             }
//         }
//         return processed;
//     };

//     return execute_block(execute_block, block);
// }


// std::vector<Instruction> Optimizer::optimize(std::vector<OPT>& instructions)
// {
//     size_t index = 0;
//     std::vector<Instruction> ast = buildAST(instructions, index);
//     std::vector<Instruction> phase1 = canonicalization(ast);
//     std::vector<Instruction> phase2 = semantic_lifting(phase1);
//     std::vector<Instruction> phase3 = static_analysis(phase2);

//     return phase3;
// }
