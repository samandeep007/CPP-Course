#include <iostream>
#include <string>

using namespace std;


int factorial(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

int main() {
	//Recursion is a function that keeps calling itself until a certain condition is met
	//factorial is a very common example of it : n(n-1)!
	// :: scope resolution operator
	/*
	Factorial: 3 * 2 * 1
	Factorial: 1 * 2 * 3
	*/
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "The factorial of " << num << " is " << factorial(num) << endl;
	return 0;
}

