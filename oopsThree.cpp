#include <iostream>
#include <string>

using namespace std;

class Phone {
	string _name = "";
	string _os = "";
	int _price = 0;

public: 
	Phone();
	//Phone(const string& name, const string& os, const int& price); //Parameter constructor
	//Phone(const Phone&); //copy constructor
	
	string getName() {
		return _name;
	}

	~Phone(); //This is a destructor
};

Phone::Phone() : _name(), _os(), _price() {
	puts("Default constructor called\n");
};


int main() {
	//Phone *apple = new Phone("iphone", "iOS", 12990);
	//cout << apple->getName();

	Phone samsung;
	cout << samsung.getName() << endl;
	return 0;
}