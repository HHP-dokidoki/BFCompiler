#include "Simplifier.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

inline Tp Simplifier::charToInstruction(char instruction_char) {
    switch (instruction_char) {
        case '+': case '-': return Tp::ADD_V;
        case '<': case '>': return Tp::MOV_P;
        case '[':           return Tp::LOP_S;
        case ']':           return Tp::LOP_E;
        case ',':           return Tp::IN;
        case '.':           return Tp::OUT;
        default:
            std::cerr << "Internal error: invalid character '" << instruction_char 
                      << "' in charToInstruction" << std::endl;
            throw std::runtime_error("Invalid instruction character");
    }
}

bool Simplifier::simplify(std::string file_path)
{
    // 1. Read and filter Brainfuck code from the file.
    if (!readCodeFromFile(file_path)) {
        return false;
    }
    // 2. Group identical consecutive instructions.
    if (!preprocess()) { 
        return false;
    }
    return true;
}

bool Simplifier::readCodeFromFile(std::string file_path)
{
    std::ifstream file_stream(file_path, std::ios::binary);
    if (!file_stream.is_open()) {
        std::cerr << "Could not open file: " << file_path << std::endl;
        return false;
    }

    file_stream.seekg(0, std::ios::end);
    const std::streamoff file_size = file_stream.tellg();
    if (file_size < 0) {
        std::cerr << "Could not read file size: " << file_path << std::endl;
        return false;
    }
    file_stream.seekg(0, std::ios::beg);

    std::string data(static_cast<size_t>(file_size), '\0');
    if (file_size > 0) {
        file_stream.read(data.data(), file_size);
        if (!file_stream) {
            std::cerr << "Could not read file: " << file_path << std::endl;
            return false;
        }
    }

    raw_code.clear();
    raw_code.reserve(data.size());

    size_t line_number = 1;
    size_t column_number = 0;
    int bracket_counter = 0;
    for (size_t i = 0; i < data.size(); ++i) {
        const char current_char = data[i];
        column_number++;

        switch (current_char) {
            case '\n':
                line_number++;
                column_number = 0;
                break;
            case ' ':
            case '\r':
            case '\t':
                // Ignore whitespace.
                break;
            case '#': {
                // Ignore comments (lines starting with #).
                while (i + 1 < data.size() && data[i + 1] != '\n') {
                    ++i;
                }
                line_number++;
                column_number = 0;
                break;
            }
            default:
                // Process potential Brainfuck characters.
                if (std::string("+-<>[].,").find(current_char) != std::string::npos) {
                    if (current_char == '[') {
                        bracket_counter++;
                    } else if (current_char == ']') {
                        bracket_counter--;
                        if (bracket_counter < 0) {
                            std::cerr << "Syntax Error: Unmatched ']' at line " << line_number << ", col " << column_number << std::endl;
                            return false;
                        }
                    }
                    raw_code.push_back({current_char, line_number, column_number});
                }
                break;
        }
    }

    if (bracket_counter > 0) {
        std::cerr << "Syntax Error: Unclosed '['. " << bracket_counter << " missing ']'." << std::endl;
        return false;
    }

    return true;
}

bool Simplifier::preprocess()
{   
    for (auto it = raw_code.begin(); it != raw_code.end(); ++it) {
        long long count = 1;
        int coefficient = 1;
        
        if (it->c == '-' || it->c == '<') {
            coefficient = -1;
        }
        
        Tp instruction_type = charToInstruction(it->c);

        // Group consecutive identical instructions (e.g., +++, ---, <<<), but not loops.
        if (instruction_type != Tp::LOP_S && instruction_type != Tp::LOP_E) {
            while (it + 1 != raw_code.end() && (it + 1)->c == it->c) {
                count++;
                ++it;
            }
        }
        simpl_inst.push_back({instruction_type, coefficient * count});
    }
    return true;
}


