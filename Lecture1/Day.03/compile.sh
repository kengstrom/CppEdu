#!/bin/bash

CXX_FLAGS="-std=c++14 -Wall -fmax-errors=1"

set -e
set -x

g++ $CXX_FLAGS AccountTuple.cpp -o AccountTuple
g++ $CXX_FLAGS EratosthenesSieve.cpp -o Eratos
g++ $CXX_FLAGS WordFreq.cpp -o WordFreq

g++ $CXX_FLAGS IOIterators.cpp -o IOIterators

g++ $CXX_FLAGS AccountContainer.cpp -o AccountContainer
