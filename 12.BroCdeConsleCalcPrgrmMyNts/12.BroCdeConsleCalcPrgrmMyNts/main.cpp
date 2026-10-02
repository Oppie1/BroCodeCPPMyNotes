#include<iostream>
using namespace std;

int main() {

	//Declare 4 uninitialized variables. A char for the operator and 3 doubles for two numbers and the result.
	char op;
	double num1;
	double num2;
	double result;

	cout << "***********CALCULATOR***********\n";

	cout << "Enter either (+,-,*,/): ";

	//Input operator
	//CODE:
	cin >> op;

	cout << "Enter #1: ";
	
	//Input first number
	//CODE:
	cin >> num1;

	cout << "Enter #2: ";
	//Input second number
	//CODE:
	cin >> num2;

	//Use a switch statement with the operator variable which is evaluated by the switch/controlling expression
	// of the switch (contains user entry). op is a local variable whose value is used as the expression evaluated
	// by the switch statement.
	//CODE:
	switch (op) {

		//Make a case for addition and use the variables you created to show addition and assigning a variable
		//Then show the result out to the screen. Use break to prevent fall through.
		//CODE:
	case '+':
		result = num1 + num2;
		cout << result << endl;
		break;

		//Make a case for subtraction and use the variables you created to show subtraction and assigning result
		//variable to the screen. Dont forget break;.
		//CODE:
	case '-':
		result = num1 - num2;
		cout << "result:" << result << endl;
		break;

	case '*':
		//Make a case for multiplication and use the variables you created to show result to the screen.
		//CODE:
		result = num1 * num2;
		cout << "result:" << result << endl;
		break;
	
		//Make a case for division and use the variables you created to show the result to the scree.
		//CODE:
	case '/': result = num1 / num2;
		cout << "result:" << result << endl;
		break;

		//Use a default statement to catch if user presses any other button than those described in cases above.
		//CODE:
	default:
		cout << "Please enter a standard (+, -,*,/ operator \n";
	}
	
	

	cout << "***********************************";

}