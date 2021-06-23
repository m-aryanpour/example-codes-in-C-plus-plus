#include <iostream>
#include <string>
using namespace std;

double &ident(double &a);
int main()
{
	double b= 1.0;
	cout << " b= "<< b<< endl;
	++ident(b);
	cout << " after ++ident(b), b= "<< b<< endl;
	ident(b) = 23.0;
	cout << " after ident(b)=23., b= "<< b<< endl;
return 0;
}

//===
double &ident(double &a){
	return a;
}
