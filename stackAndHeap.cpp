#include <iostream>
#include <string>

struct User {
	const int id;
	int age;
	User(): id(001), age(22){} //This is constructor
	
};

static int stackAndHeap() {
	using namespace std; //can be inside the main method as well
	
	//Stack and Heap Memory
	
	/*
	Stack has predefined size --> fastest
	Heap memory can grow --> predefined as well 
	*/

	//stack
	int score = 100;
	User sam;

	
	//Heap
	int *heap_score = new int; //You have to delete it as well
	*heap_score = 200; //Assigning value to the pointer by deref

	User *nike = new User(); //new keyword is used for heap declarations 
	

	delete heap_score;
	delete nike;

	return 0;
}