#include <iostream>
#include <string>

using namespace std;

static int operators() {
	int life = 3;
	int points = 4;

	int score = 2; //assignment operators assigns the right value to the left variable
	
	//score = score + points --> score + points --> is held in a temperory place and then it is stored in the score
	score += points;

	//Arithmetic Operations: + - * / %
	//Unary operator: - --> makes the int negative

	//Comparison Operators: ==, !=, <=, >=, <, <
	//Logical Operators: &&, ||, !

	if (life != 0) {
		puts("Into the if block");
	}


	return 0;
}