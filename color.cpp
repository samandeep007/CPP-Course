#include <iostream> //Header file
using namespace std; //I can use std:: either --> It means everything is coming from the std file by default.

int main() {
	/*std::cout << "Samandeep Singh Sandhu\n";
	std::cout << "Welcome to this class" << std::endl;
	std::cout << "Have a nice day!";
	return 0;*/
	//cout << "This will not be executed";

	int number; //Declaration --> dataType identifer --> Identifiers are case-sensitive
	printf("Enter a random number of your choice: ");
	cin >> number; //Initialization
	printf("Your ID is %d\n", number + 3); //%d is placeholder for integers

	string favoriteColor; //Variable --> container to store the favoriteColor
	printf("Enter your favorite color: ");
	cin >> favoriteColor;
	cout << "My favorite color is " + favoriteColor + " as well";
	return 0;
}