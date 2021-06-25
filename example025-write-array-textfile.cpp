// Pizza_W.cpp
// Demonstrating output of records block by block.
// ---------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Product { char name[20]; float price; };


int main() // To write records.
{
	Product sales[]= { {"apple",1.34}, {"orange",2.45}, {"onion", 13.2}};
	string file1 = "product.records";
	ofstream fid1;
	fid1.open(file1.c_str());
	for (int i=0; i<3; i++){
		fid1 << setw(20)<<left<<sales[i].name<< setw(6)<< right << sales[i].price<< endl;
	}

return 0;
}
