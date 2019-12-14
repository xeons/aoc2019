cmake_minimum_required(VERSION 3.15)
project(aoc2019)

set(CMAKE_CXX_STANDARD 14)

add_executable(aoc2019
        src/Solution.h src/main.cpp src/Day1Solution.cpp src/Day1Solution.h src/Day2Solution.cpp src/Day2Solution.h)
