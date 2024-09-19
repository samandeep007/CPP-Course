#include <iostream>
#include <string>

using namespace std;

static void sayHello() { //Function should be declared before usage
	cout << "Hello there!" << endl;
}

static void sayHelloTwo() {
	cout << "Hello there! 2" << endl;
}

static int addNums(int numOne, int numTwo) {
	return numOne + numTwo;
}

static void sayHelloThree() {
	cout << "3" << endl;
}

int main() {
	sayHello();
	sayHelloTwo();
	//sayHelloThree() + 3; //Invalid operand because void and int are not compatible
	sayHelloThree();
	cout << "The sum of numbers is " << addNums(2, 3) << endl;
	return 0;
}

