#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


static int algorithms() {
	//Algorithms --> Searching or sorting --> We will be covering sorting
	
	int myNumbers[7] = { 3,2,5,6,4,7,9 }; //Look it as an iterator, not like an array

	cout << "Unsorted values: ";

	for (int num : myNumbers) {
		cout << num << " ";
	}
	cout << endl;
	
	sort(myNumbers, myNumbers + 7); //myNumber gives the memory address of the first array element --> Intro sort behind the scenes 

	cout << "Sorted values: ";
	//sort(myNumbers, 7);
		for (int num : myNumbers) {
			cout << num << " ";
		}
	

	return 0;
}