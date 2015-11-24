/*
 * List.cpp
 *
 *  Created on: Nov 4, 2015
 *      Author: karl
 */


#include "List.hpp"

#include <iostream>
#include <string>
int main(int argc, char* argv[]) {
	List lst;
	for( int k=1; k<=10; ++k) {
		lst.put(k);
	}
	while (!lst.empty()) {
		std::cout << lst.get() << " ";
	}
}


