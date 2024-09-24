#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

int main() {
	//List --> Sequence is not mandatory --> No guarantee of continuous memory locations
	//Used for doubly linked list

	list<int> numList;
	for (int i = 3; i <= 10; i++) {
		numList.push_back(i);
	}
	cout << numList.front() << endl;
	cout << numList.back() << endl;

	numList.pop_back();

	cout << numList.back() << endl;

	for (int num : numList) {
		cout << num << " ";
	}

	cout << endl;

	numList.reverse(); //Not a part of algorithms

	for (int num : numList) {
		cout << num << " ";
	}

	cout << endl;

	return 0;
}