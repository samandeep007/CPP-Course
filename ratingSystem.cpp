#include <iostream>
#include <string>

using namespace std;

int main() {
	int rating;
	cout << "Rate this product out of 5: ";
	cin >> rating;

	string remark;

	if (rating != 5 && rating != 4 && rating != 3 && rating != 2 && rating != 1) {
		cout << "Please enter a number between 1 and 5";
	}

	else if (rating == 5) {
		remark = "Awesome";
	}

	else if (rating == 4) {
		remark = "Excellent";
	}
	
	else if (rating == 3) {
		remark = "Good";
	}

	else if (rating == 2) {
		remark = "Okayish";
	}

	else {
		remark = "poor";
	}

	if (remark != "") {
		cout << "Thanks for your feedback: " << remark;
	}


}