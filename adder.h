
#ifndef adder_h //if-n-def
#define adder_h

int addMe(int numOne, int numTwo) {
	return numOne + numTwo;
}

float addMe(float numOne, float numTwo) { //Function overloading --> function with different signature but same name
	return numOne + numTwo;
}

#endif