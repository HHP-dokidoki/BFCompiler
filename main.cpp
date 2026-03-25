// A Brain F*ck Compiler written in C++23
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <limits>

class Error
{
    private:
        uint64_t err_number;
        std::vector<std::string> message;
    public:
        Error() {
            err_number = 0;
            message = {};
        }

        void Out_Error() {
            std::cerr << err_number << " error(s) found:" << std::endl;
            for (const auto& msg : message) {
                std::cerr << msg << std::endl;
            }
        }
        
        void Add_Error(const std::string &msg) {
            message.push_back(msg);
            err_number++;
        }
};

Error error;



int Read_File(std::ifstream& file, const std::string& file_name);

int PreProcess(std::string& raw_code, std::ifstream& file);

void Generate_CCode(std::ofstream& code_file, std::string& raw_code);

void Gramma_Check();

void Optimitize();


int main(int argc, char* argv[]) 
{
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << '\n';
    }

    (void)argc;

    std::string   input_file_name(argv[1]);
    std::ifstream input_file;
    std::ofstream ccode_file("temp.c", std::ios::out);
    std::string   raw_code;

    int state = 0;

    state = Read_File(input_file, input_file_name);

    if (state != 0) {
        error.Out_Error();
        return -1;
    }

    state = PreProcess(raw_code, input_file);

    if (state != 0) {
        error.Out_Error();
        return -1;
    }

    Generate_CCode(ccode_file, raw_code);
    ccode_file.close();

    system("gcc temp.c -o res.exe\n");
    system("pause");
    return 0;
}


int Read_File(std::ifstream& file, const std::string& file_name)
{
    file.open(file_name);
    if (!file.is_open())
    {
        error.Add_Error("Failed to open file: " + file_name);
        return -1;
    }   

    return 0;
}

int PreProcess(std::string& raw_code, std::ifstream& input)
{
    char c;
    while (input.good()) {
        c = input.get();
        if (c == EOF) {
            break;
        }
        if (c == '#') {
            // skip this line 
            input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else if (c == '\n' || c == '\r' || c == '\t' || c == ' ') {
            // ignore whitespace
            continue;
        } else if (c == '+' || c == '-' || 
                   c == '>' || c == '<' || 
                   c == '.' || c == ',' || 
                   c == '[' || c == ']'   ) {
            raw_code += c;
        } else {
            error.Add_Error(std::string("Invalid character found: ") + c);
        }
    }
    if (input.bad()) {
        error.Add_Error("Error while reading file");
        return -1;
    }
    return 0;
}

void Gramma_Check()
{


}

void Optimitize()
{
    
}

void Generate_CCode(std::ofstream& code_file, std::string& raw_code)
{
    code_file << "#include <stdio.h>\n";
    code_file << "unsigned char array[3000] = {0};\n";
    code_file << "char* ptc = array;\n";
    code_file << "int main()\n{\n";
    for (char c : raw_code) {
        switch (c) {
            case '+' :
                code_file << "(*ptc)++;\n";
                break;
            case '-' :
                code_file << "(*ptc)--;\n";
                break;
            case '<' :
                code_file << "ptc--;\n";
                break;
            case '>' :
                code_file << "ptc++;\n";
                break;
            case '[' :
                code_file << "while(*ptc) {\n";
                break;
            case ']' :
                code_file << "}\n";
                break;
            case '.' :
                code_file << "printf(\"%c\", *ptc);\n";
                break;
            case ',' :
                code_file << "scanf(\"%c\", ptc);\n";
                break;
        }
    }
    code_file << "while(1){;}\n";
    code_file << "return 0;\n";
    code_file <<"}\n";
}

