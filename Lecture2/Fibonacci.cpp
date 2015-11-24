/*
 * Fibonacci.cpp
 *
 *  Created on: Nov 4, 2015
 *      Author: karl
 */


#include "Fibonacci.hpp"


#include <iostream>
int main(int argc, char* argv[]) {
	for (auto k : Fibonacci(30) ) { std::cout << k << " "; }

	return 0;
}



