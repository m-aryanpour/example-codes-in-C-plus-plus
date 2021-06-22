#include <iostream>
using namespace std;

double funcx2(double x);

int main(int argc, char *argv[])
{
	
	cout << " example of reading input " << endl;
	double x2;
	double x = 1.;
	while (x > 0) { 
			cout << "  enter a positive number to be squared: ";
			cin  >> x;
			x2 = funcx2(x);
	        cout <<" x^2 = "<< x2<< endl;
	
	}

		cout <<"  negative number -> to exit" << endl;

	cout << " x*x = " << x2 << endl;
	return 0;
}


double funcx2(double x){
	return x*x;
}
