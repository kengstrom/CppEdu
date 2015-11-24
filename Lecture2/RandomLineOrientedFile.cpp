/*
 * RandomLineOrientedFile.cpp
 *
 *  Created on: Nov 4, 2015
 *      Author: karl
 */


#include "TextFile.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
	int readIndex = 25;
	int writeIndex = 2;
	string x = "test";
	if(argc > 1)
		readIndex = stoi(argv[1]);
	if(argc > 2)
		writeIndex = stoi(argv[2]);
	if(argc > 3)
		x = argv[3];
	TextFile file("Test.txt");
	cout << (string)file[readIndex] << endl;
	file[writeIndex] = x;
}



