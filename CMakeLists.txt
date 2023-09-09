cmake_minimum_required(VERSION 3.25)
project(c C)

set(CMAKE_C_STANDARD 11)

add_executable(c test1.c "main.c" test1.h)
