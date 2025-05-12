cmake_minimum_required(VERSION 3.31)
project(think_like)

set(CMAKE_CXX_STANDARD 20)

add_executable(think_like main.cpp
        InputProcessing.cpp
        InputProcessing.h)
