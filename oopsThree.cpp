#include <iostream>
#include <string>

using namespace std;

class Phone {
	string _name = "";
	string _os = "";
	int _price = 0;
	Phone(); //Default constructor is inaccessible

public: 
	Phone(const string& name, const string& os, const int& price); //Parameter constructor
	Phone(const Phone&); //copy constructor
	
	string getName() {
		return _name;
	}

	string getOs() {
		return _os;
	}

	~Phone(); //This is a destructor --> Called automatically --> LIFO
};

Phone::Phone() : _name("iPhone 16"), _os(), _price() {
	puts("Default constructor called");
};

Phone::Phone(const string& name, const string& os, const int& price) : _name(name), _os(os), _price(price) {
	puts("Parameter constructor called");
};

Phone::~Phone() {
	cout << "Destructor called for " << _name << endl;
}

Phone::Phone(const Phone& values) {
	puts("Overwrite copy constructor called");
	_name = "my-" + values._name;
	_os = "skinned-"+values._os; //Modified a lil bit
	_price = values._price;
};
// :: --> scope resolution operator

int main() {
	//Phone *apple = new Phone("iphone", "iOS", 12990);
	//cout << apple->getName();

	//Phone apple;
	//cout << apple.getName() << endl;

	Phone *samsung = new Phone("S30 Ultra", "ios", 230);
	cout << samsung -> getName() << endl;

	Phone onePlus8("OP8", "Android-Oxy", 799);
	cout << onePlus8.getName() << endl;
	cout << onePlus8.getOs() << endl;

	Phone onePlus9 = onePlus8;
	cout << onePlus9.getName() << endl;
	cout << onePlus9.getOs() << endl;



	return 0;
}