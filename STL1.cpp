#include <iostream>
#include <string>

using namespace std;

template<typename T>
T getBigger(T valOne, T valTwo) { //No need to worry about the data type: T can be anything
	return valOne > valTwo ? valOne : valTwo;
}
int main() {
	//Standard Template Library --> For generic programming --> Different from std library
	/*
	It takes Generic programming to next level --> Somewhere between pseudocode and actual code --> data type doesn't matter
	It provides built in data structures and algorithms
	Ships in --> Similar to collection API in Java
	Generic programming -> Data types are not specified at the time of implementation of code logic
	--> Also known as run-time polymorphism
	NOTE: we will mention data type in C++
	*/

	cout << getBigger(4, 5) << endl;
	cout << getBigger(3.5, 3.9) << endl;
	cout << getBigger('A', 'D') << endl; //Compares the ASCII values

	return 0;
}