#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	string myText;

	static const char * fileName = "mythisfile.txt";
	ifstream ReadFile(fileName);
	
	while (getline(ReadFile, myText)) {
		cout << myText;
	}

	ReadFile.close();

	return 0;
}