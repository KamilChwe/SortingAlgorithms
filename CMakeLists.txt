# CMake Version
cmake_minimum_required(VERSION 4.0.1)

# Project Title
project(Sorters)

# Create an executable based on the source files provided
add_executable(Sorters src/main.cpp src/sorters.cpp)

# Include the directory "include" to utilise the header files
target_include_directories(Sorters PRIVATE include)