cmake_minimum_required(VERSION 3.16)

project(unix_shell)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(unix_shell src/main.cpp
        src/tokenizer.h
        src/tokenizer.cpp)
