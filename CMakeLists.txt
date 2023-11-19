# CMakeLists.txt

# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.12)

# Project name
project(ObjComm)

# Set variables
set(CMAKE_CXX_STANDARD 11)
set(SRC_DIR src)

# Specify include directories
include_directories(include)

# Add source files
set(SOURCES
    ${SRC_DIR}/MsgRouter.cpp
    ${SRC_DIR}/Topic.cpp
    ${SRC_DIR}/Car.cpp
    ${SRC_DIR}/Light.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp
)

# Create a 'release' directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/release/bin)

add_compile_options(-g)
# Create an executable from the sources
add_executable(ObjComm ${SOURCES})
