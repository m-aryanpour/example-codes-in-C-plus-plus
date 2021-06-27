#include <iostream>
using namespace std;

int main () {
	int m=4, n=3;                // define dimensions
	double ** arrPtr = new double *[m]; 
	
	for (int i = 0; i < m; ++i){ // define each row
		arrPtr[i] = new double[n];
	}
	
	for (int i=0; i<m; i++){ // fill array 
		for (int j=0; j<n; j++){
			arrPtr[i][j] = i+2*j;
		}
	}
  
  	for (int i=0; i<m; i++){  // use array elements
		for (int j=0; j<n; j++){
			cout<<arrPtr[i][j]<< "  ";
		}
		cout<< endl;
	}
  	

   return 0;
}
