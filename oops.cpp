#include <iostream>
#include <string>

using namespace std;

//Class is a blueprint on which the objects are based
class User {
	int secret = 22;  //data members are private by default --> kitchen of restaurant --> we use getters and setters for it

public: 
	string name = "default"; //We can overwrite this value
	
	//Method
	void classMessage() {
		cout << "Class is great, " << name << endl;
	}

	int getSecret() { //This is a getter
		return secret;
	}

	void setSecret(const int &newSecret) { //This is a setter --> You can add validation if you want
		secret = newSecret;
	}
};

int main() {
	User saman;
	saman.name = "Samandeep Singh";
	saman.classMessage();

	User taran;
	taran.name = "Tarandeep Kaur";
	taran.classMessage();
	
	
	cout << taran.getSecret() << endl;
	//int newVal = 7; 
	//taran.setSecret(newVal); --> You need to pass reference, not a const value --> or you can accept the const in the function
	taran.setSecret(333);
	cout << taran.getSecret() << endl;



	return 0;
}