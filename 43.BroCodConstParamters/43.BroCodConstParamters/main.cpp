#include <iostream>
using namespace std;


//const parameter = parameter that is effectively read-only
//code is more secure & conveys intent
//useful for reference and pointers.

//Declare a void function prototype named printInfo() with a const string parameter that contains the var
//name memory address, then a const int that contains age memory address.
//CODE:
void printInfo(const string &name, const int &age, int &poop);

int main() {


	//Declare a string variable named "Bro"
	//CODE:
	string name = "Bro";

	//Declare an int var named age initialized to 21.
	//CODE:
	int age = 21;

	int poop = 2;

	printInfo(name, age, poop);
}

//Define the printInfo function. Demonstrate trying to use a local variable to overwrite the const ones.
//Then comment name and age local variables out and have the function just show name and age to screen.
//CODE:
void printInfo(const string &name, const int &age, int &poop) {

	//string name = " ";
	//int age = 0;
	poop = 3;

	cout << name << '\n';
	cout<<age<<'\n';
	cout << poop << endl;

}
