cmake_minimum_required(VERSION 3.16)

set(This Algos)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    Algos.h
)
set(Sources
    Algos.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)

add_subdirectory(lib)