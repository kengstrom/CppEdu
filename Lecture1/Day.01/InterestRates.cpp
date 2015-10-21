//compile: g++ -std=c++14 -Wall -fmax-errors=1 InterestRates.cpp -o InterestRates

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int amount;
	float rate;
	cout << "Enter amount: "; 
 	cin >> amount;
	cout << "Enter rate: "; 
	cin >> rate;
	
	float finalAmount = amount * (1 + rate/100);
	cout << "Final amount: " << finalAmount << endl;
}
