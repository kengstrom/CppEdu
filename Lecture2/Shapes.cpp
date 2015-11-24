/*
 * Shapes.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: karl
 */


#include "Shapes.hpp"
#include <iostream>


using namespace std;
int main(int argc, char* argv[]) {

	Rectangle r(2,3.1);
	Circle c(2.5);
	Triangle t(3.2,4.9);
	Square s(5.3);

	cout << to_string(r.area()) << endl;
	cout << to_string(c.area()) << endl;
	cout << to_string(t.area()) << endl;
	cout << to_string(s.area()) << endl;
}



