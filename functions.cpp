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

int main() {
	sayHello();
	sayHelloTwo();
	cout << "The sum of numbers is " << addNums(2, 3) << endl;
	return 0;
}

