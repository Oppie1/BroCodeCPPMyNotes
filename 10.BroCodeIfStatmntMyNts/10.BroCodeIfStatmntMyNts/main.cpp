#include<iostream>
using namespace std;

//If statements = do something if condition is true. if not, then dont do it.

int main() {

	//Declare an uninitialized int var age.
	//CODE:
	int age;

	cout << "Enter your age: ";

	//Input age/store user input into the var int age you just created.
	//CODE:
	cin >> age;

	//Use if statement to check if age entered is greater than 100 and in codeblock output
	//they are to old to do something (like enter a website).
	//CODE:
	if (age > 100) {
		cout << "You are too old to enter this site" << endl;
	}

	//Use an else if statement to check if age entered is greater than 18. In codeblock output
	//that they can enter the website.
	//CODE:
	else if (age > 18) {
		cout << "Welcome to the site!" << endl;
	}

	//Use another else if statement to see if the age entered is exactly 18 and 
	else if (age == 18) {//Don't use just one = sign as that would set 18 to age. Want to use == which means is 18
		cout << "Welcome to the site your exactly 18!" << endl;
	}

	//Use else if statmentment to see if age entered is greater or equal to 18 and output
	//Welcome to the site and the operator that corresponds to declared above.
	//CODE:
	else if (age >= 18) {
		cout << "Welcome to the site. This combo is what we should use >=" << endl;
	}

	//Use else if to check if age entered is less than 0 with an output statement that person has
	//not been born yet.
	//CODE:
	else if (age < 0) {//In else if since this is true we actually skip the next if statement
		cout << "You havenet been born yet " << endl;
	}

	//Finally use an else statment with an output they are not allowed to enter the website. (less than 18)
	//CODE:
	else {
		cout << "You are not allowed in the site " << endl;
	}


	return 0;
}