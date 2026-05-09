#include "Common.h"
#include "Simplifier.h"
#include "CodeGenerator.h"
#include "Optimizer.h"
#include "ASMGenerator.h"


int main(int argc, char** argv)
{
    // Contest format: bf-compiler.exe <input.bf> -o <output.exe>
    if (argc != 4 || std::string(argv[2]) != "-o") {
        std::cerr << "Usage: " << argv[0] << " <input.bf> -o <output.exe>\n";
        return 1;
    }

    std::string input_file = argv[1];
    std::string output_exe = argv[3];

    Simplifier simplifier;
    if (!simplifier.simplify(input_file)) {
        std::cerr << "Error: Failed to simplify code." << std::endl;
        return 1;
    }

    Optimizer optimizer;
    std::vector<Instruction> optimized_instructions = optimizer.optimize(simplifier.simpl_inst);

    std::string asm_file = "_bf_temp.s";
    
    ASMGenerator asm_generator;
    if (!asm_generator.open(asm_file)) {
        std::cerr << "Error: Failed to open " << asm_file << " for writing." << std::endl;
        return 1;
    }
    asm_generator.generate(optimized_instructions);
    asm_generator.close();

    int ret = system(("gcc -o " + output_exe + " " + asm_file + " -Wall -O3").c_str());
    system(("del " + asm_file).c_str());

    if (ret != 0) {
        std::cerr << "Error: GCC compilation failed." << std::endl;
        return 1;
    }

    return 0;

    /*
    // ===== Original code for multi-flag support (commented for contest) =====
    bool c_out_flag = false;
    bool s_out_flag = false;

    if (argc >= 6 || argc < 4) {
        std::cerr << "Usage: " << argv[0] << " <input.bf> [-o] outputfile [option] \n";
        std::cerr << "\tOptions: -c : Output extra C code\n";
        std::cerr << "\tOptions: -s : Output extra assembly code\n";
        std::cerr << "option must be either -c or -s if specified.\n";
        return 1;
    }

    if (argc == 4) {
        if (std::string(argv[2]) != "-o") {
            std::cerr << "Usage: " << argv[0] << " <input.bf> -o <output.exe>\n";
            return 1;
        }
    } else if (argc == 5) {
        if (std::string(argv[2]) != "-o") {
            std::cerr << "Usage: " << argv[0] << " <input.bf> -o <output.exe>\n";
            return 1;
        }
        if (std::string(argv[4]) == "-c") {
            c_out_flag = true;
        } else if (std::string(argv[4]) == "-s") {
            s_out_flag = true;
        } else {
            std::cerr << "Invalid option: " << argv[4] << "\n";
            std::cerr << "Valid options are: -c (C code), -s (assembly code)\n";
            return 1;
        }
    }

    std::string input_file = argv[1];
    std::string output_file = argv[3];  

    Simplifier simplifier;
    if (!simplifier.simplify(input_file)) {
        std::cerr << "Error: Failed to simplify code." << std::endl;
        return 1;
    }

    Optimizer optimizer;
    std::vector<Instruction> optimized_instructions = optimizer.optimize(simplifier.simpl_inst);

    if (!c_out_flag) {
        std::string asm_file;
        std::string final_file;
        bool delete_asm = false;
        
        if (s_out_flag) {
            asm_file = output_file;
            final_file = output_file;
        } else {
            size_t dot_pos = output_file.rfind('.');
            if (dot_pos != std::string::npos && output_file.substr(dot_pos) == ".s") {
                asm_file = output_file;
                final_file = output_file.substr(0, dot_pos) + ".exe";
            } else {
                asm_file = "_temp.s";
                final_file = output_file;
            }
            delete_asm = true;
        }
        
        ASMGenerator asm_generator;
        if (!asm_generator.open(asm_file)) {
            std::cerr << "Error: Failed to open " << asm_file << " for writing." << std::endl;
            return 1;
        }
        asm_generator.generate(optimized_instructions);
        asm_generator.close();

        if (!s_out_flag) {
            int ret = system(("gcc -o " + final_file + " " + asm_file + " -Wall -O3").c_str());
            if (ret != 0) {
                std::cerr << "Error: GCC compilation failed." << std::endl;
                return 1;
            }
            if (delete_asm) {
                system(("del " + asm_file).c_str());
            }
        }
    } else {
        CodeGenerator code_generator;
        if (!code_generator.open(output_file)) {
            std::cerr << "Error: Failed to open output.c for writing." << std::endl;
            return 1;
        }

        code_generator.generate(optimized_instructions);
        code_generator.close();
    }
    // ===== End of original code =====
    */
}

