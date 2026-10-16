#include <iostream>
#include <ctime>
using namespace std;


//Declare a function named getUserChoice() with no parameters.
//CODE:
char getUserChoice();

//Declare a function named getComputer choice with no parameters.
//CODE:
char getComputerChoice();

//Declare a function called show choice with a char variable named choice parameter.
//CODE:
void showChoice(char choice);

//Declare a function named choose winner that has two char parameters named player and computer
//CODE:
void chooseWinner(char player, char computer);


int main() {


	//Declare two char variable named playerChoice and computer
	//CODE:
	char playerChoice;
	char computerChoice;

	//Assign the variable player choice to the function getUserChoice.
	//CODE:
	playerChoice = getUserChoice();
	
	//Output/print "Your choice" to the screen.
	//CODE:
	cout << "Your choice: ";

	//Call the function show choice with the parameter playerChoice.
	//CODE:
	showChoice(playerChoice);

	//Assign the computer variable to the function getComputerChoice.
	//CODE:
	computerChoice = getComputerChoice();
	
	//Output/print "Computer's choice" to the screen.
	//CODE:
	cout << "Computer's choice: ";
	
	//Call the function show choice with the parameter of computer.
	//CODE:
	showChoice(computerChoice);

	//Call the choose winner function with the paramter playerChoice and computerChoice
	chooseWinner(playerChoice, computerChoice);
}


//Define the char get user choice function.
//CODE:
char getUserChoice() 
{
	//Within the codeblock create variable char playerChoice which will shadow the same said variable in main.
	//CODE:
	char playerChoice;

	//Propmpt stating what the program is.
	//CODE:
	cout << "Rock-Paper-Scissors Game!\n";

	//Create a do/while loop around the prompt asking user to choose one of following. Then input
	//that choice into the program which will be stored in playerChoice var. For the while condition
	//Have it only execute when said input IS r, p or s. We do this by setting the while loop to an 
	//!= (is not) this which will cause the while condition to execute when the user inputs an r, p or s.
	//If user inputs anything other than that the while condition is NOT met and therefore skipped and
	//the program returns to the top of the do/while loop and prompts the user to Choose one of following again.
	//After the do/while loop executes it returns to the next step in the getUserChoice() which is to return
	// the player choice / var to the caller through "return"
	//CODE:
	do {
		cout << "Choose one of the following\n";
		cout << "******************************************\n\n";
		cout << "'r' for rock\n";
		cout << "'p' for paper\n";
		cout << "'s' for scissors\n";

		cin>>playerChoice;
	} while (playerChoice != 'r' && playerChoice != 'p' && playerChoice != 's');
	
	return playerChoice;
}

//Define the getComputerChoice function.
//CODE:
char getComputerChoice() {

//Within the codeblock we need to make the computer's choice random. First we seed the random number
//generator (srand()) with time (time()) as argument which will have zero as its argument.
//Then we will declare an integer variable named num and assign it to the rand() function modulus 3 + 1.
//We use 3 since there are three choices to chose from so we need a remainder of no more than 3. And of
//course we add 1 to huminize the program since computers start from 9.
//CODE:
	srand(time(0));
	int num = rand() % 3 + 1;

//Still within the getComputerChoice function we make a switch statement that evaluates the num variable that
//has the random data/number (1-3) selected. We make cases 1-3 and each will return either an r, p or s to the 
//caller in main (getComputerChoice() is function call.
//CODE:
	switch (num) {

	case 1: return 'r';
	case 2: return 'p';
	case 3: return 's';

	}

}

//Define the show choice function.
//CODE:

//Within the codeblock include a swich statement that will evalueate the user choice. It matches with 
//whatever the player chose in playersChoice() function. The char choice parameter is just a placeholder for
//when the showChoice() function is called in main. The argument "playersChoice" is what fills the choice
//variable with an actual value/character -> showChoice(playersChoice). And the playersChoice is just a character.
//This just displays what the player picked to the screen prior to computers choice.
//CODE:
void showChoice(char choice) {

	switch (choice) {

	case 'r': cout << "Rock\n";
		break;

	case 'p': cout << "Paper\n";
		break;
	case 's': cout << "Scissors\n";
		break;

	}
}

//Define the choose winner function.
//CODE:
void chooseWinner(char playerChoice, char computer) {

	//Within the codeblock use a switch statement that evaluates the playersChoice. There will be 3 cases
	//r, p, s which will each include an if, if else, and else statement to control the flow of whether human
	//tied, lost or won against the computer.
	//CODE:
	switch (playerChoice) {

	//In case 'r': "if" the computer selected r the variable is then set equal to r (set equal not assignment == vs =)
	//We print it's a tie to screen. else if the computer selected p (set equal to again) then "we lost" output to screen
	//Then we use an else to cover the final and we can just print out you won to screen. The else captures that the
	//computer threw an s logically.
	case 'r': if (computer == 'r') {
		cout << "It's a tie!\n";
	}
			else if (computer == 'p') {

		cout << "You lose!\n" << endl;
	}

			else {

		cout << "You win! " << endl;
	}

			break;
	//In the case of p if the computer selected p the variable is then set equal to p (set equal not assignment == vs =)
	//We print it's a tie to screen. else if the computer selected p (set equal to again) then "we lost" output to screen
	//Then we use an else to cover the final and we can just print out you won to screen. The else captures that the
	//computer threw a r logically.
	case 'p': if (computer == 'p') {

		cout << "You tied!" << endl;
	}
			else if (computer == 's') {

		cout << "You lose!" << endl;
	}
	
			else {

		cout << "You win!" << endl;
	}

			break;
	//In the case of s if the computer selcected the s variable then set equal to s (set equal not assignment == vs =)
	//We print it's a tie to screen. else if the computer selected r (set equal to again) then "we lost" outputs to screen
	// Then we use an else to cover the final and we can just print out you won to screen. The else captures that the
	//comuter threw a p logically.
	case 's': if (computer == 's') {

		cout << "You tied!" << endl;
	}
			else if (computer == 'r') {

		cout << "You lose!" << endl;
	}
			else {

		cout << "You win!" << endl;
	}
			break;
	}
}