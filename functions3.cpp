#include <iostream>
#include <string>

using namespace std;

int getTwo() {
	return 2;
}

void interesting() {
	puts("I am interesting");
}

static int functionsThree() {
	//functional pointers
	int whatIGot = getTwo(); //We know what it holds
	
	//Pointer is something that points to something. It doesn't store anything
	void (*pointsToInteresting)() = interesting; //should be of same time as the return type of the function

	(*pointsToInteresting)(); //or
	pointsToInteresting();

	cout << whatIGot << endl;
	return 0;
}