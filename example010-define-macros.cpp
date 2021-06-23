#include <iostream>
#include <string>
using namespace std;

#define CLS (cout << "\033[2J") // Clear screen
#define SQUARE(x) ((x)*(x))

int main()
{
	double x=0;


	while (not(x==1)) {
		cout << " 0: clear screen   1: exit   else: squared ";
		cin >> x;
		if (x==0) {
		
			CLS;
		}
		else {
		
			cout << "   ("<<x<<")^2 = "<< SQUARE(x) << endl;
		}
	} 
	
	
	
return 0;
}
