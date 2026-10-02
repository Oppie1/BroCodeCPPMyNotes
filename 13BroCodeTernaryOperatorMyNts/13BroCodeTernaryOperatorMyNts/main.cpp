#include<iostream>
using namespace std;



int main() {
	
	//ternary operator = ? : -> replacement for an if else statement
	//condition ? (if) expression 1 -- > do this : (else) -> do this.

	//Declare an integer variable and initialize it to a number 1-100;
	//CODE:
	int grade = 51;

	//Use the ternary operator to see if the grade is greater than or equal to 60 and output to screen
	//whether student passes or fails.
	//CODE:
	grade >= 60 ? cout << "You pass! " : cout<< "You fail!" << endl;

	//Declare a integer variable and set it equal to a number.
	//CODE:
	int number = 8;

	//Use the ternary operator to see if the number is even or odd. Hint use modulo operator to do this.
	// The modulus operator (%) returns the remainder. In C++, any non-zero value is true and zero is false.
	// For even numbers: remainder is 0 (false) -> prints "EVEN"
	// For odd numbers: remainder is 1 (or any non-zero  value) is true. -> prints "ODD"
	//CODE:
	number % 2 ? cout << "ODD" : cout << "EVEN" << endl;


	//Declare a boolean variable and initialize it to false. Like if the user is hungry for example.
	//CODE:
	bool hungry = false;

	//Use the ternary operator to see whether user is this or that (like hungry, available, has class, ect.)
	//CODE:
	hungry ? cout << "User is hungry." : cout << "User is not hungry" << endl;

	//Show another use the ternary operator using one cout statement. Hint -> () use parentheses
	//CODE:
	cout << (hungry ? "You're hungry" : "You're full");


}