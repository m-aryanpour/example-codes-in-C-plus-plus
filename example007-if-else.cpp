
#include <iostream>
using namespace std;

int main()
{
	float a,b,c;
	cout << " enter 2 numbers :";
	cin >> a && cin >> b;
	if ( a> b){
		cout<< "first number >  second number"<<endl;
	}
	else {
		if (b> a) 
			cout << " first number < second number "<< endl;
			else
			cout << "first number = second number"<< endl;
	}
	
return 0;
}
