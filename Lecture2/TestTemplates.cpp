/*
 * TestTemplates.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: karl
 */


#include "EqualsTemplate.hpp"
#include "StackLIFO.hpp"
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	string a("test");
	string b("test");
	string c("test");
	string d("test2");
	cout << "Compare int    " << (compareThree(1, 1, 1) ? "TRUE" : "FALSE")  << endl;
	cout << "Compare long   " << (compareThree(1L, 1L, 1L) ? "TRUE" : "FALSE")  << endl;
	cout << "Compare string " << (compareThree(a, b, c) ? "TRUE" : "FALSE")  << endl;
	cout << "Compare char*  " << (compareThree("test", "test", "test") ? "TRUE" : "FALSE")  << endl;

	cout << "Compare int    " << (compareThree(1, 1, 3) ? "TRUE" : "FALSE")  << endl;
	cout << "Compare long   " << (compareThree(1L, 3L, 1L) ? "TRUE" : "FALSE")  << endl;
	cout << "Compare string " << (compareThree(a, d, c) ? "TRUE" : "FALSE")  << endl;
	cout << "Compare char*  " << (compareThree("testa", "test", "test") ? "TRUE" : "FALSE")  << endl;
	{
		Stack<int, 10> stk;
		stk.push(10);
		stk.push(20);
		stk.push(30);
		while(!stk.empty()) cout << stk.pop() << endl;
	}
	{
		Stack<string, 10> stk;
		stk.push("hi");
		stk.push("yo");
		stk.push("howdy");
		while(!stk.empty()) cout << stk.pop() << endl;
	}
}



