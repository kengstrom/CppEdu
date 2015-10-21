#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main(int argc, char* argv[]) {
	int amount = 100;	
	if( argc > 1 ) {
		string strC(argv[1]);
		amount = stoi( strC );
	}
	vector<bool>pVector(amount, true);

	for(unsigned int index=2; index<pVector.size(); index++) {
		while(!pVector[index]) ++index;
		for(unsigned int pos=2*index;pos< pVector.size();pos+=index) 
			pVector[pos] = false;
	}
	for(unsigned int index=2; index<pVector.size(); index++)
		if(pVector[index])
			cout << index << " ";	
	cout << endl;
	return 0;
}
