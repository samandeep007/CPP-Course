#include <iostream>

using namespace std;

int main() {
	//Conditionals --> Check a condition and render the relevant block of code
	//You can have nested if statements
	int rating = 4;
	if (rating == 5) {
		puts("5 star rated");
	}
	else if(rating == 4) {
		puts("4 star rated");
	}
	else {
		puts("Not 5 AND 4 star rated");
	}

	rating >= 5 ? cout << "Good beta" : cout << "bhaad mei jaa"; //Ternary operator --> ?

	return 0;


}