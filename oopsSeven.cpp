#include <iostream>
#include <string>
#include <memory>

using namespace std;

class User {
public: 
	User() { //Constructor
		cout << "User created" << endl;
	};

	~User() { //Destructor
		cout << "User deleted" << endl;
	}

	void testFunc() {
		cout << "I am a test function" << endl;
	}

};

static int smartPointers() {

	//Smart pointers --> Memory leaks are very common with using pointers --> C++ is very powerful
	//New - Allocates a memory
	//Delete - DeAllocates a memory
	//with NEW, DELETE is required

	//Smart pointer solves the issue of forgetting delete
	//Wrapper around the real "raw" pointer

	//https://learn.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170

	//<memory> header file must be included for using smart pointers
	
	/*
	Unique pointer --> Memory gets free as scope ends --> You cannot copy them
	Scope --> Everything between curly braces {}

	*/

	{
		//unique_ptr<User> sam(new User()); Non fav. way of developers --> you need to use unique_ptr class, it takes another class as parameter

		unique_ptr<User> sam = make_unique<User>(); //Best way
		sam->testFunc();

		//unique_ptr<User> samm = sam; --> This is not allowed --> Copy constructor is overloaded
	
	}

	{
		shared_ptr<User> tim = make_shared<User>();
		//shared_ptr<User> tim(new User()); --> this is not good --> you are using a heap memory --> stack holds a reference --> wasting the memory --> count of refs is in heap --> when number of refs become 0, memory is freed
		tim->testFunc();

		shared_ptr<User> timm = tim; //We are allowed to do so
		weak_ptr<User> wtim = tim; //No body keeps a track of it --> You cannot make the first instance using something similar to make_unique
	}

	//Smart pointers make the memory management easy

	//Weak pointers 
	
	
	cout << "Outside code\n";
	return 0;
}