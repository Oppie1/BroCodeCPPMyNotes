#include <iostream>
using namespace std;


int main() {

	//1 dimensional array. String 1, string 2, string 3, string 4 -> 4 elements. 
	//index 0,1,2,3
	string questions[] = { "1. What is Adam's last name?: ",
						"2. What year was Adam Born?: \n",
						 "\n3. Where was Adam born? \n",
						"\n4. Is the Earth flat?"
	};
	
	
	//2D array with 4 sub arrays and 4 columns.
	string options[][4] = {

		//Sub array (0-3) = 0 sub array.
		{"A. Dolgard", "B. Paul", "C. Tindall", "D. Villa"},
		//Sub array = 1 array
		{"A.1979", "B. 1983", "C. 1990", "D. 1333" },
		//2 sub array
		{"A. Chicago", "B. LA", "C. Panama City", "D. Green Bay" },
		//3 sub array
		{"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}

	};

	
	char answerKey[]{ 'C','B','D','C' };

	//size is size of the question array which is 4 strings. Divided by one element of string array [0]
	int size = sizeof(questions) / sizeof(questions[0]);

	//Will be initialized when the user inputs (cin) a guess.
	char guess;

	//This is initialized because when we increment score++ later we need a starting point.
	int score = 0;


	for (int i = 0; i < size; i++) {

		//1 dimensional array index 0,1,2,3
		cout << questions[i] << endl;;


		//In sizeof() In one row (sub array) it has 4 options (strings)
		//Divide that by one element/string of a sub array -> [sub array] [column]
		//ex. -> [0][2] = C. -> Tindall
		for (int j = 0; j < sizeof(options[0]) / sizeof(options[0][0]); j++) {

			cout << options[i][j] << endl;

		}

		cin >> guess;

		guess = toupper(guess);

		// i in the first iteration would be 0 so 'C' from the answer key.
		if (guess == answerKey[i]) {

			cout << "Correct!" << endl;

		//Stores in score var for later calculation for the "0" iteration. Does this for each iteration 0,1,2,3.
			score++;
		}

		else {

			cout << "Wrong" << endl;

		//ex. i = 0 -> int this case score stays the same and so wont be used in calculation (no score++)
		//So this would just go to the next part (within outer for loop without having score incremented.
			cout << "Answer: " << answerKey[i] << '\n';
		}

		//0++ = 1 -> score = 1
		cout << "Correct guesses: " << score << endl;

		//4 questions
		cout << "# of questions: " << size << '\n';

		//Use type caste to make divisor variable a decimal.
		cout << "Score: " << (score / (double)size) * 100 << "%";
		
		//ex. 1/4 = .25 * 100 = 25% -> After 1st iteration if you got correct answer.
	}



}

