#include<iostream>
using namespace std;




int main() {

	//do while loop = do some block of code first,
	//THEN repeat again if condition is true.

	//Declare an uninitialized integer variable named number;
	//CODE:
	int number;

	//Use the do while condition to ask user to enter a positive number. Input that number into number
	//storage variable. What happens next is when the user enters a negative number it passes the while 
	//condition where the number is less than 0 and so goes back to the top to start the do condition and 
	//related codeblock again. If it is a positive number than the while condition fails and so goes to
	//the next part of code with the number variable still set to positive.
	//CODE:

	//Start do while condition/
	do {

		cout << "Enter a positive number: ";

	//Input user entry into number variable.
		//CODEL
		cin >> number;

	//Create while condtion where it tests whether number is less than 0.
	//This just says while the number is less than 0 keep running this loop.
	//CODE:
	} while (number < 0);

	//Ouput number to the screen.
	//CODE:
	cout << "The number: " << number;



	cout << "\n\n-------If not using a do while loop-------\n\n" << endl;

	//Declare uninitialized int variable named secondNumber to store the user input.
	//CODE:
	int secondNumber;

	//Here we start out by asking the user to enter a positive number and input the user entry into
	//the secondNumber variable than the code will have to have to have a while loop after
	//to test the number and determine whether to keep running the while loop.
	cout << "Enter a positive number: ";

	//Input user entry into second number variable.
	//CODE:
	cin >> secondNumber;

	//Use while loop testing whether the users entry is less than 0. Then within the while code block
	//keep asking the user to enter a positive number and input the entry into the second number var.
	//CODE:
	while (secondNumber < 0) {
		cout << "Enter a positive number";
		
		cin >> secondNumber;
	}

	//Output the second number to the screen
	//CODE:
	cout << "The number is: " << secondNumber;

	return 0;
}

//As you can see the positive of the do while loop in this instance is that you only have to ask the user to
//enter a positive number one time. So you're using less code.