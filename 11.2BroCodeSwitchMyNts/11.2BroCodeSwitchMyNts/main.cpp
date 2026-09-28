#include<iostream>
using namespace std;



int main()
{

	//Declare an uninitilaized char variable named grade to hold user entry.
	//CODE:
	char grade;

	cout << "What is your grade?" << endl;

	//Input grade and store entry in grade variable.
	//CODE:
	cin >> grade;

	//Use switch statement with grade as parameter along with cases representing letter grades A-F in
	//correct syntax (' ') along with ourput stating what grade user received. Then use break statement
	//to prevent fallthrough
	switch (grade) {
	case 'A':
		cout << "You did great!" << endl;
		break;
	case 'B':
		cout << "You did good." << endl;
		break;
	case 'C':
		cout << "You did ok." << endl;
		break;
	case 'D':
		cout << "You did not do go." << endl;
		break;
	case 'F':
		cout << "You failed" << endl;
		break;
		//Use default statement in the case the user selected wrong key stating for them to enter
		//A letter grade.
		//CODE:
	default:
		cout << "Please enter a letter grade" << endl;

	}
}