#include <iostream>
using namespace std;

int main () {
	double *ptr  = NULL;         // initialize a pointer
	ptr          = new double;   // allocate memory
 
	for (int i=0; i<10; i++)
	{
		*ptr = 2.*i+3;
		cout<< *ptr<< " ";
	}
	cout<< endl;

   delete ptr;         // release memory.

   return 0;
}
