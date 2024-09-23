#include <iostream>
#include <string>

using namespace std;

void swapValues(int& valOne, int& valTwo) {
	int temp = valOne;
	valOne = valTwo;
	valTwo = temp;
}

int main() {
	//Move semantics --> new concept --> Alternative to copy constructor	
	int a = 10;
	int b = 20;
	
	cout << "The initial value of a is " << a << endl;
	cout << "The initial value of b is " << b << endl;

	swap(a, b);
	
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
	return 0;
}