#include <iostream>
using namespace std;
#include <string>



//fill() = Fill a range of elements with a specified value. fill(begin, end, value.)

int main()
{
	//Declare a constant integer SIZE that will hold the number of elements in the array.
	//CODE:
	const int SIZE = 99;

	//Declare string array foods with SIZE [] elements.
	//CODE:
	string foods[SIZE];
	
	//Use the fill( , , ) function with the foods variable to determine when to start the output to the
	//screen, when to end the output to the screen and what value to fill the spaces with.
	//So below start with the variable foods to start out with. Then go
	//until to the end of foods SIZE divided by 3 -> so 99/3 = 33. Then you will fill those
	//spaces (first 33) with a value which here we will use "pizza"
	//CODE:
	fill(foods, foods + (SIZE / 3), "pizza");

	//Next use the fill() function function to fill the next 33 spaces with the value of "hamburgers"
	//For starting position take the string array foods and add the SIZE of the array divided by 3.
	//This will start the output at the 33 element position. Then in the middle argument determine where
	//the output will stop by taking the foods array and adding it to the SIZE of the array divided by 2.
	//This will make the output end at the 66 index. Then for the last argument use the value "hamburgers"
	//CODE:
	fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "hamburgers");

	//Finally, use the fill() to fill in the last 33 spaces with the value of "hotdogs"
	//For starting position in first argument take the string array foods plus the SIZE of the 
	//array divided by 3 and then multipli that by 2. 33 * 2. Then in the second argument take
	//the foods array and add size as to know whenre to end. Which is at the end of the array
	//99 element. Then in third argument fill in the last value "hotdogs".
	fill(foods + (SIZE / 3) * 2, foods + SIZE, "hotdogs");

	//Use a range-based for loop (for-each/loop) to iterate over all the the food elements.
	//For each  string food in the foods array, do the following.
	// 
	//string food -> Declare a variable named food of type string
	// : in(or"from")
	// foods -> the foods array
	//CODE:
	for (string food : foods) {

		cout << food << '\n';
	}

}

//IMPORTANT: This code iterates over elements because the loop variable food contains the actual
//string value from each array position, not the position number itself. This is called a range-based 
//for loop or for-each, and it's a cleaner way to iterate when you dont need to know the index.
