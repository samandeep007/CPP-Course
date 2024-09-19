#include <iostream>
#include <string>

using namespace std;

int main() {
	// Float data types --> float, double, long double
	printf("Float size is %ld bits\n", sizeof(long double) * 8);
	float my_p_value = 20.2 + 20.2;
	printf("My P value is: %.1f in float\n", my_p_value);
	/*cout << my_float;*/
	return 0;
}