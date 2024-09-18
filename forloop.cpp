#include <iostream>
#include <string>

using namespace std;

static int forloop() {
	int my_nums[] = { 2,3,4,5,6 };
	
	for (int i = 0; i < 5; i++) { //Three parts: Initializer, Comparator, and Updator
		cout << i << endl;
		//cout << my_nums[i] << endl;
	}

	cout << "Get a break" << endl;
	
	//For each loop
	for (int num : my_nums) { // for singular in plural
		cout << num << endl;
	}

	return 0;
}
