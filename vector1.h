// Vector1.h
#ifndef _VECTOR1_H_
#define _VECTOR1_H_
#include <iostream>
using namespace std;

class Vector1
{
private:
public:
long length; 
double vals[];

Vector1( long len = 1)
{
	length = len;
	for (long i=0; i<len; i++){
		vals[i] = 0.0;
	}
};
Vector1( long len, double *x)
{
	length = len;
	for (long i=0; i<len; i++){
		vals[i] = *x;
		x++;
	}
};


void print() const // print
{ 
	for (long i=0; i<length; i++) {
		cout << vals[i]<<"  ";
	}
	cout << endl;
}

}; // class
#endif // _Vector1_H_
