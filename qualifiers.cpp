#include <iostream>
#include <string>

using namespace std;

int lifeUp() {
	int life = 3; //Life of the player;
	return ++life;
}

int main() {
	//Qualifiers
	const int  i = 5; //const is a qualifier
	//i = 7; cannot reassign the value to i

	//modification qualifier -> modify or not to modify the value in a variable
	/*
	const --> to make the variable immutable
	volatile --> to allow the value to change by other threads in the process
	mutable --> allows the value to be changed
	*/


	//life duration qualifier --> For how long the value should be available
	/*
	static --> used to track the lifecycle of a variable --> use anywhere
	register --> give compiler a suggestion to store the information in register for faster execution (eg. drivers) --> Compiler can ignore that 
	extern --> store things in the external library which can be linked while linking process
	auto --> Deprecated
	*/

	int life = 3;
	cout << "Your starting game life is " << life << endl;

	life = lifeUp();
	cout << "Your updated game life is " << life << endl;



	return 0;
}