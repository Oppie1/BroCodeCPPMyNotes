#include <iostream>
using namespace std;


int main() {

	//Declare 2 uninitialized int variables named num and guess to store the actual number and guessed one.
	//Declare a third int variable named tries and set it equal to 0. Needs to be initialized to 0 so the
	//computer knows where to count from.
	//CODE:
	int num;
	int guess; 
	int tries = 0;

	//Seed the random number genterator (srand()) function with argument time which will have its own 
	//argument of NULL.
	//CODE:
	srand(time(NULL));

	//Assign the num variable to a random number 1-100. Use the rand() function with modulus of 100. Add 1
	//to cover any instances where there is no remainder. Key point is the random number could be anything 
	//from the number 0, single digits, in the hundereds or even in the 1000,10000+. So when we divide by 
	//100 we could get any number from 1-100 but we must cover the instance with no remainder.
	//CODE:
	num = (rand() % 100) + 1;


	cout << "*****Number Guessing Game******\n" << endl;

	//Use a do while loop to make the program.
	//First establish the do statement.
	//CODE:
	do {

		cout << "Enter a guess between 1 = 100: ";

		//Input user selection/number into the guess variable where it will be stored.
		//CODE:
		cin >> guess;

		//Increment the tries variable by 1.
		//CODE:
		tries++;

		//Use an if statement that will measure whether the number the user entered (the guess) is greater
		//than the random number the computer produced. Then notify the user that the guess was to high.
		//CODE:
		if (guess > num) {

			cout << "Your guess was too high" << endl;
		}

		//Use an else if statement that will cover if the users selection is less than the number the computer
		//produced and a statement that say their guess was too low.
		//CODE:
		else if (guess < num) {

			cout << "Your guess was too low" << endl;
		}

		//Use an else statement that will cover if the users input correctly guessed the number the computer
		//stored in num/produced. Then write a statement to notify the user that they guessed correctly
		//and then the number of tries it took them.
		//CODE:
		else {

			cout << "You guessed correctly! Number of tries -> " << tries << endl;
		}

	} 
	
	//Establish the while part of the do while loop that will ensure that the loop will keep running so long
	//as the guess (guess variable) DOES NOT equal the number (num variable) that the computer produced/has stored.
	//CODE:
	while (guess != num);
		
	//Create a statement that will that will let then user know again that they guessed the number/num correctly.
	//CODE:
	cout << "\nCongrats on guessing number -> \n" << num << endl;

	cout << "\n**************The Guessing Game Has Concluded****************\n" << endl;

}

//So we use a do/while loop so the user first enters a number and tries that was initially set to 0 increases
//by 1 (so 1 to start. Then when first if statement is written if users selection is too high it immediately executes
//shows statement notifying user and goes to the bottom of the do/while loop where it meats the while portion
//which controls the loop -> stating that if the users guess does not equal the number the computer has stored
//do go back up to the do portion and execute the loop. It will input another user guess and increment
//the tries by 1 and so in the second iteration tires will equal 2 and then go to the first if staement. If
//this time the users guess is too low instead of two high the first if statent fails and so is skipped and 
//does not execute. And so it falls to the else if statement. If their guess is to low than that else if statement
//executes and notifys the user they guessed to low. After which point it fall through and skips the else to 
//go to the while portion which controls whether the loop iterates again. Which in this case it would because
//the number DOES NOT equal the guess. Finally, after the user guesses the right number (lets just say on thrid try).
//The number of tries would first increment to three since on previous interation they were at two. Then the 
//first if condition would fail since the user did not guess too high, then it would fall to the else if statement
//where that would fails since the user did not guess too low and so that would be skipped. Then finally the else
//condition just covers the fact that neither of the above two conditions were met so the user must have guessed
//the right number. Then at the vary end it is confirmed when the while loop fails because the number DOES
//equal the user guess. And so at that point the do/while loop breaks because the while condition failed.
//Then the last message is printed and the program finishes.