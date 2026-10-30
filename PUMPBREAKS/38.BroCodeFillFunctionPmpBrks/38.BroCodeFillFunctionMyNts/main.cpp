#include <iostream>
using namespace std;
#include <string>



//fill() = Fills a range of elements with a specified value. fill(begin, end, value)

int main() {

	//Declare a const int named SIZE and initialize it to 99.
	//CODE:
	const int SIZE = 39;
	
	//Declare a string array with a fixed size using SIZE []
	//CODE:
	string foods[SIZE];

	//Use the  fill() with the argument of where to begin which is the beginning address
	//of the data structure which is foods here, then an ending address which would
	//be the array name foods here with an expression -> the array name foods plus
	//the size of the array using the variable you created divided by 3. Then in the
	//last argument what you want to display to the screen which here is "pizza".
	//CODE:
	fill(foods, foods + (SIZE / 3), "pizza");

	//Use the fill() again but this time display hamburgers to the screen for the
	//next 13 elements using the same syntax and expression within the arugments.
	//- start at the foods data structure but at 13 using an expression, for the
	//second argument use the foods variable and add the expression for 13 multiplied
	// by 2 so the program knows to stop at the 26 element. Then in last argument
	// print hamburgers.
	//CODE:
	fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "hamburgers");

	//Use fill function but this fime display hotdogs and the final 13 elements.
	//Use the first argument to tell the program to begin at the 26th element. 
	//You do that by takeing the foods array and adding the divided SIZE
	//by 3 and multipliying by 2 so the program starts at the 23 element. 
	//In the second argument to tell the function where to stop take the
	//foods array and add the total size, 3rd argument display hotdogs.

	fill(foods + (SIZE / 3) * 2, foods + SIZE, "hotdogs");


	//Use a range based for loop to display the information to the screen.
	//CODE:

	for (string food : foods) {

		cout << food << '\n';
	}
}