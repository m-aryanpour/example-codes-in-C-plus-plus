#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	
	cout << " example of string " << endl;
	string message(" enter a sentence: ");
	string readline, message2=" You entered: ";
	
	cout << message;                  // send a string out
	getline (cin, readline)	;         // read string from input stream
	message2 += readline;             // add two strings
	cout << message2 << endl;
	cout << " with "<< readline.length() << " characters: "; // length of a string
	string separator(readline.length(),'.'); // define a long single-character string
	cout << separator << endl;


	return 0;
}

