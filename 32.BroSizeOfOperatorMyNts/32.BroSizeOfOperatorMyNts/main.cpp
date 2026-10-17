#include<iostream>
using namespace std;



int main() {

	//sizeof() = determines the size in bytes of a:
	//variable, data type, class, objects, etc.


	string name = "Bro code";
	double gpa = 2.5;
	char grade = 'F';
	bool student = true;
	char grades[] = { 'A', 'B', 'C', 'D', 'F' };
	char grades2[] = { 'A', 'B', 'C','D','F' };
	string students[] = { "SpongeBob","Patrick", "Squidward"};
	string students2[] = { "SongeBob","Patrick", "Squidward", "Sandy"};

	//Using the sizeof() function we can get the size in bytes of gpa variable of double data type.
	//CODE:
	cout << sizeof(gpa) << " bytes\n";

	//If we just take the sizeof() double we get 8 bytes. So all double variables are 8 bytes.
	//CODE:
	cout << sizeof(double) << " bytes\n";

	//Doing the same thing for name we get 40 bytes. The string just holds an address where
	//the text is located. The address where the string is located is what's 40 bytes. Even if
	//you were to change the size of the string it would still be 40 bytes. Reference data type.
	//CODE:
	cout << sizeof(name) << " bytes\n";

	//For grade we will find the sizeof() a character. Which is 1 byte.
	//CODE:
	cout << sizeof(grade) << " bytes\n";
	
	//Just like the double data type if were were to use sizeof() on char it would be 1 byte.
	//CODE:
	cout << sizeof(char) << " bytes\n";

	//A boolean data type also takes one byte of memory. So student = true/false is one byte.
	//CODE:
	cout << sizeof(student) << " bytes\n";
	
	//Again, you can find the size of a bool data type by using sizeof() which is 1 byte.
	//CODE:
	cout << sizeof(bool) << " bytes\n";
	
	//When dealing with arrays we use the sizeof() and grades as the argument. Since this
	//array has five characters and chars are 1 byte each this array would have 5 bytes.
	//CODE:
	cout << sizeof(grades) << " bytes\n";

	//We can also use the size of function and appropriate expression/syntax to see how many
	//elements are in an array.

	//Here we take the sizeof() with argument grades and divide it by the size of one element
	//of the data type. So here the sizeof() with argument char. Print to screen with "elements".
	// We would have 5 elements in the grades array.
	//CODE:
	cout << sizeof(grades) / sizeof(char) << " elements\n";
	
	//For the sizeof() grades2 array we do the same operation as above just using grades2 argument.
	// grades2 also will have 5 elements.
	//CODE:
	cout << sizeof(grades2) / sizeof(char) << " elements\n";

	//For the sizeof() students array we use sizeof() with students array as the argument. Then
	//we divide it by the sizeof() one element of the array so one element we would use "string"
	//data type. We will get 3 elements.
	//CODE:
	cout << sizeof(students) / sizeof(string) << " elements\n";

	//For size of students2 we again would use sizeof() with students2 as the argument and 
	//divide it by the sizeof() one string element. Will get 4 elements.
	//CODE:
	cout << sizeof(students2) / sizeof(string) << " elements\n";
	
}