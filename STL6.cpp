#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> myIntegers = { 1,2,3,4,5,6,7,8,9,10 };
	for (int integer : myIntegers) {
		cout << integer << " ";
	}
	cout << endl;

	partition(myIntegers.begin(), myIntegers.end(), [](auto x) {return x%2==0; });
	for (int integer : myIntegers) {
		cout << integer << " ";
	}
	cout << endl;
	return 0;
}