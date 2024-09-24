#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int container() {
	//Containers --> array on steroids
	//Vectors
	vector<int> nums;
	vector<string> heros {"batman", "flash", "superman", "robin"};

	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(8);
	nums.push_back(10);

	for (int i = 0; i < 5; i++) {
		int input;
		cin >> input;
		nums.push_back(input);
	}

	for (int num : nums) {
		cout << num << " ";
	}

	cout << endl;

	cout << nums.size() << endl << nums.capacity() << endl << nums.max_size() <<  endl;

	cout << nums.empty() << endl; //Returns a boolean

	for (auto i = begin(nums); i != end(nums); i++) {
		cout << *i << " ";
	}

	cout << endl;



	return 0;
}