#include <iostream>

using namespace std;

struct User {
	//This is kinda blueprint --> pretty much like a interface
	const int uID;
	const char *name;
	const char *email;
	int course_count;
};

static int structures() {
	 //Structures in CPP
	User userOne = {001, "Saman Sandhu", "samandeep0792@gmail.com", 12};
	User userTwo = { 002, "Tarandeep Sandhu", "tarandeep0792@gmail.com", 24 };
	User *u2 = &userTwo; // . can only be used with a struct, not a pointer
	cout << userOne.email << endl;
	cout << userTwo.name << endl;
	userTwo.name = "Jaideep Singh"; //Damn, you are able to change it even after it being a const? This is because name is a pointer
	cout << userTwo.name << endl;
	cout << u2->email; // use -> instead
	return 0;
}