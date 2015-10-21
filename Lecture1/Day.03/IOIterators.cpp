#include <iostream>
#include <string>
#include <set>
#include <iterator>


using namespace std;

int main(int argc, char* argv[]) {
	istream_iterator<int> in(cin);
	istream_iterator<int> end;
	ostream_iterator<int> out(cout, " ");
	while(in != end) {
		*out = *in * *in;		
		++in;
		++out;
	}
	cout << endl;
}
