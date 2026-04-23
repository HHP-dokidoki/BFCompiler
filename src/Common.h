#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <limits>
#include <map>
#include <unordered_map>
#include <windowsx.h>

enum class TokenType {
    MOV_P,  // Move Pointer
    ADD_V,  // Add value to pointer (including negtive value)
    LOP_S,  // Loop start
    LOP_E,  // Loop end
    IN,     // Input
    OUT,    // Output

    SCAN,   // Scan until *p != 0
    TRAP,   // infinite loop
    IF_S,   // If start
    IS_E,   // If end
    SET_V,  // Set value to pointer
    MAC,    // Multiply & accumulate
    MATH_MAC, // When the value of current pointer is unknown
};

typedef TokenType Tp;

enum class ValState {
    UNKNOWN,
    KNOWN,
};

struct OPT {
    Tp          type;
    long long   value;
};

struct MEMCell{
    ValState state;
    unsigned char value;
};

struct Instruction {
    Tp          type;
    long long   offset;
    long long   value;
    std::vector<Instruction> sub_inst;
};

struct Character {
    char c;
    size_t line;
    size_t column;
    Character(char ch, size_t l, size_t col) :c(ch), line(l), column(col){}
};
