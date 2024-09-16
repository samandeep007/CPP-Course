#include <iostream>
#include <string>

using namespace std;

int name(){
	string first_name;
	string last_name;

	cout << "Enter your first name: ";
	getline(cin, first_name);

	cout << "Enter your last name: ";
	getline(cin, last_name);

	cout << "Welcome " << first_name << " " << last_name << " to my application!";
	return 0; 
}