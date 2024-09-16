#include <iostream> //it is a library
#include <string>
#include <cstdint> // c standard int

using namespace std;

int integers() {
	//1 byte = 8 bits --> short int -->  int --> long int --> long long int
	printf("Size of this data type is %ld bits\n", sizeof(int16_t) * 8);
	printf("Size of this data type is %ld bits\n", sizeof(int32_t) * 8);
	printf("Size of this data type is %lld bits\n", sizeof(int64_t) * 8);
	//printf("Size of this data type is %lld bits\n", sizeof(int128_t) * 8);

	printf("The size of this data type is %ld bits\n", sizeof(char) * 8);
	printf("The size of this data type is %ld bits\n", sizeof(string) * 8);
	printf("The size of this data type is %ld bits\n", sizeof(bool) * 8);

	//int fun = 0x16; //It converts hexadecimal to decimal
	int fun = 0b00010110;
	printf("Fun value is %d\n", fun);
	return 0;
}