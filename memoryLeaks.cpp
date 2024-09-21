#include <iostream>
#include <string>

using namespace std;

static int memoryLeaks() {
	int * myp;

	try {
		myp = new int [10]; //New is used to forcefully allocate memory --> You should also use delete to deallocate memory --> (nothrow) means it will not throw error
		cout << "Memory space allocated" << endl;
	}
	catch (...) {
		cout << "Failed in allocating memory" << endl;
	}

	delete [] myp; //deallocating all the contigious memory locations




	return 0;
}