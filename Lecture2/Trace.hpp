/*
 * Trace.hpp
 *
 *  Created on: Nov 2, 2015
 *      Author: karl
 */

#ifndef TRACE_HPP_
#define TRACE_HPP_

#include <string>
#include <iostream>

using namespace std;

class Trace {
	string trace_message;
public:
	Trace(const string& message) : trace_message(message) {
		cout << "[" << trace_message << "]\tconstructor\t" << this <<  endl;
	}

	~Trace() {
		cout << "[" << trace_message << "]\tdestructor\t" << this  << endl;
	}
};





#endif /* TRACE_HPP_ */
