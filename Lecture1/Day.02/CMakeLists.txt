cmake_minimum_required(VERSION 3.0)
project(07_Streams)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -fmax-errors=1")

add_executable(WordCount WordCount.cpp)
add_executable(IOAccounts IOAccounts.cpp)
