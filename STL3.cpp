#include <iostream>
#include <string>

using namespace std;

class MyFloat {
	float _fl;
public:
	MyFloat() { //Constructor only runs once
		_fl = 0.1; 
	}
	void getValue() {
		cout << _fl << endl;
	}

	void operator()(float v) { //operator ()
		_fl += v;

	}
};

static int functors() {
	//Functors --> State management of functions --> Operator overloading of parenthesis
	
	MyFloat floaty;
	floaty.getValue();

	floaty(0.1); //Overloading the parenthesis
	floaty.getValue(); //0.1 added to the floaty

	floaty(0.2); 
	floaty.getValue(); 

	return 0;
}