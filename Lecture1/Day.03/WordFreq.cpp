#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>
#include <utility>
#include <iterator>
#include <fstream>

using namespace std;

string lowercase(const string& str) {
	string result;
	for (char ch: str) result += ::tolower(ch);
	return result;
}

string strip(const string& src) {
	string dest;
	for(char ch:src) {
		if (isalpha(ch)) 
 			dest+=ch;
		else
			dest+=' ';
	}
	return dest;
}

int main(int argc, char* argv[]) {
	map<string, int> freqs;
	if(argc != 4 ) 
	{
		return -1;
	}
	unsigned int minChars = stoi(argv[1]);
	unsigned int toList = stoi(argv[2]);
	string filename = argv[3];

	ifstream f{filename};
	
	for(string line; getline(f, line);) {
		istringstream buf(lowercase(strip(line)));
		string word;	
		while( buf >> word ) {
			freqs[strip(word)]++;
		}
	}
	vector<pair<string,int>> vPairs;


	copy_if(freqs.begin(), freqs.end(), back_inserter(vPairs), [&](pair<string, int> p) {return p.first.length()>=minChars;} );

	sort( vPairs.begin(), vPairs.end(), [](pair<string, int> left, pair<string,int> right) { return left.second > right.second; } );

	for_each( vPairs.begin(), vPairs.begin() + toList, [](pair<string, int> p) { cout << p.first << ": " << p.second << endl; } ); 

}
