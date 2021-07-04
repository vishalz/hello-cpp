cmake_minimum_required(VERSION 3.16)
project(vtl)
add_library(vtl src/vector.cpp)
target_include_directories(vtl PUBLIC include)


