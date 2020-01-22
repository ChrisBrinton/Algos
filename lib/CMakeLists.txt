cmake_minimum_required(VERSION 3.16)

set(This HashTable)

set(Sources
    HashTable.cpp
)

set(Headers
    HashTable.h
)

add_library(${This} STATIC ${Sources} ${Headers})