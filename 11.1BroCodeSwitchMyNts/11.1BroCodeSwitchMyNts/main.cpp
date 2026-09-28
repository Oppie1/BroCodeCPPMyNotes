#include<iostream>
using namespace std;

//Switch = alternative to using main "else if" statements 
//Compares value against matching cases

int main() {

	//Declare an uninitilized integer variable to hold the month.
	//CODE:
	int month;

	cout << "Enter the month (1-12): ";

	//Input user selection and store in the variable month.
	//CODE:
	cin >> month;

	//Use a switch statment with month as its parameter. Then write out cases 1-12 with each containing
	//an output statement to say which month it is with a break; keyword to prevent fall through to next case.
	switch (month) {
	case 1:
		cout << "It is January";
		break;
	case 2:
		cout << "It is February";
		break;
	case 3:
		cout << "It is March";
		break;
	case 4:
		cout << "It is April";
		break;
	case 5:
		cout << "It is May";
		break;
	case 6:
		cout << "It is June";
		break;
	case 7:
		cout << "It is July";
		break;
	case 8:
		cout << "It is August";
		break;
	case 9:
		cout << "It is September";
		break;
	case 10:
		cout << "It is October ";
		break;
	case 11:
		cout << "It is November ";
		break;
	case 12:
		cout << "It is December";
		break;

	//Use the defualt keyword at end of program with an output saying please select number
	//1-12 in case the user accedently hits a wrong key.
	//CODE:
	default:
		cout << "Please select number 1-12 " << endl;
	}
}