#include <iostream>
#include <string>
#include <tuple>

using namespace std;

struct Account {
	string accNo;
	double balance;
	float rate;
};


tuple<string, double, float> toTuple(const Account& account) {
	return make_tuple( account.accNo, account.balance, account.rate );
}

int main(int argc, char* argv[]) {
	Account account{"1234-5678", 1000, 2.5};
	auto tup = toTuple(account);
	string accNo = get<0>(tup);
	cout << accNo << endl;	
	return 0;
}

