#include <iostream>
#include<string>
using namespace std;


int main() {
	
	//Declare a string array named foods. If not assigning values to array when 
	//initializing the array we will have to specify a size. Here just use 5 elements.
	//CODE:
	string foods[5];

	//Declare an int variable named size with the expression of the total size of the array
	//divided by one element of the size of array using the sizeof() function.
	//CODE:
	int size = sizeof(foods) / sizeof(foods[0]);

	//Declare a string variable named temp to hold a temporary value.
	//CODE:
	string temp;

	//Declare a for loop with i initialized to 0, i less than size, increment i by 1
	//CODE:
	for (int i = 0; i < size; i++) {

	//Prompt user for the food they would like or 'q' to quit. Output i + 1
	//to screen for the number they are on since i is 0 and we dont want
	//user to see that.
		cout << "Enter a food you like or 'q' to quit " << i + 1 << ":";

	//Input the user temp variable for the user.
	//CODE:
		cin >> (temp);

	//Use an if statement to check if the user input "q"  for the temporary var
	//and if so break out of the for loop.
	//CODE:
		if (temp == "q") {

			break;
		}
	//Use "else" block to assign each element of the foods array to the temp var
		else {

			foods[i] = temp;
		}

	}

	cout << "You like the following food:\n";

	//Use a for loop to show foods out to scrren. Initialize i to 0, set the
	//control to be as long as current element of food array is NOT empty
	//display the current element for foods array out to screen. Call the
	//empty function on current element in foods array (NOT). The increment i by 1.
	for (int i = 0; !foods[i].empty(); i++) {

		cout << foods[i] << '\n';
	}
}
