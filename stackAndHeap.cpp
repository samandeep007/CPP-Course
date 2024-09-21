#include <iostream>
#include <string>

struct User {
	const int id;
	int age;
	User(): id(001), age(22){} //This is constructor
	
};

int main() {
	using namespace std; //can be inside the main method as well
	
	//Stack and Heap Memory
	
	/*
	Stack has predefined size --> fastest
	Heap memory can grow --> predefined as well 
	*/

	//stack
	int score = 100;
	User sam;
	cout << sam.age;


	//Heap

	return 0;
}