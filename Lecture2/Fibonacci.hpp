/*
 * Fibonacci.hpp
 *
 *  Created on: Nov 4, 2015
 *      Author: karl
 */

#ifndef FIBONACCI_HPP_
#define FIBONACCI_HPP_

class Fibonacci {
	int count;

public:
	Fibonacci(int nbr) : count(nbr) {

	}
	struct iterator {

		int first, second, count;
		iterator(int first, int second, int count ) : first(first), second(second), count(count) {}
		int operator *() {return first + second; }
		iterator & operator ++() {
			count ++;
			int newSec = first + second;
			first = second;
			second = newSec;
			return *this;
		}
		bool operator !=(const iterator& that) {
			return that.count != this->count;
		}
	};
	iterator begin() { return {0,1,0};}
	iterator end()  { return {0,1,count};}
};



#endif /* FIBONACCI_HPP_ */
