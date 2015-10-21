//compile: g++ -std=c++14 -Wall -fmax-errors=1 CompositeTypes.cpp -o CompositeTypes

#include "CompositeTypes.hpp"
/*
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
*/
void createAccount( Account& account)
{
	account.balance = rand() % 1000; 
	account.rate = (rand() % 1000 / 100.0);
	account.type= (AccountType) (rand() % (int)AccountType::NUM_TYPES);
}

void initializeAccounts( Account account[], int numAccounts )
{
	for(int index=0; index<numAccounts; index++) 
	{
		createAccount(account[index]);
	}
}

string accountTypeToString( AccountType type)
{
	string s = "unknown";
	switch (type )
	{
		case AccountType::savings:
			s = "Savings account";
			break;
		case AccountType::check:
			s = "Check account";
			break;
		case AccountType::transfer:
			s = "Transfer account";
			break;
		default:
			s = "unknown account";
			break;
	}
	return s;
}

void printAccount( int index, Account account )
{
	cout << "Account " << index+1 << endl;
	cout << "===============================" << endl;
	cout << "Balance: " << account.balance << " SEK" << endl;
  cout << "Rate: " << account.rate << "%" << endl;
  cout << "Type: " << accountTypeToString(account.type) << endl;
	cout << endl;
}
void printAccount2( int index, Account account )
{
	cout << "Account " << index+1 << "\t";
	cout << "Balance: " << setw(5) << account.balance << " SEK" << "\t";
  cout << "Rate: " << setw(5) << account.rate << "%" << "\t";
  cout << "Type: " << accountTypeToString(account.type) << endl;
}

void printAccounts( Account accounts[], int numAccounts )
{
	for (int index=0; index<numAccounts; index++) 
	{
		printAccount2(index, accounts[index] );
	}
}



void updateAccounts( Account account[], int numAccounts ) 
{
	for (int index=0; index<numAccounts; index++) 
	{
		account[index].balance *= (1 + account[index].rate /100.0);
	}
}



void updateAccounts2( Account account[], int numAccounts ) 
{
  auto       compute = [=](int a, float p) {
        auto A = a * (1 + p/100);
        return A;
    };

	for (int index=0; index<numAccounts; index++) 
	{
		account[index].balance= compute(account[index].balance, account[index].rate);
	}
}

