cmake_minimum_required(VERSION 3.14)
project(Celebrities)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})


add_executable(Celebrities main.cpp
        Celebrity.cpp
        Celebrity.h)