#include <iostream>

using namespace std;

int main() {
	unsigned int x = 6;
	unsigned int y = 9;
	unsigned int z = 6 >> 1;
	//Bitwise Operators in C++ : AND, OR, XOR, NOT --> Single operand, left shift, right shift
	/*
	cout << x & y --> This would be 110 & 1001 --> 0000 => 0
	cout << x | y --> This would be 110 | 1001 --> 1111 => 15
	cout << x ^ y --> This would be 110 ^ 1001 --> 1111 => 15
	cout << ~x --> This would be ~110 --> 001 => 1
	cout << x >> 1 --> 110 >> 1 --> 011 => 3
	cout << x << 1 --> 110 << 1 --> 1100 => 12
	*/
	cout << "The value of z is: " << z << endl;
	return 0;
}