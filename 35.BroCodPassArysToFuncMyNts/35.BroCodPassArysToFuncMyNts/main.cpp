#include<iostream>
using namespace std;



//Create a function declaration that will hold a an array of double data type named prices[] as
//a parameter and a ineger parameter named size.
//CODE:
double getTotal(double prices[], int size);


int main() {

	//Declare the double array prices and initialize it to 4 number elements with decimals.
	//CODE:
	double prices[] = { 49.99, 15.05, 75, 9.99 };

	//Declare an integer named size which will be equal to the expression of the sizeof() prices array
	//divided by the sizeof() prices of a given element of the prices array.
	//CODE:
	int size = sizeof(prices) / sizeof(prices[0]);

	//Declare another double variale named totalPrice that is set equal to the getTotal() function with
	//the argument of prices, and size.
	//CODE:
	double totalPrice = getTotal(prices, size);

	//Display the totalPrice to the screen.
	//CODE:
	cout << "$" << totalPrice << endl;

	return 0;
}

//Define the getTotal function from function prototype/declaration
//CODE:
double getTotal(double prices[], int size) {

	//Declare a double variable local to the function and set the price to 0. This insures the 
	//total price we are calculating is starting at 0 an not some other price.
	//CODE:
	double totalPrice = 0;

	//Use a for loop with setting i (iteration) to 0, the control that i is less than the size of the
	//array (in elements/how many elements are in array). Within main we can let the function know
	//explisitly what the size of the array is. The variable int size value is calculated in main and 
	//passed to the function through its parameter.
	for (int i = 0; i < size; i++) {

	//Within the codeblock of the for loop we get the total price by assigning total price to
	//the total price plus the value of the current value in the array. The loop increment and iteratate
	//over the price of each element in the array and add each element together as it does.
	//CODE:
		totalPrice += prices[i];

	}
	
	//We will return totalPrice back to the caller which is the getTotal() function in main with
	//prices and size as its arguments.
	return totalPrice;

	//IMPORTANT:Just like size the prices that this function uses are within main. So when the 
	//function call happens in main the prices are dropped into the parameter so the function 
	//can use them in its calculation/expression. As mentioned before the same thing happens with
	//the size variable. The size is calculated in main and then the function can use that variable.
}