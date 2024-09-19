#include <iostream>
//#include <string>

using namespace std;

static int string() {
	char my_string[] = "Samandeep Singh"; //C style strings
	char my_char_string[] = {'S', 'a', 'm', 'a', 'n','d', 'e', 'e', 'p', 0}; //Every single string is terminated by a 0 
	//string my_name = "Tarandeep Kaur";
	
	cout << "Take a break" << endl;

	for (int i = 0; my_string[i]; i++) { // or my_string[i] != 0 
		cout << "Character is " << my_string[i] << endl;
	}

	cout << "Take a break part 2" << endl;

	for (char *cp = my_string; *cp != 0; cp++) {
		cout << "Character is " << *cp << endl; //using pointer deref
	}
	cout << my_char_string << endl;
	//cout << my_name << endl;

	cout << "Take a break part 3" << endl;

	for (char c : my_string) { //An extra iteration because there's a 0 at the end
		if (c == 0) break;
		cout << "Character is " << c << endl; //using pointer deref
	}

	return 0;
}