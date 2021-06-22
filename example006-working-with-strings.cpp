#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	
	cout << " example of string " << endl;
	string message(" enter a sentence: ");
	string readline, message2=" You entered: ";
	
	cout << message;
	getline (cin, readline)	;

	cout << message2 << readline << endl;
	cout << " with "<< readline.length() << " characters: ";
	string separator(readline.length(),'.');
	cout << separator << endl;


	return 0;
}


