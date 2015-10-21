#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	if(argc!=2) return -1;
	string phrase(argv[1]);
	int lineNbr = 1;
	for(string line; getline(cin, line); ++lineNbr) 
	{
		if(line.find(phrase) != string::npos )
		{
			cout << "[" << lineNbr << "] " << line << endl;
		}
	}
}
