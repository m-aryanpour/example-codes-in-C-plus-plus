#include <iostream>
#include <string>
using namespace std;

int main()
{
	double  a  = 100.;
	double  &a_ref = a; 
	
	a_ref *= 2;
	cout << "multiply reference by 2: a = " << a << ", reference to a = " << a_ref << endl; 
	a /= 2;
	cout << "divide variable by 2:  a = " << a << ", reference to a = " << a_ref << endl; 
	
	
return 0;
}
