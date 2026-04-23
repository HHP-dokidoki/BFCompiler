#include "Simplifier.h"


inline Tp Simplifier::cToInst(char c) {
    return  (c == '+' || c == '-') ? Tp::ADD_V : 
    (c == '<' || c == '>') ? Tp::MOV_P : 
    (c == '[') ? Tp::LOP_S : 
    (c == ']') ? Tp::LOP_E : 
    (c == ',') ? Tp::IN : 
    Tp::OUT;
}

bool Simplifier::simplify(std::string file_path)
{

    bool state = readCode(file_path);
    if (!state) {
        // Log
        return false;
    }
    state = preprocess();
    if (!state) { 
        // Log
        return false;
    }
    return true;
}

bool Simplifier::readCode(std::string file_dir)
{
    fstream.open(file_dir);
    if (!fstream.is_open()) {
        // Log 
        return 0;
    }


    char c;
    size_t line = 1, col = 0;
    while (fstream.good()) {
        c = fstream.get();
        if (c == EOF) {
            break;
        }
        col ++;
        if (c == '.') {
            printf("Read '.' at line %zu, column %zu\n", line, col);
        } else if (c == ',') {
            printf("Read ',' at line %zu, column %zu\n", line, col);
        }
        switch (c) {
            case '\n' :
                line ++;
                col = 0;
                break;
            case ' ' :
            case '\r':
                // Do nothing
                break;
            case '\t':
                // Do nothing
                break;
            case '#' :
                // Skip this line
                line ++;
                col = 0;
                fstream.ignore(std::numeric_limits<std::streamsize>::max());
                break;
            default :
                if (c == '+' || c == '-' || c == '<' || c == '>' || 
                    c == '.' || c == ',' || c == '[' || c == ']') {
                        raw_code.push_back((Character){c, line, col});
                } else {
                    // Log error
                    return 0;
                }
        }
    }

    if (!fstream.eof()) {
        // Log
        return false;
    }
    return true;
}

bool Simplifier::preprocess()
{   
    for (auto it = raw_code.begin(); it != raw_code.end(); ++it) {
        int cnt = 1;
        int coef = 1;
        if (it->c == '+' || it->c == '>') {
            coef = 1;
        } else if (it->c == '-' || it->c == '<') {
            coef = -1;
        }
        
        Tp inst = cToInst(it->c);

        while (it + 1 != raw_code.end() && (it + 1)->c == it->c && inst != Tp::LOP_S && inst != Tp::LOP_E) {
            cnt++;
            ++it;
        }
        simpl_inst.push_back((OPT){inst, coef * cnt});
    }
    return true;
}


