cmake_minimum_required(VERSION 3.30)
project(RubiksCubeSolverV1)

set(CMAKE_CXX_STANDARD 20)

add_executable(RubiksCubeSolverV1 main.cpp
        Model/RubiksCube.cpp
        Model/RubiksCube.h)
