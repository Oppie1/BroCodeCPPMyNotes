#include<iostream>
using namespace std;


int main() {

	//&& = check if two conditions are true
	//|| check if at least one of two conditions is true
	//! reverses the logical state of its operand
	

	//Declare two uninitialized int variables for temperature one an temperature two
	//CODE:
	int temp;
	int temp2;

	//Declare a boolean var sunny (true or false) and set it equal to true;
	//CODE:
	bool sunny = true;

	cout << "Enter the temperature: ";

	//Input temperature into temp var
	//CODE:
	cin >> temp;

	//Use if statement to see if the temp entered is above 0 and below 30 degrees and an output
	// that its a good temperature.
	//CODE:
	if (temp > 0 && temp < 30) {

		cout << "It's a good temperature out." << endl;
	}

	//Now make an else statement saying it is not a good temperature out.
	//CODE:
	else {

		cout << "The temperature is not good today." << endl;

	}

	cout << "Enter temperature 2:";
	
	//Input the second temperature into temp2 var
	//CODE:
	cin >> temp2;

	//Use if statement to check whether temp2 is less than or equal to 0 OR temp2 >= 20
	//Then display message the temperature is bad if either are true or temp is good if both are false.
	//CODE:
	if (temp2 <= 0 || temp2 <= 30) {

		cout << "The temp is terrible today" << endl;
	}

	else { cout << "The temperature is good today." << endl; }

	//Use an if statement with the sunny boolean variable as the condition along with output saying 
	//that it is a sunny day and if not (else) it is not a sunny day.'
	//CODE:
	if (sunny) {

		cout << "It's a sunny day!" << endl;
	}
	else {

		cout << "It's a cloudy day!" << endl;
	}

	//Use another if statement with the ! operator with the variable sunny with output that it is 
	//cloudy outside. Or if not (else) that it is sunny.
	//CODE:
	if (!sunny) {//This is saying that the condition is sunny if false. But its not false the variable is set to true.

		cout << "It's sunny";
	}
	else { cout << "Its cloudy" << endl; }
}