#include <iostream>
using namespace std;

void func1();
double funcx2(double x);

int main(int argc, char *argv[])
{
	cout << " example of defining and calling user-functions" << endl;
	  
	func1();
	cout <<" back from func1"<< endl;
	double x2 = funcx2(3.4);
	cout <<" back from funcx2"<< endl;
	cout << " x*x = " << x2 << endl;
	return 0;
}

void func1(){
	cout <<"  now in func1 ..." << endl;
}

double funcx2(double x){
	cout <<"  now in funcx2 ..." << endl;
	return x*x;
	
}
