#include <iostream>
#include <string>
using namespace std;

class One {
public:
	virtual void intro() { //virtual will solve this ambiguity of pointers --> I want to use the inherited method
		cout << "I am One\n"; //Any virtual method that doesn't have any function body is called pure virtual method
	}
};

class Two : public One {
public:
	void intro() {
		cout << "I am Two\n";
	}
};

class Three : public One {
public:
	void intro() {
		cout << "I am Three\n";
	}
};

int main() {
	//Polymorphism --> Overloading and overriding

	One *a;
	Two b;
	Three c;

	a = &b; //Points to b
	a->intro();

	a = &c; //Points to c --> no matter where the pointer is pointing, it will still have the features of its own class
	a->intro();
	
	
	b.intro();
	c.intro();
	return 0;
}