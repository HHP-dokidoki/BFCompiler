#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <limits>
#include <map>
#include <unordered_map>
#include <cstring>

enum class TokenType {
    MOV_P,      // Pointer movement
    ADD_V,      // Value addition
    LOP_S,      // Loop start
    LOP_E,      // Loop end
    IN,         // Input
    OUT,        // Output
    SCAN,       // Scan until zero
    TRAP,       // Infinite loop
    IF_S,       // If (single iteration)
    IF_E,       // If end
    SET_V,      // Set value
    MAC,        // Multiply-accumulate
    MATH_MAC,   // Math multiply-accumulate
};

typedef TokenType Tp;

enum class ValState {
    UNKNOWN,
    KNOWN,
};

struct Operation {
    Tp type;
    long long value;
};

typedef Operation OPT;

struct MEMCell {
    ValState state;
    unsigned char value;
};

struct Instruction {
    Tp type;
    long long offset;
    long long value;
    std::vector<Instruction> sub_inst;
};

struct Character {
    char c;
    size_t line;
    size_t column;
    Character(char ch, size_t line, size_t col) : c(ch), line(line), column(col) {}
};
