/*
 * Account.hpp
 *
 *  Created on: Nov 2, 2015
 *      Author: karl
 */

#ifndef ACCOUNT_HPP_
#define ACCOUNT_HPP_

#include <string>
#include <iostream>
#include <utility>
using namespace std;
using namespace std::rel_ops;

class Account {

	string accno;
	int balance;
	float rate;
	static int instanceCount;

public:
	Account() : accno(""), balance(0), rate(0.0){
		++instanceCount;
		cout << "Entering default constructor" << "\t[" << to_string(instanceCount) << "]" << endl;
	}

	Account(const string& accno, int balance, float rate) : accno(accno), balance(balance), rate(rate) {
		++instanceCount;
		cout << "Entering constructor for account "<< accno << "\t@" << this << "\t[" << to_string(instanceCount) << "]" << endl;
	}


	//COPY CONSTRUCTOR
	Account(const Account& acc): accno(acc.accno), balance(acc.balance), rate(acc.rate) {
		++instanceCount;
		cout << "Entering copy-constructor for account "<< accno << "\t@" << this << "\t[" << to_string(instanceCount) << "]" << endl;

	}

	Account(const string& accno) : accno(accno), balance(0), rate(0.0) {
		++instanceCount;
		cout << "Entering type conversion-constructor for account "<< accno << "\t@" << this << "\t[" << to_string(instanceCount) << "]" << endl;
	}

	~Account() {
		--instanceCount;
		cout << "Entering destructor for account " << accno << "\t@" << this << "\t[" << to_string(instanceCount) << "]" << endl;
	}

	operator int() const {
		return balance;
	}

	operator string() const {
		return accno;
	}

	string toString() const {
		return  "Account: " + accno + "\tBalance: " + to_string(balance) + "\tRate: " + to_string(rate);
	}

	void withdraw(int amount) {
		balance -= amount;
	}

	void desposit(int amount) {
		balance += amount;
	}

	void update() {
		balance *= (1 + rate);
	}

	void setRate(float rate) {
		this->rate = rate;
	}

	float getRate() const {
		return rate;
	}

	int getBalance() const {
		return balance;
	}

	string getAccountNumber() const {
		return accno;
	}
	static int getInstanceCount() {return instanceCount;}

	Account operator += (int amount) { this->balance += amount; return *this; }
	Account operator %(float rate) { this->rate = rate/100.0; this->update(); return *this; }
};

inline ostream& operator <<(ostream& out, const Account& acc) {
	out << acc.toString();
	return out;
}

inline bool operator==(const Account& acc1, const Account& acc2) {
	return acc1.getBalance() == acc2.getBalance();
}

inline bool operator<(const Account& acc1, const Account& acc2) {
	return acc1.getBalance() < acc2.getBalance();
}

//int Account::instanceCount = 0;
#endif /* ACCOUNT_HPP_ */
