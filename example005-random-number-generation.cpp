#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	
	cout << " example of generating random numbers " << endl;
	int m=1;
	while (m > 0) { 
			cout << "  how many random numbers? ";
			cin  >> m;
			srand(10*m);
			for (int i=0; i<m; i++) {
				cout << rand() << " ";
			}
	        cout << endl;
	
	}

	return 0;
}


