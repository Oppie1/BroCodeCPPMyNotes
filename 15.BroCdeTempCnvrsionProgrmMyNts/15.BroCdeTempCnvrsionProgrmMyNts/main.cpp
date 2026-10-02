#include<iostream>
using namespace std;


int main() {


	//Declare an uninitialized double variable named temp.
	//CODE:
	double temp;

	//Declare an uninitialized char variable named unit.
	//CODE:
	char unit;

	cout << "******Temperature Conversion****** " << endl;

	cout << "F = Fahrenheit\n";
	cout << "C = Celsius\n";

	cout << "What would you like to convert to?\n";

		//Input user selection in to char variable unit.
		//CODE:
		cin >> unit;

		//Use an if statement with the condition that if the unit is an uppercase F or a lower case f
		//to print enter the temperature in Celsius. Then in same codeblock input the temp which will be
		// stored in double temp variable. Then assign variable temp to the expression of (1.8 * temp) + 32.
		// Lastly output the temperature to screen with Fahrenheit in the sentence.
		//CODE:
		if (unit == 'F' || unit == 'f') {

			cout << "Enter the temperature in Celsius: \n";

			cin >> temp;

			temp = (1.8 * temp) + 32;

			cout << "Temperature is: " << temp << " F\n";
	}

		//Use an else if statement to do the same with converting Fahrenheit to Celsius.
		//Use an if statement with the condition that iff the unit is an uppercase C or a lower case c
		//to print enter the temperature in Celsius. Then in same codeblock input the temp which will be
		//stored in double temp variable. Then assign variable temp to the expression of:
		//temp = (temp -32)/1.8. Lastly output the temperature to screen with Fahrenheit in the sentence.
		//CODE:
		
		else if (unit == 'C' || unit == 'c') {

			cout << "Enter the temperature in Fahrenheit: \n";

			cin >> temp;

			temp = (temp - 32)/1.8;

			cout << "Temperature is: " << temp << " C\n";
		}

		//Use an else statement to ask user to only enter F or C. In case user accidently pressed random key.
		else {

			cout << "Please enter C or F\n";
		}

		cout << "******Program Ends******" << endl;
	
}