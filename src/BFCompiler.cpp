#include "Common.h"
#include "Simplifier.h"
#include "CodeGenerator.h"
#include "MathSolver.h"
#include "Optimizer.h"


int main(int argc, char** argv)
{
    (void) argc;

    std::string file_dir = argv[1];

    
    Simplifier simplifier;

    simplifier.simplify(file_dir);

    Optimizer optimizer;
    std::vector<Instruction> optimized_instructions = optimizer.optimize(simplifier.simpl_inst);

    CodeGenerator code_generator;

    code_generator.open("output.c");

    code_generator.generate(optimized_instructions);

    code_generator.close();

    system("gcc -o output.exe output.c -Wall -O3");

    return 0;
}

