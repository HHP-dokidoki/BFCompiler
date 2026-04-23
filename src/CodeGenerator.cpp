#include "CodeGenerator.h"




bool CodeGenerator::open(const std::string& filename) {
    out_file.open(filename);
    return out_file.is_open();
}

void CodeGenerator::close() {
    if (out_file.is_open()) {
        out_file.close();
    }
}

void CodeGenerator::generate(const std::vector<Instruction>& instructions) {

    if (!out_file.is_open()) {
        return;
    }

    out_file << "#include <stdio.h>\n";
    out_file << "unsigned char array[3000000] = {0};\n";
    out_file << "unsigned char* ptc = array;\n";
    out_file << "int main()\n{\n";

    auto generate_block = [&](auto& self, const std::vector<Instruction>& block) -> void {
        for (const auto& cmd : block) {
            switch (cmd.type) {
                case Tp::ADD_V:
                    out_file << "    *(ptc+"  << cmd.offset << ") += " << cmd.value << ";\n";
                    break;
                case Tp::MOV_P:
                    out_file << "    ptc += " << cmd.value << ";\n";
                    break;
                case Tp::LOP_S:
                    out_file << "    while(*ptc) {\n";
                    self(self, cmd.sub_inst);
                    out_file << "    }\n";
                    break;
                case Tp::OUT:
                    for (int i = 0; i < cmd.value; ++i)
                        out_file << "    putchar(*(ptc+" << cmd.offset << "));\n";
                    break;
                case Tp::IN:
                    for (int i = 0; i < cmd.value; ++i)
                        out_file << "    *(ptc+" << cmd.offset << ") = getchar();\n";
                    break;
                default:
                    break;
            }
        }
    };

    generate_block(generate_block, instructions);

    out_file << "    return 0;\n";
    out_file << "}\n";
}
