#include <iostream>
#include <string>

using namespace std;

template <typename T>
void func(T t) {
	cout << "One func " << t << endl;
}

template <typename T, typename... Args> //Very Important concept
void func(T t, Args... args) {
	cout << "Two func " << t << endl;
	func(args...);
} //This is kinda recursive thing.. The first argument is always treated as T while the rest of them go into args --> For the last argument we already have the overloaded method that accepts only one argument

int main() {
	//Variadic are methods/functions that can accept any number of values
	//Variadic operator: ...

	string my_name = "Samandeep Singh";
	func(1, 2, 3.4, 4.5, my_name); //let's use recursion for this
	return 0;
}