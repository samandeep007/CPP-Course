#include <iostream>
#include <string>

using namespace std;

static int lambdas() {
	//lambdas --> Similar to arrow functions in javaScript --> functions without name --> dispose rightaway
	[] {cout << "Hello Duniya" << endl; }(); //this is a lambda function --> run it asap you define it
	[](){return 100; }; //With return value

	//You can use lamdas when you want to use functions as variables --> It saves memory too because they don't have name of their own
	auto sum = [](auto a, auto b) {return a + b; };
	cout << "The sum of 10 and 29 is " << sum(10, 29) << endl;

	string  a = "Saman ";
	string b = "Sandhu";
	cout << "The sum of Saman and Sandhu is " << sum(a, b) << endl;

	cout << "The sum of 2.4 and 4.5  is " << sum(2.4, 4.5) << endl;

	return 0;
}