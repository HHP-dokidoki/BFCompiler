#pragma once
#include "Common.h"

class Optimizer{

private:

    std::vector<Instruction> buildAst(const std::vector<Operation>& instructions, size_t& index);    
    std::vector<Instruction> canonicalization(const std::vector<Instruction>& instructions, bool& changed);

    std::vector<Instruction> semanticLifting(const std::vector<Instruction>& block, bool& changed);

    std::vector<Instruction> staticAnalysis(const std::vector<Instruction>& block, bool& changed);

    std::vector<Instruction> eliminateRedundantWrites(const std::vector<Instruction>& block, bool& changed);

    inline void flushMemoryState(std::unordered_map<long long, long long>& mem_state, std::vector<Instruction>& optimized);

public:
    std::vector<Instruction> optimize(const std::vector<Operation>& instructions);

};

struct AnalysisState {
    long long v_ptr = 0;
    bool v_ptr_known = true;
    std::unordered_map<long long, MEMCell> v_mem;
};