#include <iostream>

using namespace std;

int conditionals() {
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

	if (!NULL) //0 is false, 1 is true --> NULL is also considered zero/false
	{
		puts("Go for it");
	}

	rating >= 5 ? cout << "Good beta\n" : cout << "bhaad mei jaa\n"; //Ternary operator --> ?

	printf("Your rating feedback is %s\n", rating >= 4 ? "awesome" : "not so good");
	return 0;


}