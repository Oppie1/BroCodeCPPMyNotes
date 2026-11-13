#include <iostream>
using namespace std;


int main() {

	//Declare a string array named questions[] that has 4 elements/questions for a quiz of your choosing.
	//CODE:
	string questions[] = { "1. What is Adam's last name?: ",
							"2. What year was Adam Born?: ",
							"3. Where was Adam born?",
							"4. Is the Earth flat?"
	};

	//Declare a 2D string array named options to display the opttions for each question for he user. There will
	//be four arrays with four elements in each of those arrays. For each array present 4 options to each
	//question (A-B).
	//CODE:
	string options[][4] =
	{ {"A. Ferguson,B. Paul,C. Tindall,D. Villa"},
		{"A.1979, B.1983, C.1990, D.1333"},
		{"A. Chicago,B. LA,C. Dallas, D. Green Bay"},
		{ "A. Yes, B. No, C. Sometimes, DE. What's Earth?" }
	};

	//Declare char array named answerKey with answers that match up with the options you just created (A-D)
	//Remember to make sure the letters match up with the option you presented in the 2D array (e.g. B,D,A,A)
	//CODE:
	char answerKey[] = { 'C', 'B', 'D','C' };

	//Declare an int var named size and initialize it using sizeof() with the first being the array (questions)
	//which contains 4 elements total divided by one element of that array [0]. So will be 4/1=size=4.
	//CODEL
	int size = sizeof(questions) / sizeof(questions[0]);

	//Declare an uninitilized char var guess that will hold the users guess input.
	//CODE:
	char guess;

	//Declare an int var named score that will hold the tallied score for the quiz. Need to initilize it to
	//0 so the program knows where to start from when doing the tallying.
	//CODE:
	int score = 0;

	//This outer for loop with nested for loop which contains an if else statement will hold the logic for program
	//Use a for loop with i initilized to 0, i is less than the size of the array (use size variable but = 4),
	//and then increment by 1.
	for (int i = 0; i < size; i++) {

		cout << "************************************\n";
		//Output the the question at the given index location to the screen. Use the question array and [] int
		//i to display that question. Then program moves onto next protion of program which is the nested
		//for loop which will display the options to the screen.
		//CODE:
		cout << questions[i] << '\n';
		cout << "************************************\n";

		//Use a nested for loop with counting var j (or whatever letter) initilized to 0, j is less than
		//the the total size of the options array divided by 1 element of the options array. Then incrment by 1
		//CODE:
		for (int j = 0; j < sizeof(options[j]) / sizeof(options[j][0]); j++) {

		//Within the codeblock of the 4 loop use ouput the option at each given location that corresponds 
		//to the question array above. Since it is a 2D array you use [i] -> from outer loop will draw from
		//the first set of options/array that correspond with the questions and j which is the index location of
		//the option within that array.
		//CODE:
			cout << options[i][j];

		}
		
		cout << endl;

		//Just outside the nested for loop and within the outer for loop input the user guess int the guess
		//variable which will store their selection.
		//CODE:
		cin >> guess;

		//Assign "guess to the toupper() function with guess as its parameter so it takes both user input 
		//whether upper of lower case.
		//CODE:
		guess = toupper(guess);

		//Next use an if statement to determine whether the guess (use guess var) is the same as (==) what 
		//is written in the answer key (1D) array. Make sure you use the index location i as it falls within
		// the numerical bounds of the outer loop. Not j.
		if (guess == answerKey[i]) {

			//Output "Correct" if the if statment is true.
			//CODE:
			cout << "Correct\n";

			//Increment score by one  which will be stored in the score variable (just 1 point for each question)
			//CODE:
			score++;
		}

		//Use else to display message when the user got the question wrong.
		//CODE:
		else {

			//Output that they got a wrong answer to the screen. 
			//Then output that correct answer using the answer key and the i index location. There
			//is no need to increment score since the user got the question wrong.
			//CODE:
			cout << "Wrong\n";
			cout << "Answer: " << answerKey[i] << '\n';
		}

		cout << "************************************\n";
		cout << "*              Results              *\n";
		cout << "************************************\n";

		//Display the number of correct guesses the user got by using score var to the screen.
		//CODE:
		cout << "Correct Guesses: " << score << '\n';

		//Display the number of question using the size variable to the screen.
		//CODE:
		cout << "# of questions: " << size << '\n';

		//Display the score to the screen by dividing the score by the size of the quiz. Make sure you 
		//type cast (****) size to a double since we will get a decimal. Then multiply by 100 to get rid of dec
		//CODE:
		cout << "Score: " << (score / (double)size) * 100 << "%";

	}

}
