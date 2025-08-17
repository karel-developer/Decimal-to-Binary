cmake_minimum_required(VERSION 3.10)
project(DecimalToBinaryConverter)

set(CMAKE_CXX_STANDARD 17)

# Main executable
add_executable(converter 
    src/main.cpp 
    src/decimal_to_binary.cpp
)

# Test executable
add_executable(tests 
    tests/test_decimal_to_binary.cpp 
    src/decimal_to_binary.cpp
)