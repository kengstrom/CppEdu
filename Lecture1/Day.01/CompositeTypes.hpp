//compile: g++ -std=c++14 -Wall -fmax-errors=1 CompositeTypes.cpp -o CompositeTypes
#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

enum class AccountType {
	savings, check, transfer,
	NUM_TYPES
};

struct Account {
	AccountType type;
	int balance;
	float rate;
};

extern void initializeAccounts( Account account[], int numAccounts );

/*
extern string accountTypeToString( AccountType type);
extern void printAccount( int index, Account account );
extern void printAccount2( int index, Account account );
*/
extern void printAccounts( Account accounts[], int numAccounts );

extern void updateAccounts( Account account[], int numAcounts );
extern void updateAccounts2( Account account[], int numAcounts );


