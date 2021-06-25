#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	string file1;
	ifstream fid1; 
	cout << " enter a file name to check: ";
	cin >> file1;
	
	fid1.open(file1.c_str());
	if (fid1.good()){
		

		if (fid1.is_open()){
			cout << " file <"+file1<<"> exists and is open."<<endl;
	}
	else{
		cout << " file <"+file1<<"> exists but is closed."<<endl;
	}; // if is_open
	} // if good= if exists
	else {
		cout << " file <"+file1<<"> does not exists."<<endl;
	}

return 0;
}
