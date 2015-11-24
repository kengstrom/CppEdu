/*
 * StackLIFO.hpp
 *
 *  Created on: Nov 3, 2015
 *      Author: karl
 */

#ifndef STACKLIFO_HPP_
#define STACKLIFO_HPP_

#include <stdexcept>

using namespace std;

template<typename T, unsigned N = 10>
class Stack {
	T			stk[N];
	unsigned 	top = 0;
public:
	bool empty() const { return top <= 0; }
	bool full() const {return top >= N; }
	void push(T x) {
		if( full() )
			throw std::out_of_range("Stack is full");
		stk[top++] = x;
	}
	T pop() {
		if (empty())
			throw std::out_of_range("Stack is empty");
		return stk[--top];
	}
};




#endif /* STACKLIFO_HPP_ */
