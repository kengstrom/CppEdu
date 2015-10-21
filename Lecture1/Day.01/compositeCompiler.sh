#!/bin/bash

CXX_FLAGS="-std=c++14 -Wall -fmax-errors=1"

set -e
set -x


g++ $CXX_FLAGS -c CompositeTypes.cpp
g++ $CXX_FLAGS -c CompositeApp.cpp
g++ CompositeTypes.o CompositeApp.o -o CompositeApp

