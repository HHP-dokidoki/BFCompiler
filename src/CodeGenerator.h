#pragma once
#include "Common.h"

class CodeGenerator {
private:
    std::ofstream out_file;

public:
    CodeGenerator() {}

    bool open(const std::string& filename);

    void close();

    void generate(const std::vector<Instruction>& instructions);
    
};