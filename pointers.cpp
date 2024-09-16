#include <iostream>
using namespace std;

static int pointer() {
	//const int life = 4; //const is a qualifier
	//life = 5; this is not allowed
	int life;
	life = 4;

	int card;
	card = 40;
	int my_card = card; // my_card = 40;

	//Pointers
	int *myp; //astrik is used only the very first time --> Pointer ooints to a memory
	myp = &card; //& means that it stores the address of my_card variable, not the actual value

	my_card = *myp; //pointer deref. --> store the VALUE of myp to my_card 

	cout << "The value of card is " << my_card << endl;
	cout << "The value of myp is " << myp;
	return 0;
}