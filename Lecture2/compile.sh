#!/bin/bash
set -e
set -x

###
### Create directories
###
#mkdir -p build/{objs,bin}

###
### Variables
###
CXX_FLAGS="-std=c++14 -Wall -fmax-errors=1 -Wno-sign-compare"
SRCLIB="src/lib"
SRCTST="src/tst"
OBJS="build/objs"
BIN="build/bin"

###
### Compile
###
#g++ ${CXX_FLAGS} -c ${SRCLIB}/IOUtils.cpp -o ${OBJS}/IOUtils.o
#g++ ${CXX_FLAGS} -c ${SRCLIB}/StringUtils.cpp -o ${OBJS}/StringUtils.o
#g++ ${CXX_FLAGS} -c ${SRCLIB}/GenUtils.cpp -o ${OBJS}/GenUtils.o
g++ ${CXX_FLAGS}  -c Account.cpp -o Account.o
g++ ${CXX_FLAGS}  -c Trace.hpp -o Trace.o
g++ ${CXX_FLAGS}  -c AccountMain.cpp -o AccountMain.o
g++ ${CXX_FLAGS}   TraceTest.cpp -o TraceTest
g++ ${CXX_FLAGS}   TestTemplates.cpp -o TestTemplates

g++ ${CXX_FLAGS}   MoneyApp.cpp -o MoneyApp
g++ ${CXX_FLAGS}   Shapes.cpp -o Shapes
g++ ${CXX_FLAGS}   Fibonacci.cpp -o Fibonacci

g++ ${CXX_FLAGS}   RandomLineOrientedFile.cpp -o RLOF

g++ ${CXX_FLAGS}   List.cpp -o List
###
### Linking
###
g++ Account.o AccountMain.o -o AccountMain
