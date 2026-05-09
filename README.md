# BFCompiler

一个多阶段优化的 Brainfuck 编译器，可将 Brainfuck 源码编译为可执行文件。

## 功能简介

- **多阶段优化**：
  1) **简化**：清理非指令字符，合并连续相同指令。
  2) **优化**：AST 构建、规范化、语义提升、静态分析与冗余消除。
  3) **代码生成**：生成汇编或 C 代码，并可调用 gcc 生成可执行文件。
- **高阶模式识别**：识别并优化清零循环、乘加、扫描等常见 Brainfuck 结构。
- **性能优化**：针对大体量程序做高效处理。

## 运行环境

- OS: Windows 11 x64
- GCC: MSYS2 `gcc.exe 15.2.0`

## 编译与运行方法 (CMake + Make)

### 编译

```bash
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build
```

如果你直接使用 `make`，可在生成器对应的构建目录执行：

```bash
mingw32-make -C build
```
或者
```bash
g++ -std=c++23 src/ASMGenerator.cpp src/CodeGenerator.cpp src/Optimizer.cpp src/PEBuilder.cpp src/Simplifier.cpp src/bf-compiler.cpp -o bf-compiler.exe -Wall -Wextra -O3
```
### 运行

```bash
build/bf-compiler.exe <input.bf> -o <output.exe>
build/bf-compiler.exe <input.bf> -o <output.s> -s
build/bf-compiler.exe <input.bf> -o <output.c> -c
```

说明：
- 默认行为：生成 `output.s`，并调用 `gcc` 输出 `output.exe`，随后删除 `output.s`。
- `-s`：额外输出汇编文件。
- `-c`：额外输出 `output.c`，并保留 `output.s`。

## 使用方法

### 编译 Brainfuck 代码

```bash
build/bf-compiler.exe path/to/program.bf -o output.s
```

执行流程：
1. 读取并优化输入程序。
2. 生成优化后的 `output.s` 汇编文件。
3. 调用 `gcc` 生成 `output.exe` 可执行文件。

## AI 使用说明

开发过程中使用了 AI 工具进行辅助，具体如下：

- 使用工具：DeepSeek、GitHub Copilot、Google Gemini、Claude
- AI 辅助完成部分：汇编语言相关逻辑优化、优化器 `MATH_MAC` 相关实现、`analyze_block_impl` 中 `IF_S` 分支逻辑、debug
- 自主完成部分：其余代码与整体架构设计和集成
