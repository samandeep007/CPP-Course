#include <iostream>
#include <string>

using namespace std;

class Rectangle {
	double _length;
	double _breadth;

public:
	//Rectangle(const double& length, const double& breadth) : _length(length), _breadth(breadth) {};
	Rectangle(double l = 2.0, double b = 2.0) {
		_length = l;
		_breadth = b;
	}

	double getArea() {
		return _length * _breadth;
	}

	double getParameter() {
		return 2 * (_length + _breadth);
	}

	int compare(Rectangle rectangle) {
		return this->getArea() > rectangle.getArea(); //this->
	}
};

int main() {
	Rectangle h1(3.0, 3.0);
	Rectangle h2(4.0, 4.0);

	cout << h1.compare(h2) << endl;

	if (h1.compare(h2)) {
		cout << "H2 is smaller" << endl;
	}
	else {
		cout << "H2 is bigger" << endl;
	}
	return 0;
}