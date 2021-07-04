cmake_minimum_required(VERSION 3.16)
project(vmath)
add_library(vmath src/complex.cpp)
target_include_directories(vmath PUBLIC include)


