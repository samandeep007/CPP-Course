#include <iostream>
#include <string>
#define NULL 0

using namespace std;

void printVal(int a) {
	printf("The value of integer is %d\n", a);
}

void printVal(double a) {
	cout << "The value of double is " << a << endl;
}

void printVal(string name) {
	cout << "Good morning, " << name << endl;
}

void printVal(int* a) {
	cout << "Pointer value is " << *a << endl;
}

static int nullCpp() {
	//Null ambiguity
	printVal(1);
	printVal(1.5);
	printVal(nullptr); //nullptr is a default null pointer which means it points to nothing
	printVal("Samandeep Singh");

	int* myp;
	int num = 10;
	myp = &num;
	printVal(myp);
	return 0;
}