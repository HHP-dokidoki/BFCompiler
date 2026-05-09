#include "ASMGenerator.h"
#include "Common.h"
#include "MathSolver.h"


bool ASMGenerator::open(const std::string& file_name)
{
    out_file.open(file_name, std::ios::binary);
    if (out_file.is_open()) {
        io_buffer.assign(1 << 20, 0);
        out_file.rdbuf()->pubsetbuf(io_buffer.data(), static_cast<std::streamsize>(io_buffer.size()));
    }
    return out_file.is_open();
}

void ASMGenerator::close()
{
    if (out_file.is_open()) {
        out_file.close();
    }
}


void ASMGenerator::generateNode (const Instruction& instruction)
{
        
    auto get_ptr = [&](int offset) {
        if (offset == 0) {
             return std::string("[rbx]");
             
        } else if (offset > 0) {
            return "[rbx + " + std::to_string(offset) + "]";

        } else {
            return "[rbx - " + std::to_string(-offset) + "]";
            
        }
    };

    switch (instruction.type) {
        case Tp::ADD_V: {
            int val = instruction.value;
            // add x is equivalent to sub (256-x)
            // sub x is equivalent to add (256-x)
            val = (val % 256 + 256) % 256; 
            if (val == 0) {
                break;
            }
            if (val < 128) {
                out_file << "    add byte ptr " << get_ptr(instruction.offset) << ", " << val << "\n";
            } else {
                out_file << "    sub byte ptr " << get_ptr(instruction.offset) << ", " << (256 - val) << "\n";
            }
            break;
        }


        case Tp::SET_V: {
            out_file << "    mov byte ptr " << get_ptr(instruction.offset) << ", " << instruction.value % 256 << "\n";
            break;
        }
            

        case Tp::MOV_P:{
            if (instruction.value > 0) {
                out_file << "    add rbx, " << instruction.value << "\n";
            } else if (instruction.value < 0) {
                out_file << "    sub rbx, " << -instruction.value << "\n";
            }
            break;

        }
            
        case Tp::IN:{
            for (int i = 0; i < instruction.value; ++i) {
                // Call external getchar function
                out_file << "    call getchar\n";
                out_file << "    cmp eax, -1\n";
                out_file << "    jne valid_in_" << loop_counter << "\n";
                out_file << "    xor eax, eax\n";     
                out_file << "valid_in_" << loop_counter++ << ":\n";
                out_file << "    mov byte ptr " << get_ptr(instruction.offset) << ", al\n";
            }
            break;
        }
            
        case Tp::OUT:{
            for (int i = 0; i < instruction.value; i++) {
                out_file << "    movzx rcx, byte ptr " << get_ptr(instruction.offset) << "\n";
                out_file << "    call putchar\n";
            }
            break;
        }
            
        case Tp::IF_S:{
            int current_if = loop_counter++;
            out_file << "    cmp byte ptr [rbx], 0\n";
            out_file << "    je if_end_" << current_if << "\n";
            
            for (const auto& sub_instruction : instruction.sub_inst) {
                generateNode(sub_instruction);
            }
            
            out_file << "if_end_" << current_if << ":\n";
            break;
        }
        
        case Tp::LOP_S:{
            int current_loop = loop_counter++;
            out_file << "loop_start_" << current_loop << ":\n";
            out_file << "    cmp byte ptr [rbx], 0\n";
            out_file << "    je loop_end_" << current_loop << "\n";
            
            for (const auto& sub_instruction : instruction.sub_inst) {
                generateNode(sub_instruction);
            }
            
            out_file << "    jmp loop_start_" << current_loop << "\n";
            out_file << "loop_end_" << current_loop << ":\n";
            break;
        }
            
        case Tp::SCAN:{
            int current_loop = loop_counter++;
            out_file << "scan_start_" << current_loop << ":\n";
            out_file << "    cmp byte ptr [rbx], 0\n";
            out_file << "    je scan_end_" << current_loop << "\n";
            if (instruction.value > 0) out_file << "    add rbx, " << instruction.value << "\n";
            else out_file << "    sub rbx, " << -instruction.value << "\n";
            out_file << "    jmp scan_start_" << current_loop << "\n";
            out_file << "scan_end_" << current_loop << ":\n";
            break;
        }
        case Tp::MAC:{
            out_file << "    movzx eax, byte ptr [rbx]\n";
            out_file << "    imul eax, eax, " << instruction.value << "\n"; 
            out_file << "    add byte ptr " << get_ptr(instruction.offset) << ", al\n"; 

            break;
        }

        case Tp::MATH_MAC:{
            int step = (instruction.value % 256 + 256) % 256;
            int g = MathSolver::gcd(step, 256);
            
            long long x = 0, y = 0;
            MathSolver::extGcd(step / g, 256 / g, x, y);
            int mod_val = 256 / g;
            int inv = (x % mod_val + mod_val) % mod_val;
            
            int shift = 0;
            int temp_g = g;
            while (temp_g > 1) {
                shift++;
                temp_g >>= 1;
            }

            int current_trap = loop_counter++; 

            out_file << "    movzx ecx, byte ptr [rbx]\n";
            
            if (g > 1) {
                out_file << "    test cl, " << (g - 1) << "\n";
                out_file << "    jnz trap_infinite_loop_" << current_trap << "\n"; 
            }

            out_file << "    neg cl\n";
            if (g > 1) {
                out_file << "    shr ecx, " << shift << "\n";
            }


            out_file << "    movzx eax, cl\n"; 
            out_file << "    imul eax, eax, " << inv << "\n";     // eax = A * inv
            out_file << "    and eax, " << (mod_val - 1) << "\n"; 
            

            for (const auto& effect : instruction.sub_inst) {
                int effect_val = (effect.value % 256 + 256) % 256;
                if (effect_val == 0) continue;

                if (effect_val == 1) {
                    out_file << "    add byte ptr " << get_ptr(effect.offset) << ", al\n";
                } else {
                    out_file << "    imul edx, eax, " << effect_val << "\n"; 
                    out_file << "    add byte ptr " << get_ptr(effect.offset) << ", dl\n";
                }
            }

            out_file << "    mov byte ptr [rbx], 0\n";
            

            if (g > 1) {
                out_file << "    jmp skip_trap_" << current_trap << "\n"; 
                
                out_file << "trap_infinite_loop_" << current_trap << ":\n";
                out_file << "    jmp $\n";
                
                out_file << "skip_trap_" << current_trap << ":\n";
            }
            break;
        }
        
        case Tp::TRAP:{
            out_file << "    jmp $\n";
            break;
        }
        default:
            break;
    }
}

void ASMGenerator::generate(const std::vector<Instruction>& instructions)
{
    out_file << ".intel_syntax noprefix\n";
    out_file << ".global main\n";

    out_file << ".bss\n";
    out_file << ".lcomm tape, 300000000\n"; 

    out_file << ".text\n";
    out_file << "main:\n";

    out_file << "    push rbx\n";          
    out_file << "    sub rsp, 32\n";

    out_file << "    lea rbx, [rip + tape]\n";
    out_file << "    add rbx, 150000000\n";

    for (const auto& instruction : instructions) {
        generateNode(instruction);
    }

    out_file << "    add rsp, 32\n";
    out_file << "    pop rbx\n";
    out_file << "    xor eax, eax\n";
    out_file << "    ret\n";

}


