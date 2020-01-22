cmake_minimum_required(VERSION 3.16)

set(This AlgosTests)

set(Sources
    AlgosTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    Algos
    HashTable
)

add_test(
    NAME ${This}
    COMMAND ${This}
)