#include <iostream>
#include <string>

using namespace std;

int main() {
	int * myp;

	try {
		myp = new int[100]; //New is used to forcefully allocate memory --> You should also use delete to deallocate memory --> (nothrow) means it will not throw error
		cout << "Memory space allocated" << endl;
	}
	catch(...) {
		cout << "Failed in allocating memory" << endl;
	}

	delete [] myp; //deallocating all the contigious memory locations




	return 0;
}