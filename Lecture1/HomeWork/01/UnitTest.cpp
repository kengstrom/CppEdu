#include "SebUtils.hpp"



int testStr() {
	
	cout << seb::str::lowercase("AbC") << endl;
	cout << seb::str::lowercase("AbCDEFGggg") << endl;
	cout << seb::str::uppercase("AbC") << endl;
}



int main(int argc, char *argv[]) {
	testStr();
	return 0;
}
