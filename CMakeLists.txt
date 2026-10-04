cmake_minimum_required(VERSION 3.10)     # 我至少需要 3.10 版的 cmake
project(ledger)                          # 工程名

set(CMAKE_CXX_STANDARD 17)               # 用 C++17 标准（2017 年的语法集，工程界主流）

add_executable(ledger main.cpp bill.cpp) # 编译这两个文件，产出叫 ledger 的程序