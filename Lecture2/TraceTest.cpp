/*
 * TraceTest.cpp
 *
 *  Created on: Nov 2, 2015
 *      Author: karl
 */

#include "Trace.hpp"
#include <stdexcept>

long factorial (int n) {
	Trace t{"factorial " + to_string(n) };
	if(n<=1) return 1;
	if( n==5 ) throw logic_error{"dont use the 5!!!!"};
	return n * factorial(n-1);
}


int main(int argc, char* argv[]) {
	try {
		int val = 5;
		if( argc > 1)
			val = stoi( argv[1] );
		factorial(val);
	}
	catch (logic_error&  e) {
		cerr << "LogicError: " << e.what() << endl;
	}
	catch (...) {
		cerr << "Unknown errorrrrrr" << endl;
	}
	return 0;
}

