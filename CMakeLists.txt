cmake_minimum_required(VERSION 3.8)
project(matrix_transposer)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c)
add_executable(matrix_transposer ${SOURCE_FILES})