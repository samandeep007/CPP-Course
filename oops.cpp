#include <iostream>
#include <string>


//https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three#:~:text=In%20that%20case%2C%20remember%20the,compiler%20I%20am%20aware%20of.)

using namespace std;

//Class is a blueprint on which the objects are based
class User { // --> If a class only has variables or fields, it's a better practice to better define it as a struct

	int _secret = 22;  //data members are private by default --> kitchen of restaurant --> we use getters and setters for it
	//private members have a _ prefix, while the system variables have __

public: 
	string name = "default"; //We can overwrite this value
	
	//Method
	void classMessage(); 

	//int getSecret() const { //This is a getter --> const will make it accessible by const objects
	//	return _secret;
	//}

	int getSecret() const;

	void setSecret(const int &newSecret) { //This is a setter --> You can add validation if you want
		_secret = newSecret;
	}
};

void User::classMessage() { //We need to tell this function that it belongs to a class explicitly
	cout << "Class is great, " << name << endl;
}

int User::getSecret() const { //const needs to go here as well
	return _secret;
}

static int oopsOne() {
	User saman; //A constructor is called automatically --> every class has a implicit constructor --> allocates memory
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

	//constant objects
	const User rock;
	cout << rock.getSecret() << endl; //Not possible

	User peter = saman; //Will point to the same memory location as saman
	peter.classMessage(); //Will display the same thing as saman

	return 0;
}