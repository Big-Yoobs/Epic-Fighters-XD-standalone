cmake_minimum_required(VERSION 3.13)  # CMake version check
project(output)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES Epic-Fighters-XD-standalone.cpp)
set(INCLUDE_DIR ./)
include_directories (${INCLUDE_DIR})

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(output ${SOURCE_FILES})