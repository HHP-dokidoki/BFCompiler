#pragma once
#include "Common.h"

class Simplifier {
    private:
        std::vector<Character> raw_code;
        std::ifstream       fstream;
        
        inline Tp cToInst(char c);
        
        bool readCode(std::string file_name);

        bool preprocess(); 

    public:
        std::vector<OPT>    simpl_inst;
        
        Simplifier() = default;

        bool simplify(std::string file_path);

};