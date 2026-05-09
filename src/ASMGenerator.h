#pragma once

#include "Common.h"

class ASMGenerator {
private:
    std::ofstream out_file;
    std::vector<char> io_buffer;
    size_t loop_counter = 0;

    void generateNode (const Instruction& instruction);

public:
    ASMGenerator() {}

    bool open(const std::string& file_name);

    void close();

    void generate(const std::vector<Instruction>& instructions);
    
};
