#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

struct Account {
	string	accountNo;
	double	balance;
	float	rate;
};

using namespace std;

void createAccount(Account& account)
{
	const char charset[] = "0123456789abc";
	const size_t max_index = (sizeof(charset) - 1);
	//generate_n( account.accountNo.begin(), 5, charset[rand() % max_index] );
	account.balance = rand() % 1000; 
	account.rate = (rand() % 1000 / 100.0);
	
}


int main(int argc, char* argv[]) {
	srand(time(0));
	unsigned int count = 5;
	if( argc > 1 )
		count = std::stoi(argv[1]);

	vector<Account> vAccounts;
	for(unsigned int index=0; index<count; index++) {
		Account a;
		createAccount(a);
		vAccounts.push_back(a);	
	}
	
	for_each(vAccounts.begin(), vAccounts.end(), [](Account& a){ cout << a.accountNo << "\t" << a.balance << "\t" << a.rate << endl;});  
	return 0;
}
