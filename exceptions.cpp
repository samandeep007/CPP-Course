#include <iostream>
#include <string>

using namespace std;

int main() {
	//Try-catch blocks
	float call_api = 2.0;
	try {
		cout << "Trying to use API value\n";
		cout << "Did some testing with API value\n";
		throw call_api; //Suppose there is some error
		cout << "NO CODE EXECUTE AFTER RETURN AND THROW" << endl;
	}
	catch (int x) {
		cout << "Integer exception handled" << endl;
	}
	catch (float y) {
		cout << "Float exception handled" << endl;
	}

	cout << "Keep on moving with rest of the code" << endl;
	return 0;
}