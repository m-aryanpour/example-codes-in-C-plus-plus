// example of using structures
// define a structure that contains a grocery product
// -----------------------------------
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Product {
	string name;
	double price; // price of the product per kg
	double sales;
};


inline void print( const Product& p)
{
	if (p.sales>0){
	
	cout << fixed << setprecision(2)
	<<  setw(15)  << p.name << setw(10) << p.price
	<<  setw(10)  << p.sales << endl;
	}
}

int main()
{
	
	
	Product greenApple, orange, onion;
	greenApple.name = "green apple"; 
	    greenApple.price = 1.1; 
	    greenApple.sales = 2.5*greenApple.price;
	orange.name= "orange"; 
		orange.price = 0.5; 
		orange.sales = 3.*orange.price;
	onion.name = "onion";
		onion.price = 0.4; 
		onion.sales = 0.;
	
	cout<<"today's sales"<<endl;
	print(greenApple); print(orange); print(onion);
	cout<<endl;
	cout<< "total "<< setw(24)<< greenApple.sales+orange.sales+onion.sales << endl;

	Product *p1= &greenApple, *p2=&orange, *p3=&onion;	
	p1->sales *=1.06 ;  // add %6 tax on green apple
	p2->sales *=0.95 ;  // subract %5 discount on orange
	cout<< "tax+discount included"<< setw(9)<< greenApple.sales+orange.sales+onion.sales << endl;
	

return 0;
}
