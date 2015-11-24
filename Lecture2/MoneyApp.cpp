/*
 * MoneyApp.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: karl
 */


#include "Money.hpp"
#include "Currency.hpp"



int main(int argc, char* argv[]) {

	Currency SEK("SEK", 1.0);
	Currency EUR("EUR", 0.1065);
	Currency USD("USD", 0.1167);
	Currency GPB("GBP", 0.0759);

	Money m1(10000, SEK);
	cout << m1 << endl;

	//cout << m1 +100 << endl;
	m1 + 100;
	cout << m1 << endl;

	cout << m1 / USD << endl;
	return 0;
}

