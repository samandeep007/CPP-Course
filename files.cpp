#include <iostream>
#include <string>

using namespace std;

int main() {
	//File Handling in C++ --> doesn't work in visual studio
	static const char * originalFile = "original.txt";
	static const char * editedFile = "editedFile.txt";

	//rename(originalFile, editedFile);
	remove(editedFile);
	//FILE* fh = fopen(originalFile, "w"); //r -> read, w -> write, a -> append
	//fclose(fh);
	return 0;
}