// class constructor and destructor 
#include <iostream>
#include <string>
using namespace std;

class Bullet{
	private: 
	public: Bullet(const string &, const double & );
	double range;
	string name;
	~Bullet();
};

Bullet::Bullet(const string &s1, const double & r1) {
	range = r1;
	name = s1;
	cout<< "bullet <"<< name<<"> created with range <"<<range<<">"<<endl;
}

Bullet::~Bullet(){
	range = 0.;
	cout<< "bullet <"<< name<<"> destroyed"<<endl;
}

int main()
{

	Bullet b1 = Bullet(" bullet1",100.);
	Bullet b2 = Bullet(" bullet2",145.);
	return 0;
}
