#include <iostream>
using namespace std;

int main() 
{ 

	double x = 124., *xptr;
	xptr = &x;
	cout << " x-value= " << x << ", x-address= x-pointer= " << &xptr<< endl;
	cout << " xptr   = " << xptr << ", xptr-address= "<< &xptr << endl;
	cout << " xptr-pointing-to= " << *xptr<< endl;
	*xptr += 10;
	cout << " change x by changing its pointer: <*xptr += 10;> adds 10 to x: "<< x<<endl;

return 0;
}
