#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

static int search() {
	//Searching
	//Binary Search --> Divide and conquer strategy --> Behind the scenes
	int myNumbers[6] = { 2,7,8,3,5,9 };
	if (binary_search(myNumbers, myNumbers + 6, 15)) {
		cout << "15 exists in vector";
	}
	else {
		cout << "15 does not exist";
	}

	return 0;
}