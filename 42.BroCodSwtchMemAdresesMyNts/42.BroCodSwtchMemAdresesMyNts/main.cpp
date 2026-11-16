#include <iostream>
using namespace std;


//Memory address = a location in memory where data is stored. A memory address
//can be accessed with & (address-of operator)

int main() {

	string name = "Bro"; //Chars take up 1 byte of data
	int age = 21; //int takes up 4 bytes
	bool students = true; //bool takes up 1 byte of memory
	//double or long take up 8 bytes of memory.

	//Output each of the variables memory addresses using "&"
	//CODE:
	cout << &name << '\n';
	cout << &age << '\n';
	cout << &students << '\n';

}