#include "Vector1.h" // class
#include <iostream>
using namespace std;
int main()
{
	double x[]= {0.9,1.45,6.3};
	Vector1 A1(3, x);
	A1.print();
	Vector1 A2=Vector1(10);
	A2.print();		
return 0;
}
