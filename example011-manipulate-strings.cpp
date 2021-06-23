#include <iostream>
#include <string>
using namespace std;
string message("Enter a long sentence: "), 
	   aLine( 50, '='); 
int main()
{
	string sentence; 
	cout << message << endl;
	// read a sentence
	getline( cin, sentence); 
	
	cout << aLine << "\n the sentence has " << sentence.size() 
			<< " characters." << endl;
	// get firt 10 characters
	string first10(sentence,0,9);
	cout << "  first 10 characters= " << first10 << endl;
	cout << "  first 10 in reverse order= ";
	for(int i=10;i>-1; i--){
		cout<< sentence[i];
	}
	cout<<endl;
	// erase part of string
	sentence.erase(0,10);
	string second10(sentence,0,10);
	cout << aLine<<"\n  second 10 characters= " << second10 << endl;	
	// insert a string into another
	string st1(first10);
	st1.insert(5,second10,0,4);
	cout<< aLine<<"\n inserting characters from 2nd into 1st= "<< st1<< endl;


return 0;
}
