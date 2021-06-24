#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int MAXNUMVALS = 20; // length of vector
	int nVals;
	double vector1[MAXNUMVALS], x; // 

	cout << " enter a few numbers and end with a lette to finish. "<< endl;
	nVals = 0;
	for(  int i = 0; i < MAXNUMVALS && cin >> x; ++i) {
	
	    vector1[i] = x;
		nVals ++;
	}
	cout << "numbers    squared\n" << endl;
	for( int i = 0; i < nVals; ++i){
		cout << setw(5)<< vector1[i] << setw(10)<< vector1[i]*vector1[i]<< endl;
	}


return 0;
}
