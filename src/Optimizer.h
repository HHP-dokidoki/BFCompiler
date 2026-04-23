#pragma once
#include "Common.h"

class Optimizer{
    
    private:

        std::vector<Instruction> buildAST(const std::vector<OPT>& instructions, size_t& index);
    
        std::vector<Instruction> canonicalization(const std::vector<Instruction>& instructions);

        std::vector<Instruction> semantic_lifting(const std::vector<Instruction>& block);
    
        std::vector<Instruction> static_analysis(const std::vector<Instruction>& block);

        inline void flush_memory_state(std::unordered_map<long long, long long>& mem_state, std::vector<Instruction>& optimized);

    public:
        std::vector<Instruction> optimize(std::vector<OPT>& instructions);

};