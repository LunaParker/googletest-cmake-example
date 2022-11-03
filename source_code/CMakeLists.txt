cmake_minimum_required(VERSION 3.23)
project(source_code C)

set(CMAKE_C_STANDARD 99)

add_executable(source_code main.c number.c number.h str.c str.h)
