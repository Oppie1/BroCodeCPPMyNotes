#include<iostream>
using namespace std;



//Declare a void function prototype named bakePizza with no parameters.
//CODE:
void bakePizza();

//Declare a void function prototype named bakePizza with one string parameter variable for a topping.
//CODE:
void bakePizza(string topping1);

//Declare a void function prototype named bakePizza with string parameters for TWO toppings.
//CODE:
void bakePizza(string topping1, string topping2);


int main() {

	//Call the bakePizza function with no parameters/parameters.
	//CODE:
	bakePizza();
	
	//Call the bakePizza function with one topping/parameters
	//CODE:
	bakePizza("pepperoni");

	//Call the bakePizza function with two toppings.
	bakePizza("pepperoni", "mushroom");

}

//Define the void pizza function with a message here is your plain pizza inside the codeblock that
//will be printed to the screen when called from main.
//CODE:
void bakePizza() {

	cout << "Here is your plain pizza!\n";
}

//Define the void pizza function with a message here is your topping1 (variable) pizza in codeblock.
//CODE:
void bakePizza(string topping1) {

	cout << "Here is your " << topping1 << " pizza!\n";
}

//Define void pizza function same way as above but with TWO toppings (variables) pizza.
//CODE:
void bakePizza(string topping1, string topping2) {

	cout << "Here is your " << topping1 << " " << topping2 << " pizza!" << endl;
}