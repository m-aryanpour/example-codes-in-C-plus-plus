#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int Arr1[] = {1,3,5,7};
	int Arr2[] = {11, 22, 55};
	int Arr3[] = {101,201,401,901};
	int *ptr[] = {Arr1,Arr2,Arr3};
	
	for(int i=0; i<3; i++){
		ptr[i] += i;
		cout<< "    A"<<i+1<<"["<<i+1<<"]= "<<setw(4) << *ptr[i];
	}
	cout<< endl;
return 0;
}
