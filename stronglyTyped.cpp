#include <iostream>
#include <string>

using namespace std;

static string apiCall() {
	return "Got some data from website\n";
}

static int anotherApiCall() {
	return 5;
}

static int autoKeyword() {
	//What does strongly-typed mean? C++ is one btw
	//Data type should be defined beforehand

	auto response = apiCall(); //sometimes you may not know what kind of datatype you will be getting in response --> auto is a qualifier used in these cases --> gives exact data type
	cout << "API call value: " << response << endl;

	auto responseTwo = anotherApiCall();
	cout << "Another API call value : " << responseTwo << endl;

	if (typeid(response) == typeid(string)) {
		puts("Types of both ID matches\n");
	}

	if (typeid(responseTwo) == typeid(int)) {
		puts("Types of both IDs matches");
	}

	if (typeid(response) == typeid(responseTwo)) {
		puts("Good"); //This won't get printed bruh!
	}
	return 0;
}