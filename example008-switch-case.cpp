
#include <iostream>
using namespace std;

int main()
{
	int a;
	bool exit= false;
	while (not exit) {
		
		cout << " choose a number from {1,2,3,4}: ";
		cin >> a ;

		switch (a) {
			case (1):
				cout << " one is low"<< endl;
				break;
			case (2):
				cout << " two is ok "<< endl;
				break;
			case (3):
				cout << " three is large"<< endl;
				break;
			case (4):
				cout << " four is huge"<< endl;
				break;
			default:
				cout << " huh? "<<endl;
				exit = true;
				break;
			}
			
	}
return 0;
}
