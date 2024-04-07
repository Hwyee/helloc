cmake_minimum_required(VERSION 3.27)
project(helloc C)

set(CMAKE_C_STANDARD 99)

add_executable(testc helloc/testc.c)
add_executable(main main.c)
add_executable(variable variable/variable.c)
add_executable(terminalIO io/terminalIO.c)