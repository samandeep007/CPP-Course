#include <iostream>
#include <string>

using namespace std;

void swapValues(int& valOne, int& valTwo) { //temp is nothing but a wastage of memory --> This can be really extensive with classes with 100s of data members
	int temp = valOne;
	valOne = valTwo;
	valTwo = temp;
}


//better way using move semantics
void swap(int& valOne, int& valTwo) {
	int temp = move(valOne); //not a reference but the value of valOne is moved to temp, valOne is empty
	valOne = move(valTwo);
	valTwo = move(temp);
}

// l values and r values --> Left and right values of the operator --> right value is not available in the next line

string printMe() {
	return "I am print";
}

static int moveSemantics() {
	//Move semantics --> new concept --> Alternative to copy constructor	
	int a = 10;
	int b = 20;
	
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	swap(a, b);
	
	cout << "new A: " << a << endl;
	cout << "new B: " << b << endl;

	string s = printMe(); //left value will be available in the next line while printMe() will not --> it copies the reference into s
	string&& ss = printMe(); //difference: we are moving printMe to ss



	
	return 0;
}