#include <iostream>
#include <fstream>


using namespace std;

struct Account {
	int accountNo;
	double balance;
	float rate;
};


void writeAccount(const string& filename, const Account& account) {
	fstream file{filename, ios::out | ios::binary};
	file.write( (const char*)&account, sizeof(Account) );
}

void readAccount(const string& filename, Account& account) {
	fstream file{filename, ios::in | ios::binary};
	file.read( (char*)&account, sizeof(Account) );
}

void printAccount(const Account& account ) {
	cout << account.accountNo << "\t" << account.balance << " SEK\t" << account.rate << "%" << endl;
}

int main(int argc, char* argv[]) {
	Account acc = {1234567, 1024.0, 4.1 };
	printAccount(acc);
	writeAccount( "./accounts.abc", acc  );

	acc = {0, 0.0, 0.0 };
	printAccount(acc);

	readAccount( "./accounts.abc", acc );
	printAccount(acc);
	return 0;
}
