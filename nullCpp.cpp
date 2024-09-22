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

int main() {
	//Null ambiguity
	printVal(1);
	printVal(1.5);
	printVal(NULL);
	printVal("Samandeep Singh");

	int* myp;
	int num = 10;
	myp = &num;
	printVal(myp);
	return 0;
}