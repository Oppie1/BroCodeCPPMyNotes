#include<iostream>
using namespace std;



//array = a data structure that can hold multiple values
//values area accessed by an index number
//"Kind of like a variable that holds multiple values"

int main() {

	//Declare a string variable named car and initialize it to "Corolla"
	//CODE:
	string car = "Corolla\n";

	//Output the car variable to the screen.
	//CODE:
	cout << car <<endl;

	//Create a string array named cars (Hint:[]) and show three makes of cars to screen(elements).
	//CODE:
	string cars[] = { "Corolla", "Mustang","Corolla" };

	//Now display each of the cars elements at their give index locations to screen. Hint[#]
	//CODE:
	cout << cars[0] << '\n';
	cout << cars[1] << endl;
	cout << cars[2] << endl;

	//Create another string array this time cars2 that will have 3 elements (Hint:[elements])
	//CODE:
	string cars2[3];

	//Assign each of the cars2 elements to a model  of car at EACH index location. []
	//CODE:
	cars2[0] = "Comaro";
	cars2[1] = "Mustang";
	cars2[2] = "Camry";

	//Display each of the cars2 elements using index location to the screen.
	//CODE:
	cout << cars2[0] << '\n';
	cout << cars2[1] << '\n';
	cout << cars2[2] << endl;

	//Declare double array named prices with empty brackets. Initialize the array to 
	//4 elements that have two decimal places.
	//CODE:
	double prices[] = { 5.00, 7.50, 9.99, 15.00 };

	//Output the for prices to the screen using the prices array and the index location
	//for each price/element.
	//CODE:
	cout << prices[0] << '\n';
	cout << prices[1] << '\n';
	cout << prices[2] << endl;
	cout << prices[3] << '\n';
}