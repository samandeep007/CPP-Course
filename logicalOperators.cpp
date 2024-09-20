#include <iostream>
#include <string>

using namespace std;

static int logicalOperators() {
	
	bool isSignedIn = true;
	bool isAdmin = true;
	bool isFbUser = false;
	bool isGoogleUser = true;

	if (isSignedIn) {
		if (isAdmin) {
			cout << "Welcome to the Admin Panel" << endl;
		}
		else {
			cout << "Welcome to the User Panel" << endl;
		}
	}
	else {
		cout << "Unauthorized access | 401" << endl;
	}

	//and

	if ((isFbUser || isGoogleUser) && isAdmin) {
		cout << "Welcome to the dashboard" << endl;
	}
	else {
		cout << "No admin access!" << endl;
	}

	//or

	if (isFbUser || isGoogleUser) {
		cout << "Welcome user" << endl;
	}

	return 0;
}