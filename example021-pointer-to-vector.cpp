#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n=10;
	cout << " create a vector containing first 10 integers squared.\n";
	int As[n];// define Vector As and a pointer to it.
	
	for (int i=0; i<n; i++) { // fill vector using index
			As[i] = (i+1)*(i+1);
	};
	for (int *pa=As; pa<n+As; pa++) { // print vector using pointer to vector
			cout << setw(4)<< *pa;		
	};
	
return 0;
}
