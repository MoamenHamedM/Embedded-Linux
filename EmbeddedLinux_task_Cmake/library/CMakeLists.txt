
cmake_minimum_required(VERSION 3.22.1)

SET(LibFILES "add.c" "div.c" "mod.c" "mult.c" "sub.c")

add_library(liboperation STATIC ${LibFILES})

target_include_directories(liboperation PUBLIC ../Includes)
