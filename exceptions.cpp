#include <iostream>
#include <string>

using namespace std;

static int tryCatch() {
	//Try-catch blocks
	char call_api = 's';
	//float call_api = 2.0;
	try {
		cout << "Trying to use API value\n";
		cout << "Did some testing with API value\n";
		throw call_api; //Suppose there is some error
		cout << "NO CODE EXECUTE AFTER RETURN AND THROW" << endl;
	}
	catch (int x) {
		cout << "Integer exception handled" << endl;
	}
	catch (float y) { //Based on the type of error you're getting, you can handle it
		cout << "Float exception handled" << endl;
	}
	catch (...) { //In case, you don't know the type of the error you're getting
		cout << "Something went wrong!" << endl;
	}

	cout << "Keep on moving with rest of the code" << endl;
	return 0;
}