#pragma once
#include "Common.h"

class Simplifier {
private:
    std::vector<Character> raw_code;
    std::ifstream       file_stream;
    
    inline Tp charToInstruction(char char_);
    
    bool readCodeFromFile(std::string file_path);

    bool preprocess(); 

public:
    std::vector<Operation> simpl_inst;
    
    Simplifier() = default;

    bool simplify(std::string file_path);

};