#include <iostream>
using namespace std;

int inline triple(int i) {
	return (3*i);
}

double inline triple(double x){
	return(3.*x);
}
string inline triple(string st){
	return(st+st+st);
}
int main(){
		
		cout<< " integer: 3 x 11 = "<< triple(11)<<endl;
		cout<< " double:  3 x 11. = "<< triple(11.)<<endl;
		cout<< " string:  3 x '11' = "<< triple("11")<<endl;

	return 0;
}
