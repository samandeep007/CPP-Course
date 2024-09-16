#include <iostream>
#include <string>
using namespace std;

int colorTwo() {
	//int number = 0; --> Declaration and initialization on the same line
	string my_color;
	cout << "Enter your favourite color: ";
	getline(cin, my_color); //Analogous to Scanner.nextLine() in java while cin is analogous to Scanner.next();
	cout << "Great! My favourite color is " << my_color << " as well" << endl;
	return 0;
}

