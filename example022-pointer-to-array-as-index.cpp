#include <iostream>
#include <iomanip>
using namespace std;
int string_length( char st[]) // Compute length of a character array
{ 
	int i;
	for(i = 0; st[i] != '\0'; ++i) {
	}
	return (i);
}

int main()
{

	char Str[] = "abcdefghijkl-lkjihgfedcba";
	char *pstr, pc;
	cout << Str<< endl;
	cout<< "choose a letter from above to report its index: "; 
	cin>>pc;
	int i = 1;
	cout << "your letter is found at locations ";
	bool found= 0;
	for (char *pstr= Str; pstr<Str+string_length(Str); pstr++, i++){		
		if (*pstr==pc){
			cout<< setw(5) << i;
			found= 1;
		}				
	}
	if (! found){
		cout<< "?! it is not found :(";
	}
	cout << endl;
	
return 0;
}
