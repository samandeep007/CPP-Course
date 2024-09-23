#include <iostream>
#include <string>
#include <fstream>

constexpr int maxBuffer = 1024;

//Write a file using ofstream
// Read a file using ifstream

//File handling in C++
using namespace std;
static int writeFile() {
	const char* fileName = "mythisfile.txt";
	const char* information = "lorem ipsum dolor sit amet";

	ofstream MyFile(fileName);
	for (int i = 0; i < 50; i++) {
		MyFile << information << endl;
	}

	//Read about FILE

	MyFile.close();

	return 0;
}