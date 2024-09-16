#include <iostream>

using namespace std;

int main() {
	//Conditionals --> Check a condition and render the relevant block of code
	//You can have nested if statements
	int rating = 24;
	if (rating == 5) {
		puts("5 star rated");
	}
	else if(rating == 4) {
		puts("4 star rated");
	}
	else {
		puts("Low rated");
	}
	return 0;
}