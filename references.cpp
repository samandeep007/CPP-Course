#include <iostream>
#include <string>

using namespace std;

static int references() {
	
	int score = 200;
	int* myp = &score;
	
	printf("The value of score is %d\n", score);
	printf("The value of pointer is %p\n", myp);

	int &another_score = score; //reference can change the actual value
	another_score = 800;
	printf("The value of score is %d\n", score);
	printf("The value of pointer is %p\n", myp);
	return 0;
}