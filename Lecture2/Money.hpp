/*
 * Money.hpp
 *
 *  Created on: Nov 3, 2015
 *      Author: karl
 */

#ifndef MONEY_HPP_
#define MONEY_HPP_

#include "Currency.hpp"
#include "Trace.hpp"
#include <iostream>
#include <string>

using namespace std;

class Money {
	int value;
	Currency& currency;

public:
	Money(int value, Currency& currency): value(value), currency(currency) {
		cout << "[MONEY] Constructor " << this << endl;
	}

	~Money() {
		cout << "[MONEY] Destructor " << this << endl;
	}

	Money& operator=(const Money&) = default;

	int getValue() { return value; }
	Currency getCurrency() {return currency;}

	Money convert(Currency& to) {
		//get reference value
		int refValue = value / currency.getRate();
		int newValue = refValue * to.getRate();
		return Money(newValue, to);
	}
	string toString() const {
		return "Money: " + to_string(value) + " " + currency.getName();
	}

	Money& operator += (int amount ) {
		this->value += amount;
		return *this;
	}
	Money& operator = (Money& mon) {
		return mon;
	}
};

inline Money& operator +(Money& mon, int amount) {
	return mon += amount;
}

inline ostream& operator <<(ostream& out, const Money& mon) {
	out << mon.toString();
	return out;
}

inline Money operator /(Money& mon, Currency& cur) {
	return mon.convert(cur);
}

#endif /* MONEY_HPP_ */
