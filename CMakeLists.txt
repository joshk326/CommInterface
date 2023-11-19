# CMakeLists.txt

# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.12)

# Project name
project(ObjComm)

# Set C++ standard
set(CMAKE_CXX_STANDARD 98)

# Specify include directories
include_directories(include)

# Add source files
set(SOURCES
    src/Car.cpp
    src/Light.cpp
    Main.cpp
)

# Create a 'release' directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/release)

# Create an executable from the sources
add_executable(ObjComm ${SOURCES})
