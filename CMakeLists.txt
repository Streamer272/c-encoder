cmake_minimum_required(VERSION 3.19)
project(c_encoder C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(src)

add_executable(c_encoder
        src/main.c
        src/encoder.c src/encoder.h
        src/result.h)
