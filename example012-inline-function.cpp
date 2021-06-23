#include <iostream>
#include <cmath>
using namespace std;

double myTanh1(double x);

inline double myTanh2(double x) {
	return (x*tanh(1+x));
}


int main()
{
	double x;
	cout << " enter x to function myTanh(x): ";
	cin>> x;
	cout << "  calling     inline function: myTanh1(x)= " << myTanh1(x)<<endl;
	cout << "  calling subroutine function: myTanh2(x)= " << myTanh2(x)<<endl;
	
return 0;
}

double myTanh1(double x){
	return (x*tanh(1+x));
}
