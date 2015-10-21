#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

void printInfo( const string& filename, int rowCount, int wordCount, int charCount ) {
	cout << "\t" << rowCount << "\t" << wordCount << "\t" << charCount << "\t" << filename << endl;
}

void readFile( const string& filename, int& rowCount, int& wordCount, int& charCount ) {
	rowCount = wordCount = charCount = 0;
	ifstream file{filename};
	if(!file) {
		cerr << "Error! " << filename << " does not exist" << endl;
	}	
	string strLine;
	while (getline(file, strLine) ) {
		rowCount ++;
		charCount += strLine.length();
		istringstream buf(strLine);
		string word;
		while( buf >> word ) {
			wordCount ++;
		}
	}
	printInfo( filename, rowCount, wordCount, charCount );
} 

int main(int argc, char* argv[]) {
	if (argc < 2 ) {
		return -1;	
	}
	int totalRowCount = 0, totalWordCount = 0, totalCharCount = 0;
	for(int index = 1; index < argc; index++) {
		string filename(argv[index]);
		int rowCount = 0, wordCount = 0, charCount = 0;
		readFile(filename, rowCount, wordCount, charCount );
		totalRowCount += rowCount;
		totalWordCount += wordCount;
		totalCharCount += charCount;	
	}
	printInfo("Total:", totalRowCount, totalWordCount, totalCharCount );
	return 0;
}
