#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.1415926536
#define START_VALUE (-4.0) // Lower limit
#define FINAL_VALUE (4.0) // Upper limit
#define STEP ((FINAL_VALUE-START_VALUE) / 10.0) // Step width
#define TITLE (cout << \
"=============================\n"\
"        Values Table         \n"\
"=============================\n")

int main()
{
	TITLE;
	cout << setw(6) << "x" << setw(20) << "tanh(x)\n"
	<< " ----------------------------"
	<< fixed << endl;
	double x;
	for( x = START_VALUE; x < FINAL_VALUE+0.1; x += STEP)
	cout << setw(10) << x << setw(16) << tanh(x)
	<< endl;
	cout << endl << endl;
	
return 0;
}
