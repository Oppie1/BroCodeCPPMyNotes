#include<iostream>
using namespace std;



//Create a function prototype of the double type named square with a double named length as its parameter.
//CODE:
double square(double length);

//Declare another function prototype of the double type named cube with a double named length as its parameter.
//CODE:
double cube(double length);

//Create a string function prototype with two string data types named string1 and string2 as parameters.
//CODE:
string concatStrings(string string1, string string2);


int main() {

	//return = return a value back to the spot where you called the encompassing function

	//Declare a double named length initialized to a number (e.g. 5.0).
	//CODE:
	double length = 5.0;

	//Declare two double variables named area and volume. Initialize both to the function calls 
	//square and cube. Both should use length variable as their arguments.
	double area = square(length);
	double volume = cube(length);

	//Declare two string variables named firstName and lastName. Initialized to Adam and Tindall ("")
	//CODE:
	string firstName = "Adam";
	string lastName = "Tindall";

	//Declare a string variable named full name and initialize it to concatStrings function. Use firstName
	//and lastName variables as arguments.
	//CODE:
	string fullName = concatStrings(firstName, lastName);

	//Print the fullName to the screen with hello message.
	//CODE:
	cout << "Hello " << fullName << endl;

	//Print in a full sentence that the Area is: (area variable) then meausrement (cm^2)
	//CODE:
	cout << "Area: " << area << " cm^2\n";

	//Do the same for volume but with measurement cm^3
	//CODE:
	cout << "Volume: " << volume << " cm^3\n";

	return 0;

}


//Define the double variable square prototype.
//CODE:
double square(double length) {
//Within the codeblock return a length times length expression which will give us the area for function calls.
	
	//CODE:
	return length * length;
}

//Define the double variable cube prototype
//CODE:
double cube(double length) {

//Within this codeblock return length times length times length expression which will give us volume for func calls.
	//CODE:
	return length * length * length;

}

//Define the string concatStrings() string prototype.
//CODE:
string concatStrings(string string1, string string2) {
	
//Within the codeblock return a string1 plus string to WITH a space between them (+ " " +)
	//CODE:
	return string1 + " " + string2;

}
