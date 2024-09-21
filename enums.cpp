#include <iostream>
#include <string>

//Preprocessor constants

//#define PI = 3.14;

enum microsoftOffice {
	BOLD = 5, //Auto-increment happens in enums --> All the subsequents will be +1 of the previous value | 5 is the default value here
	ITALICS, 
	UNDERLINE,
	CROSSED
};


using namespace std;

int main() {
	//Enums --> set of constants : Maybe
	int myAttributes = UNDERLINE; //Will print 7
	cout << myAttributes << endl;

	return 0;
}