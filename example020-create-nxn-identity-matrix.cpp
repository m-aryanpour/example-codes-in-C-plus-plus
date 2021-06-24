#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n=1;
	cout << " create an nxn identity matrix with n= ? ";
	cin >> n;
	double Inxn[n][n] = {0.}; // define matrix Inxn
	for (int i=0; i<n; i++) { // fill Inxn
		for (int j=0; j<n; j++){
			Inxn[i][j] = 0.;
		}
		Inxn[i][i]= 1.0;
	};
	for (int i=0; i<n; i++) { // print Inxn
		for (int j=0; j<n; j++){
			cout << setw(3)<< Inxn[i][j];
		}
		cout<<endl;
		
	};

return 0;
}
