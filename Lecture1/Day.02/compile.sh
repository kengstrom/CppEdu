#!/bin/bash

CXX_FLAGS="-std=c++14 -Wall -fmax-errors=1"

set -e
set -x
g++ $CXX_FLAGS search.cpp -o search

g++ $CXX_FLAGS -c StringUtils.cpp
g++ $CXX_FLAGS -c UnitTest.cpp
g++ StringUtils.o UnitTest.o -o UnitTest


g++ $CXX_FLAGS WordCount.cpp -o WordCount
g++ $CXX_FLAGS IOAccounts.cpp -o IOAccounts

g++ $CXX_FLAGS AccountTuple.cpp -o AccountTuple
