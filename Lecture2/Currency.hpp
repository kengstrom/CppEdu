/*
 * Currency.hpp
 *
 *  Created on: Nov 3, 2015
 *      Author: karl
 */

#ifndef CURRENCY_HPP_
#define CURRENCY_HPP_

#include <string>
#include "Trace.hpp"
using namespace std;
class Currency {

	string name;
	double rate;
public:
	Currency() : name(""), rate(0.0) {

	}
	Currency(string name, double rate) : name(name), rate(rate) {
		cout << "[CURRENCY] Constructor " << this << endl;
	}
	~Currency() {
		cout << "[CURRENCY] Destructor " << this << endl;
	}
	double getRate() {return rate;}
	string getName() {return name;}
};



#endif /* CURRENCY_HPP_ */
