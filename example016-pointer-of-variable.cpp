#include <iostream>
using namespace std;

int main() 
{ 

	double x = 124., *xptr;
	xptr = &x;
	cout << " x-value= " << x << ", x-address= x-pointer= " << &xptr<< endl;
	cout << " xptr   = " << xptr << ", xptr-address= "<< &xptr << endl;
	cout << " xptr-pointing-to= " << *xptr<< endl;

return 0;
}
