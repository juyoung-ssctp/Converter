cmake_minimum_required(VERSION 3.16)
project(bit_angle_converter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main
    src/main.cpp
    src/BitConverter.cpp
)

add_executable(test_bit_converter
    tests/test_BitConverter.cpp
    src/BitConverter.cpp
)

target_include_directories(test_bit_converter PRIVATE include)
target_include_directories(main PRIVATE include)

