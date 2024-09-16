#include <iostream>
#include <string>

using namespace std;

int main() {
	//1 byte = 8 bits --> short int -->  int --> long int --> long long int
	printf("Size of this data type is %ld bits\n", sizeof(short int) * 8);
	printf("Size of this data type is %ld bits\n", sizeof(int) * 8);
	printf("Size of this data type is %lld bits\n", sizeof(long int) * 8);
	printf("Size of this data type is %lld bits\n", sizeof(long long) * 8);
	return 0;
}