cmake_minimum_required(VERSION 3.22.0)
project(using_dll_project)
add_library(leaverlib SHARED leaver.h leaver.cpp)
add_executable(using_dll_program cppm-hw-11.3.cpp)
target_link_libraries(using_dll_program leaverlib)