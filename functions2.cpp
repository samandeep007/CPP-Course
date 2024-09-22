#include <iostream>
#include <string>

using namespace std;

void lifeUp(int num) {
	num++;
}

void increaseAge(int* age) {
	(*age)++;
}

//Another way of calling by reference
void lifeIncrease(int& life) { //doesn't matter what you pass, it will take in the reference only and make the changes directly at the memory location
	++life;
}

int addMe(int numOne, int numTwo) {
	return numOne + numTwo;
}

float addMe(float numOne, float numTwo) { //Function overloading --> function with different signature but same name
	return numOne + numTwo;
}

int main() {
	//Functions are the building blocks of C++
	/*
	Functions are called methods when defined inside a class
	main function is the entry point of the program --> needs not to be called manually
	a function can accept parameters and can return any data type
	
	return_type function_name(parameters){
	     block
		 return something;
		 -- Nothing after the return statement is executed --
	}

	call by value --> copy gets incremented, not the actual value
	call by reference --> using pointer or reference


	*/

	int life = 3;
	lifeUp(life); //Call by value --> will not change the value
	cout << life << endl;

	int age = 21;
	increaseAge(&age);
	cout << age << endl;

	int marioLife = 20;
	lifeIncrease(marioLife);
	cout << marioLife << endl;
	
	int v1 = 20;
	int v2 = 16;
	float v3 = 34.23;
	float v4 = 14.27;
	
	//cout << addMe(v3, v4) << endl; --> Will add only the integer equivalents --> value will get truncated

	cout << addMe(v3, v4) << endl; //Will return the float value 
	
	return 0;
}