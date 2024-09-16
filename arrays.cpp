#include <iostream>
#include <string>

using namespace std;

int main() {
	int integer_array[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		cout << integer_array[i] << endl;
	}

	cout << integer_array << endl; //Will printout the memory location of array[0]

	int another_array[4];
	another_array[0] = 12;
	another_array[1] = 24;
	another_array[2] = 36;
	another_array[3] = 48;

	cout << another_array[0] << endl; //By default the array spaces are filled with 0

	*another_array = 29; //Will update the value of array[0]
	cout << another_array[0] << endl;

	cout << another_array[1] << endl;

	int *ap = another_array;
	ap = ap + 1;
	*ap = 60;
	cout << another_array[1] << endl;

	return 0;
}