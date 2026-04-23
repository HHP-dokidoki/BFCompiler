#include "Common.h"
class Optimizer {
private:
    // 全局静态追踪虚拟机
    std::unordered_map<int, MemCell> v_mem;
    int v_ptr = 0;

    // ==========================================
    // Phase 1.5: 线�?Token �?AST �?
    // ==========================================
    std::vector<Instruction> buildAST(const std::vector<OPT>& linear_insts, size_t& index) {
        std::vector<Instruction> block;
        while (index < linear_insts.size()) {
            const auto& opt = linear_insts[index++];
            if (opt.type == Tp::LOP_E) break; // 当前层结�?

            Instruction inst;
            inst.type = opt.type;
            inst.value = opt.value;
            inst.offset = 0;

            if (opt.type == Tp::LOP_S) {
                inst.sub_inst = buildAST(linear_insts, index); // 递归建树
            }
            block.push_back(inst);
        }
        return block;
    }

    // ==========================================
    // Phase 2: 基本块规范化与基址折叠
    // ==========================================
    std::vector<Instruction> pass2_canonicalize(const std::vector<Instruction>& block) {
        std::vector<Instruction> optimized;
        int current_offset = 0;
        std::unordered_map<int, int> delta_v; // 记录当前状态下的内存净改变

        auto flush_memory_ops = [&]() {
            for (const auto& [off, val] : delta_v) {
                if (val != 0) {
                    Instruction op;
                    op.type = Tp::ADD_V;
                    op.offset = off;
                    op.value = val;
                    optimized.push_back(op);
                }
            }
            delta_v.clear();
        };

        for (const auto& inst : block) {
            if (inst.type == Tp::MOV_P) {
                current_offset += inst.value; // 纯编译期折叠指针
            } 
            else if (inst.type == Tp::ADD_V) {
                delta_v[current_offset] += inst.value; // 纯编译期折叠加减
            }
            else {
                // 遇到循环�?I/O，必须打断当前折叠状�?
                flush_memory_ops();
                if (current_offset != 0) {
                    Instruction mv; mv.type = Tp::MOV_P; mv.offset = 0; mv.value = current_offset;
                    optimized.push_back(mv);
                    current_offset = 0;
                }

                if (inst.type == Tp::LOP_S) {
                    Instruction new_loop = inst;
                    new_loop.sub_inst = pass2_canonicalize(inst.sub_inst);
                    optimized.push_back(new_loop);
                } else {
                    Instruction new_inst = inst;
                    new_inst.offset = current_offset; 
                    optimized.push_back(new_inst);
                }
            }
        }
        flush_memory_ops();
        if (current_offset != 0) {
            Instruction mv; mv.type = Tp::MOV_P; mv.offset = 0; mv.value = current_offset;
            optimized.push_back(mv);
        }
        return optimized;
    }

    // ==========================================
    // Phase 3: 高阶语义提炼 (模式抽象与特征断言)
    // ==========================================
    std::vector<Instruction> pass3_semanticLifting(const std::vector<Instruction>& block) {
        std::vector<Instruction> optimized;
        for (const auto& inst : block) {
            if (inst.type == Tp::LOP_S) {
                Instruction loop = inst;
                loop.sub_inst = pass3_semanticLifting(inst.sub_inst); // 先优化内�?

                // TODO: 1. 检�?loop.sub_inst 是否有嵌套循环或 I/O (如果有，直接跳过抽象)
                bool can_abstract = true; 
                
                if (can_abstract) {
                    // TODO: 2. 模拟内部走一遍，得出 delta_p �?delta_v 字典
                    int delta_p = 0;
                    std::unordered_map<int, int> delta_v;
                    // ... 你的特征提取代码 ...

                    if (delta_p == 0 && delta_v[0] == -1) {
                        // 常规乘加 / 清零
                        loop.type = Tp::MAC;
                        loop.delta_map = delta_v; 
                    } 
                    else if (delta_p == 0 && delta_v[0] != 0) {
                        // 硬核突破点：线性同余循�?[------->+<]
                        loop.type = Tp::MATH_MAC;
                        loop.value = delta_v[0]; // 步长，比�?-7
                        loop.delta_map = delta_v;
                    }
                    else if (delta_p != 0 && delta_v.empty()) {
                        // 扫描循环 [>]
                        loop.type = Tp::SCAN;
                        loop.value = delta_p; // 步长
                    }
                }
                optimized.push_back(loop);
            } else {
                optimized.push_back(inst);
            }
        }
        return optimized;
    }

    // ==========================================
    // Phase 4: 全局静态追踪与沙盒推演
    // ==========================================
    std::vector<Instruction> pass4_staticAnalysis(const std::vector<Instruction>& block) {
        std::vector<Instruction> optimized;

        for (const auto& inst : block) {
            // --- 处理基本指令，更新状态机 ---
            if (inst.type == Tp::SET_V) {
                v_mem[v_ptr + inst.offset] = {ValState::KNOWN_VAL, (unsigned char)inst.value};
                optimized.push_back(inst);
            }
            else if (inst.type == Tp::ADD_V) {
                auto& cell = v_mem[v_ptr + inst.offset];
                if (cell.state == ValState::KNOWN_VAL) {
                    cell.value += inst.value; // 常数折叠
                }
                optimized.push_back(inst);
            }
            else if (inst.type == Tp::IN) {
                v_mem[v_ptr + inst.offset] = {ValState::UNKNOWN, 0}; // 引入污点
                optimized.push_back(inst);
            }
            else if (inst.type == Tp::MOV_P) {
                v_ptr += inst.value;
                optimized.push_back(inst);
            }
            // --- 处理硬核数学方程推导 ---
            else if (inst.type == Tp::MATH_MAC) {
                auto& cond = v_mem[v_ptr];
                if (cond.state == ValState::KNOWN_VAL) {
                    int start_val = cond.value;
                    int step = (inst.value % 256 + 256) % 256; 
                    int d = MathHelper::gcd(step, 256);

                    if (start_val % d != 0) {
                        // 静态证明必定死循环
                        optimized.push_back({Tp::TRAP, 0, 0, {}, {}});
                    } else {
                        // 静态求�?k，彻底消灭循环！
                        int inv = MathHelper::modInverse(step / d, 256 / d);
                        int k = ((start_val / d) * inv) % (256 / d);
                        
                        // 更新状态机
                        cond.value = 0;
                        for (const auto& [off, val] : inst.delta_map) {
                            if (off == 0) continue;
                            if (v_mem[v_ptr + off].state == ValState::KNOWN_VAL) {
                                v_mem[v_ptr + off].value += k * val;
                            }
                            // 生成 ADD_V 指令替代循环
                            Instruction add_op; add_op.type = Tp::ADD_V; 
                            add_op.offset = off; add_op.value = k * val;
                            optimized.push_back(add_op);
                        }
                        Instruction set_zero; set_zero.type = Tp::SET_V; set_zero.offset = 0; set_zero.value = 0;
                        optimized.push_back(set_zero);
                    }
                } else {
                    // 编译期未知，留给 Phase 5 生成 C 代码解方�?
                    optimized.push_back(inst);
                }
            }
            // --- 处理沙盒控制�?---
            else if (inst.type == Tp::LOP_S) {
                auto& cond = v_mem[v_ptr];

                if (cond.state == ValState::KNOWN_VAL && cond.value == 0) {
                    // 必定不进入，死代码消�?
                    continue; 
                }

                // TODO: 启动沙盒
                // 1. 保存当前�?v_mem �?v_ptr
                // 2. 递归调用 pass4_staticAnalysis(inst.sub_inst) 模拟执行一�?
                // 3. 检�?v_mem[v_ptr] 是否变成�?{KNOWN_VAL, 0}
                // 4. 如果�?-> �?inst 降级�?Tp::IF_S
                // 5. 如果不是 -> 将碰过的内存标为 UNKNOWN，恢�?v_ptr
                
                Instruction loop = inst;
                loop.sub_inst = pass4_staticAnalysis(inst.sub_inst);
                optimized.push_back(loop);
            }
            else {
                optimized.push_back(inst); // 保留其余指令�?MAC, SCAN, OUT
            }
        }
        return optimized;
    }

public:
    Optimizer() = default;

    std::vector<Instruction> optimize(const std::vector<OPT>& linear_insts) {
        size_t index = 0;
        
        std::cout << "[Optimizer] Phase 1.5: Building AST..." << std::endl;
        auto ast_root = buildAST(linear_insts, index);

        std::cout << "[Optimizer] Phase 2: Canonicalization..." << std::endl;
        auto ir_l1 = pass2_canonicalize(ast_root);

        std::cout << "[Optimizer] Phase 3: Semantic Lifting..." << std::endl;
        auto ir_l2 = pass3_semanticLifting(ir_l1);

        std::cout << "[Optimizer] Phase 4: Static Analysis..." << std::endl;
        v_mem.clear(); v_ptr = 0;
        auto ir_l3 = pass4_staticAnalysis(ir_l2);

        return ir_l3;
    }
};





///
void CodeGenerator::generate_node(const Instruction& inst, int indent_level) {
    std::string ind(indent_level * 4, ' ');

    auto get_ptr = [&](int offset) {
        if (offset == 0) return std::string("(*ptc)");
        else if (offset > 0) return std::string("*(ptc + ") + std::to_string(offset) + ")";
        else return std::string("*(ptc - ") + std::to_string(-offset) + ")";
    };

    switch (inst.type) {
        case Tp::ADD_V:
            if (inst.value > 0) out_file << ind << get_ptr(inst.offset) << " += " << inst.value << ";\n";
            else out_file << ind << get_ptr(inst.offset) << " -= " << -inst.value << ";\n";
            break;
        case Tp::SET_V:
            out_file << ind << get_ptr(inst.offset) << " = " << inst.value << ";\n";
            break;
        case Tp::MOV_P:
            if (inst.value > 0) out_file << ind << "ptc += " << inst.value << ";\n";
            else out_file << ind << "ptc -= " << -inst.value << ";\n";
            break;
        case Tp::MAC:
            // TODO: �?MAC 指令生成 *(ptc+off) += (*ptc) * factor; 并最�?*ptc = 0;
            break;
        case Tp::MATH_MAC:
            // 运行时的方程求解�?
            out_file << ind << "{\n";
            out_file << ind << "    unsigned char start_val = " << get_ptr(0) << ";\n";
            out_file << ind << "    // TODO: 插入你用 C 语言写的扩展欧几里得运行时算法计�?k \n";
            out_file << ind << "    " << get_ptr(0) << " = 0;\n";
            // TODO: 生成副作用累加代�?
            out_file << ind << "}\n";
            break;
        case Tp::TRAP:
            out_file << ind << "while(1); // RUNTIME TRAP: INFINITE LOOP\n";
            break;
        case Tp::LOP_S:
            out_file << ind << "while(*ptc) {\n";
            for (const auto& sub : inst.sub_inst) generate_node(sub, indent_level + 1);
            out_file << ind << "}\n";
            break;
        case Tp::IF_S:
            out_file << ind << "if(*ptc) {\n";
            for (const auto& sub : inst.sub_inst) generate_node(sub, indent_level + 1);
            out_file << ind << "}\n";
            break;
        // ... 处理 IN �?OUT ...
    }
}
