#include <iostream>
#include <string>
#include <vector> //similar to ArrayList

using namespace std;\

struct Corners {
	float a, b, c, d;

};

ostream& operator<<(ostream& stream, const Corners& corner) { //Operator overloading
	stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
	return stream;
 }


//vector --> array with dynamic size --> costly --> Pros >> Cons 

int main() {
	//standard template library --> Template is a empty plate on which you can put anything
	vector<int> inty;//not need to have a class in template unlike Java
	
	inty.push_back(3);
	inty.push_back(4);
	inty.push_back(5);
	inty.push_back(6);

	/*for (int val : inty) {
		cout << val << endl;
	}*/

	for (auto i = inty.begin(); i != inty.end(); i++) { //i is a pointer here --> check on chatGPT
		cout << *i << endl;
	}

	vector<Corners> corners;
	corners.push_back({ 1,2,3,4 });
	corners.push_back({ 5,6,7,8 });

	for (int i = 0; i < corners.size(); i++) {
		cout << corners[i] << endl;  //<< needs to be overwritten because corners is a struct with multiple values
	}

	return 0;
}