cmake_minimum_required(VERSION 3.16)
project(vtest)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(lib/vmath)
add_subdirectory(lib/vtl)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
)

FetchContent_MakeAvailable(googletest)
enable_testing()


add_executable(vtest test/test.cpp )
target_link_libraries(vtest gtest_main vmath vtl)

