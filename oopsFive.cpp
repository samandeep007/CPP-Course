#include <iostream>
#include <string>

using namespace std;

class Money {
public:
	void gotMoney() {
		puts("Received 5K USD in my account");
	}
};

class Man {
	string _name;
	int _age;
	Man() {}; //Disabling the default constructor

	friend class Superman; //It has access to private members --> Jo tera hai vo mera --> exposes everything to the friend

protected: 
	
	Man(const string& name, const int& age) : _name(name), _age(age) {}; //Parametric constructor
	
	void run() {
		cout << "I can run" << endl;
	}

	int getAge() {
		return _age;
	}

public:
	void sayName();
};

void Man::sayName() {
	cout << "My name is " << _name << " and my age is " << _age  << endl;
}


//Derived class

class Superman : public Man, public Money { //public means you want to publically access the base class
	bool _flight;

public:
	
	Superman(string name) : Man(name, 21), Money(){};
	
	void run() { //Method overriding
		printf("I can run at lightspeed %d\n", _age);
	}
};



class Spiderman : public Man {
	bool _webbing;
public:
	Spiderman(string name) : Man(name, 18) {};
	void run() {
		puts("I can run at normal speed\n");
	}
};


static int oopsFive() {
	
	//Inheritance --> Child inherits from Parent --> Car inherits from vehicle
	//Base class --> Parent class --> Alpha class --> Super class
	//Derived class --> Child class --> Beta class --> Sub class
	//Derived class has everything from the base class, but not limited to it, it can have more things of its own

	//Private areas are not exposed to derived class
	/*
	PUBLIC --> Accessible to: Base Class, Derived class, Other
	PROTECTED --> Accessible to: Base Class, Derived Class
	PRIVATE --> Accessible to: Base Class
	*/

	Superman clark("Kent");
	Spiderman peter("Peter");

	clark.sayName();
	clark.run();

	peter.sayName();
	peter.run();
	

	//Friend keyword --> Flawed (not recommended)

	clark.gotMoney();

	return 0;
}