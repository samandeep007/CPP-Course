#include <iostream>
#include <string>

using namespace std;

static int loops() {
	//Loop --> Block of code that executes multiple times based on a condition
	int my_numbers[] = { 4,5,6,7,8,9,0 };
	int i = 0; //initializing the counter
	while (i < 7) { //checking the condition
		if (i == 3) {
			/*cout << "Special thing" << endl;*/
			/*break;*/
			i++;
			cout << "Skip this one" << endl;
			continue;
		} // or if(i == 3) break --> Shorthand


		cout << "Current number is " << my_numbers[i] << endl;
		i++; //updating the counter
	}
	cout << "Out of loop" << endl;

	i = 0;
	//Do while loop
	//Usually used in hardwares, and drivers
	do {
		cout << "Current number is " << my_numbers[i] << endl;
		i++;
	} while (i < 7);

	return 0;
}