#include <iostream>
#include<iomanip>
using namespace std;



//Declare a void function prototype named show balance with a double var named balance as parameter.
//CODE:
void showBalance(double balance);

//Declare a double function named deposit with no parameters.
//CODE:
double deposit();

//Declare a double function named withdraw with a double variable named balance as parameter.
//CODE:
double withdraw(double balance);


int main() {

	//Declare a double variable named balance initialized to 110.11. This will hold the
	// account balance and is subject to change during run of program.
	//CODE:
	double balance = 100.11;
	
	//Declare an integer variable named choice initialized to 0 that will hold user selection.
	//CODE:
	int choice = 0;


	//Create a do/while loop to hold the meat of the program including prompt to user, user input
	//and user choice. You will need to add two other function to clear and flush the input buffer
	//so that if a user enters the wrong data e.g. keyboard mash the program does not break/endlessly 
	// loop since input it not within program and wont suffice while loop as well.-> cin.clear(); AND fflush(stdin).
	//CODE:
	do {

		//This is just outputing to user genral information about the program and prompt requesting info.
		//CODE:
		cout << "\n*******************Bank Program*************************\n\n" << endl;

		cout << "Enter your choice\n";

		cout << "***********************************************************\n" << endl;

		cout << "1. Show Balance\n";
		cout << "2. Deposit Money\n";
		cout << "3. Withdraw Money\n";
		cout << "4. Exit\n";

		//Input user choice into the program.
		//CODE:
		cin >> choice;

		//Heres where we put the clear and flush buffer info from funcitons mentioned previously.
		//CODE:
		cin.clear();
		fflush(stdin);
	

		//Create a switch statement to work on the users choice 1-4 (cases)
		//CODE:
		switch (choice) {

		//In first case use the show balance function with appropritate parameter to display user balance
		//to the screen. Followed by a break to prevent fall through.
		//CODE:
		case 1:
			showBalance(balance);
			break;
		
		//In second assign the balance equal to the balance plus the user deposit function to account for
		//the money the user puts into their account. The function call deposit will be replace by return amount
		//from function definition. Then use show balance function again to show new balance.
		//Again add break to prevent fall through.
		//CODE:
		case 2: balance += deposit();
			showBalance(balance);
			break;
		
		//For case 3 write code to account for when user withdraws money. Use the balance variable and assign it
		//to the expression of balance minus the withdraw function. We will be returning amount to the function.
		//Make sure to show the balance at the end as well as a break.
		//CODE:
		case 3: balance -= withdraw(balance);
			showBalance(balance);
			break;

		//The fourth case will just account for with the user exits the program by pressing for which will be 
		//addressed in the while portion of do/while loop to stop loop as well. Output a thank you statement here.
		//CODE:
		case 4: cout << "Thanks for visiting!\n";
			break;

		//Include default ouput statement that tells the user they input an invalid choice. Anything other than 1-4
		//CODE:
		default:

			cout << "Invalid choice\n";

		}

	} 
	//Use a while condition for when the choice does not equal 4 so the do loop and switch statement within it will
	//keep using until the user presses 4. The while control is skipped and the do keeps running. When user presses 
	//4 the while condition is satisfied and the loop stops to return to program and next step. Which here is just 
	//the program condluding.
	//CODE:
	while (choice != 4);

	return 0;
}

//Define the showBalance function. Oupit put a statement that say Your balance is... $... Use the
//setprecision() function with a parameter of two for two decimal points. The output fixed keyword 
//so program knows we are talking about floating point variables. Order matters! Than lastly output
//the balance and a new line.
//CODE:
void showBalance(double balance) {

	cout << "Your balance is: $ " << setprecision(2) << fixed << balance << endl;
}

//Define the deposit function. Declare a double variable named amount and initialize it to 0. 
//Prompt user to enter the amount of their deposit. The input the amount variable which will be
//stored in said variable. Create an if statment to check if the amount is greater than 0 and return
//the amount if it is. Which is returned to the function call from case 2: (deposit())
//Then use an else statement to notify the user if they did not enter a valid
//amount. Say if they entered a negative number.
//CODE:
double deposit() {

	double amount = 0;

	cout << "Enter amount to be deposited: ";
	cin >> amount;

	if (amount > 0) {

		return amount;
	}
	else {

		cout << "That's not a valid amount" << '\n' << endl;
	}

}

//Define the withdraw function. Declare an uninitialized double variable named amount.  Prompt user for amount
//they wish to withdraw and the input the amount using amount variable. Then Create an if statement to check
//if the amount is greater than the actual balence of the account and if so to display insufficient funds to screen.
//return 0; which means no actual value just output. Use an else if statment to check if the amount the user
//entered is less than 0 (they cannot enter a negative amount to withdraw. Then output that its not a valid amount
// to the screen and return 0. Lastly use an else statement to cover that their withdraw went through correctly and
//then return amount to the function call which is in case 3:
//CODE:
double withdraw(double balance) {

	double amount;

	cout << "Enter amount to be withdrawn: " << endl;
	cin >> amount;

	
	if (amount > balance) {

		cout << "Insufficient funds\n";

		return 0;
	}

	else if (amount < 0) {

		cout << "That's not a valid amount\n" << endl;

		return 0;
	}

	else {

		cout << "Your withdraw went through correctly" << endl;

		return amount;
	}
}