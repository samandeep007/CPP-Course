#include <iostream>
#include <string>

using namespace std;

int main() {
	//Loop --> Block of code that executes multiple times based on a condition
	int my_numbers[] = { 4,5,6,7,8,9,0 };
	int i = 0; //initializing the counter
	while (i < 7) { //checking the condition
		if (i == 3) {
			/*cout << "Special thing" << endl;*/
			break;
		}
		cout << "Current number is " << my_numbers[i] << endl;
		i++; //updating the counter
	}
	cout << "Out of loop" << endl;

	return 0;
}