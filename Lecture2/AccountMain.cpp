#include "Account.hpp"


Account glob{"1000-9999",100000, 0.99};


void accCreator() {
	cout << "[accCreator] enter" << endl;
	Account a{"1111-8888", 999, 0.01};
//	cout << a.toString() << endl;
	cout << "[accCreator] exit" << endl;
}

void printAccount(const Account& acc) {
	cout << "Account: " << acc.getAccountNumber() << "\tBalance: " << to_string(acc.getBalance()) << endl;
}

void printAccount2(Account acc) {
	cout << "Account: " << acc.getAccountNumber() << "\tBalance: " << to_string(acc.getBalance()) << endl;
}


int main(int argc, char* argv[])
{
	cout << "[main] enter..." << endl;
	if (argc > 1) {

		Account a("1000-1111", 1000, 0.12);
		Account b("1000-2222", 2000, 0.15);
		Account c("1000-3333", 3000, 0.05);
		Account d("1000-4444", 4000, 0.01);

#ifdef __PRINT_ACCOUNTS__
		cout << "=============================================================" << endl;
		cout << a.toString() << endl;
		cout << b.toString() << endl;
		cout << c.toString() << endl;
		cout << d.toString() << endl;
		cout << "=============================================================" << endl;
#endif

		a.desposit(200);
		b.withdraw(300);
		c.desposit(1000);
		d.withdraw(2234);

#ifdef __PRINT_ACCOUNTS__
		cout << "=============================================================" << endl;
		cout << a.toString() << endl;
		cout << b.toString() << endl;
		cout << c.toString() << endl;
		cout << d.toString() << endl;
		cout << "=============================================================" << endl;
#endif

		a.setRate(0.5);
		b.setRate(0.4);
		c.setRate(0.3);
		d.setRate(0.2);

		accCreator();

#ifdef __PRINT_ACCOUNTS__
		cout << "=============================================================" << endl;
		cout << a.toString() << endl;
		cout << b.toString() << endl;
		cout << c.toString() << endl;
		cout << d.toString() << endl;
		cout << "=============================================================" << endl;
#endif
		a.update();
		b.update();
		c.update();
		d.update();

#ifdef __PRINT_ACCOUNTS__
		cout << "=============================================================" << endl;
		cout << a.toString() << endl;
		cout << b.toString() << endl;
		cout << c.toString() << endl;
		cout << d.toString() << endl;
		cout << "=============================================================" << endl;
#endif
		printAccount(a);
		printAccount2(b);
		string test = "1234-5678";
		printAccount(test);

		int nTest = a;
		string strTest = a;
		cout << "TypeConversions: " << strTest << "\t" << nTest << endl;


		cout << std::boolalpha;

		cout << endl << "OPERATOR OVERLOAD!!!" << endl;
		cout << "a < b : " << (a < b) << endl;
		cout << a << endl;
		a+=1000;
		cout << a << endl;
		a%3.5;
		cout << a << endl;


	}

	cout << "[main] exit" << endl;
	return 0;
}
