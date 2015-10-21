#include "CompositeTypes.hpp"
#include <algorithm>
int main() {
	srand(time(0));
	int N = 10;
	Account accounts[N];
	initializeAccounts(accounts, N);

	cout	<< "************" << endl 
				<< "Initial values" << endl
				<< "************" << endl;
	printAccounts( accounts, N);

	updateAccounts2(accounts, N);
//	transform( accounts[0], accounts[N-1], accounts[0], [](Account acc) { acc.balance = acc.balance *  (1 + acc.rate);});	

	cout	<< "************" << endl 
				<< "After update values" << endl
				<< "************" << endl;
	printAccounts(accounts, N);

	return 0;

}
