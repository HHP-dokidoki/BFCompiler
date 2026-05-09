#include "CodeGenerator.h"


bool CodeGenerator::open(const std::string& filename) {
    out_file.open(filename, std::ios::binary);
    if (out_file.is_open()) {
        io_buffer.assign(1 << 20, 0);
        out_file.rdbuf()->pubsetbuf(io_buffer.data(), static_cast<std::streamsize>(io_buffer.size()));
    }
    return out_file.is_open();
}

void CodeGenerator::close() {
    if (out_file.is_open()) {
        out_file.close();
    }
}

// Recursive block generator helper
static void generateBlock(std::ostream& out_file, int& math_inst_id, const std::vector<Instruction>& block) {
    // Helper to generate pointer access strings
    auto get_ptr_string = [](long long offset) -> std::string {
        if (offset == 0) {
            return "(*ptc)";
        }
        if (offset > 0) {
            return "(*(ptc+" + std::to_string(offset) + "))";
        }
        // offset < 0 already includes '-' in to_string
        return "(*(ptc" + std::to_string(offset) + "))";
    };

    for (const auto& cmd : block) {
        switch (cmd.type) {
            case Tp::ADD_V:
                out_file << "    " << get_ptr_string(cmd.offset) << " += " << (int)cmd.value << ";\n";
                break;
            case Tp::SET_V:
                out_file << "    " << get_ptr_string(cmd.offset) << " = " << (int)(unsigned char)cmd.value << ";\n";
                break;
            case Tp::MOV_P:
                out_file << "    ptc += " << cmd.value << ";\n";
                break;
            case Tp::LOP_S:
                out_file << "    while(*ptc) {\n";
                generateBlock(out_file, math_inst_id, cmd.sub_inst);
                out_file << "    }\n";
                break;
            case Tp::IF_S:
                out_file << "    if(*ptc) {\n";
                generateBlock(out_file, math_inst_id, cmd.sub_inst);
                out_file << "    }\n";
                break;
            case Tp::OUT:
                for (int i = 0; i < cmd.value; ++i)
                    out_file << "    putchar(" << get_ptr_string(cmd.offset) << ");\n";
                break;
            case Tp::IN:
                for (int i = 0; i < cmd.value; ++i)
                    out_file << "    { int c = getchar(); if (c != EOF) " << get_ptr_string(cmd.offset) << " = c; }\n";
                break;
            case Tp::MAC:
                out_file << "    " << get_ptr_string(cmd.offset) << " += (*ptc) * " << cmd.value << ";\n";
                break;
            case Tp::SCAN:
                out_file << "    while(*ptc) ptc += " << cmd.value << ";\n";
                break;
            case Tp::MATH_MAC: {
                // Advanced loop optimization: solves for the number of iterations
                // needed to make the current cell zero, then applies effects.
                const int id = math_inst_id++;
                out_file << "    {\n";
                out_file << "        long long __k" << id << " = 0;\n";
                out_file << "        long long __period" << id << " = 0;\n";
                out_file << "        long long __src" << id << " = (long long)(*ptc);\n";
                out_file << "        if (__src" << id << " != 0) {\n";
                out_file << "            if (!solve_linear_congruence(" << cmd.value << ", -__src" << id << ", 256, &__k" << id << ", &__period" << id << ")) {\n";
                out_file << "                while(1) {} // Infinite loop if no solution\n";
                out_file << "            }\n";
                out_file << "            if (__k" << id << " == 0) __k" << id << " = __period" << id << ";\n";
                for (const auto& effect : cmd.sub_inst) {
                    if (effect.type == Tp::ADD_V && effect.value != 0) {
                        out_file << "            " << get_ptr_string(effect.offset) << " += (unsigned char)(" << effect.value << " * __k" << id << ");\n";
                    }
                }
                out_file << "            *ptc = 0;\n";
                out_file << "        }\n";
                out_file << "    }\n";
                break;
            }
            case Tp::TRAP:
                out_file << "    while(1) {}\n";
                break;
            default:
                break;
        }
    }
}

void CodeGenerator::generate(const std::vector<Instruction>& instructions) {

    if (!out_file.is_open()) {
        return;
    }

    // Generate C file header and helper functions for linear congruence
    out_file << "#include <stdio.h>\n";
    out_file << "#include <stdlib.h>\n\n";
    
    // Extended Euclidean Algorithm
    out_file << "static long long egcd(long long a, long long b, long long* x, long long* y) {\n";
    out_file << "    if (b == 0) {\n";
    out_file << "        *x = (a >= 0) ? 1 : -1;\n";
    out_file << "        *y = 0;\n";
    out_file << "        return (a >= 0) ? a : -a;\n";
    out_file << "    }\n";
    out_file << "    long long x1 = 0, y1 = 0;\n";
    out_file << "    long long g = egcd(b, a % b, &x1, &y1);\n";
    out_file << "    *x = y1;\n";
    out_file << "    *y = x1 - (a / b) * y1;\n";
    out_file << "    return g;\n";
    out_file << "}\n\n";

    // Solver for a*x = b (mod m)
    out_file << "static int solve_linear_congruence(long long a, long long b, long long m, long long* x0, long long* period) {\n";
    out_file << "    if (m <= 0) return 0;\n";
    out_file << "    a %= m; b %= m;\n";
    out_file << "    if (a < 0) a += m;\n";
    out_file << "    if (b < 0) b += m;\n";
    out_file << "    long long x = 0, y = 0;\n";
    out_file << "    long long g = egcd(a, m, &x, &y);\n";
    out_file << "    if (b % g != 0) return 0;\n";
    out_file << "    long long m_div = m / g;\n";
    out_file << "    long long mul = b / g;\n";
    out_file << "    long long base = (x * mul) % m_div;\n";
    out_file << "    if (base < 0) base += m_div;\n";
    out_file << "    *x0 = base;\n";
    out_file << "    *period = m_div;\n";
    out_file << "    return 1;\n";
    out_file << "}\n\n";

    // Memory tape and pointer
    out_file << "int main()\n{\n";
    out_file << "    unsigned char* array = (unsigned char*)calloc(300000000, 1);\n";
    out_file << "    if (!array) { fprintf(stderr, \"Out of memory\\n\"); return 1; }\n";
    out_file << "    unsigned char* ptc = array + 150000000;\n";
    out_file << "    static unsigned char __in_buf[1 << 20];\n";
    out_file << "    static unsigned char __out_buf[1 << 20];\n";
    out_file << "    setvbuf(stdin, (char*)__in_buf, _IOFBF, sizeof(__in_buf));\n";
    out_file << "    setvbuf(stdout, (char*)__out_buf, _IOFBF, sizeof(__out_buf));\n";

    int math_inst_id = 0;

    generateBlock(out_file, math_inst_id, instructions);

    out_file << "    return 0;\n";
    out_file << "}\n";
}
