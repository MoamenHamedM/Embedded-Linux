
cmake_minimum_required(VERSION 3.22.1)

project(Calculator VERSION 1.0
                  DESCRIPTION "build calculator app using cmake")

SET(SRCFILE "main.c")

add_executable(calculator ${SRCFILE})

target_include_directories(calculator PUBLIC ./Includes)

add_subdirectory(${CMAKE_HOME_DIRECTORY}/library)

target_link_libraries(calculator PUBLIC liboperation)
