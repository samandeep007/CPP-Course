#include <iostream>
#include <string>

using namespace std;

static int floats() {
	// Float data types --> float, double, long double
	printf("Float size is %ld bits\n", sizeof(long double) * 8);
	float my_p_value = 20.2 + 20.2;

	if (my_p_value = 40.400002) {
		puts("You got it right\n");
	}
	else {
		puts("Something");
	}

	printf("My P value is: %.40f in float\n", my_p_value);
	/*cout << my_float;*/
	return 0;
}