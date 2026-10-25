#include <iostream>
#include <string>//Needed to use getline() function. 
using namespace std;


int main() {

	//Declare a uninitialized string array named foods with five elements []
	//CODE:
	string foods[5];

	//Declare a size array and initialize it to the expression of the sizeof() function
	//with the argument being the foods array and divide it by one element of the foods
	//array -> Hint: sizeof(...[0])
	//CODE:
	int size = sizeof(foods) / sizeof(foods[0]);

	//Declare a uninitialized string variable named temp to hold the temp variable
	//and if logic that later in the program to account when the user presses
	//'q' when they exit the program.
	//CODE:
	string temp;

	//Use a for loop with an integer loop counting variable i initialized to 0,
	//the control i  is less than the size of the array and then iterate i  by 1.
	//CODE:
	for (int i = 0; i < size; i++) {

		//Within the codeblock of the for loop prompt the user to enter
		//the food they like or pressing q to quit. In same line track the user
		//entries 1-5 (unless user presses q) output i + 1 since i starts
		//at 0 and we want 1:, 2:, 3: ect. (Use ":" at end for formatting purposes)
		//CODE:
		cout << "Enter a food you like or 'q' to quit " << i + 1 << ": ";

		//Use getline(,) function to cin the temp variable to store the user
		//input. Using getline instead of just cin accounts for spaces.
		//CODE:
		getline(cin, temp);
		
		//Use an if statement to cover the user input when they press 'q' and want
		//to exit the program. Use break to prevent fall though as well.
		//CODE:
		if (temp == "q") {

			break;
		}

		//Use an else condition to account for when the user enters a food they
		//like. Use the current element and assign it to the temp variable.
		//This will store each food they like in that variable.
		//CODE:
		else {

			foods[i] = temp;
		}
	}


	cout << "You like the following foods:\n";

	//Use a for loop to print out the foods the user likes to the screen.
	//Set loop counting integer i to 0 with the control condition accounting
	//for when foods is NOT empty at given [i] element is not empty. Use the
	//.empty() function called on the foods array and current i element.
	//Iterate i by 1.
	//CODE:
	for (int i = 0; !foods[i].empty(); i++) {

		//Output the current element of i to the screen to print out the foods
		//the player liked each on a new line. If you like use the loop counter 
		//variable as done in the first for loop to display tracking to screen.
		//CODE:
		cout << foods[i] << '\n';
	}

	return 0;
}