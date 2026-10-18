#include<iostream>
#include <string>
using namespace std;


//Create a function definition named search array with parameters of an integer array[], the
//size with integer data type, and an element with int data type.
//CODE:
int searchArray(int array[], int size, int element);

//Create a function definition named search array with parameters of a string foods[] (array), size 
//with int data type. And a string for myFood (element)
//CODE:
int searchArray(string foods[], int size, string myFood);


int main() {

	//Declare a integer array named numbers[] initialized to numbers 1-9.
	//CODE:
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//Declare a variable named size and initialize it to the expression of the sizeof() function
	//with numbers as its argument divided by the sizeof one element of the numbers array 
	//hint numbers[0].
	//CODE:
	int size = sizeof(numbers) / sizeof(numbers[0]);

	//Declare two integer variables one named index that will store the index location of the 
	//given element. And another named myNum that will store the user entry.
	//CODE:
	int index; 
	int myNum;

	cout << "Enter element to search for: " << '\n';
	
	//Input user number selection into the program.
	//CODE:
	cin >> myNum;
	cin.ignore(); //This clears the newline from the buffer so you can use getline(,) later

	//Assign the index variable to the function call searchArray() with the 3 respective arguments.
	//CODE:
	index = searchArray(numbers, size, myNum);

	//Use an if statement to test if the index IS NOT -1 (will be discussed in function definition)
	//and print the myNum variable " is at index " and index variable to screen.
	//CODE:
	if (index != -1) {

		cout << myNum << " is at index " << index << endl;
	}

	//So if the if statement fails and index is -1 (returned -1) then it would be skipped. Write
	//an else statement that prints the variable myNum is not in the array.
	//CODE:
	else {

		cout << myNum << "\nMy num is not in the array " << endl;
	}

	cout << "\n\n****************************************************************\n";
	cout << "Next Example: " << endl;

	//Create a string array named foods[] initialized " " to three different foods.
	//CODE:
	string foods[] = { "pizza", "hamburger", "taco" };

	//Declare a integer variable named size2 and initialize it to the expression of sizeof() 
	//with foods as its argument divided by sizeof() one foods element.
	int size2 = sizeof(foods) / sizeof(foods[0]);

	//Declare two variable one being an int for index2 and the other a string for myFood.
	int index2;
	string myFood;

	cout << "\nEnter food to search for: " << '\n';
	
	//Use a getline(,) to bring in the user food selection to see if it is in array.
	getline(cin, myFood);

	//Assign the storeage variable index2 to the serachArray() with givein arguments.
	//CODE:
	index2 = searchArray(foods, size, myFood);

	//Again use if statement to text if user input (index2) does not equal -1. If it does the if 
	//statement executes and use myFood variable "is at index" index2
	//CODE:
	if (index2 != -1) {

		cout << myFood << " is at index " << index2 << endl;
	}

	//If -1 was returned (return -1) then the if statement fails and is skipped. Use an else
	//statment to print myFood "is not in the array" to the screen.
	else {

		cout << myFood << " is not in the array " << endl;
	}
	return 0;
}

//Define the function defintion search array for locating the right element in the array. This
//is the defintion for the number search array.
//CODE:
int searchArray(int array[], int size, int element) {
	
	//Within the codeblock of the function defintion use a for loop to scroll through each
	//iteration of the numbers array. First initialize the loop counter i to 0, then compare i
	//to the size of the array, increment by 1.
	//CODE:
	for (int i = 0; i < size; i++) {

	//Within the for loop use an if statement to see if the given array element using array[i]
	//is equal to the element at that given iteration. It will keep looping through all the 
	//elements of the numbers array 1-9. If the given element is found then it will be returned
	//to the caller. The if statment executes then return i within the block.
	//CODE:
		if (array[i] == element) {
			return i;
		}
	}
//Just outside the for loop back in the function defintion codeblock we want to return -1. This 
//will be the sentinal value that will be returned to the function call in main and used in
//the if statement there to display whether a number was found or not.
//CODE:
	return -1;

}
//Define the funcion defintion search array for locating the right food (myFood) in the array. 
// This iis the defintion for foods search array.
//CODE:
int searchArray(string foods[], int size, string myFood) {

	//Within the codeblock of the function definition use a for loop to scroll though each iteration 
	// of the foods arra. First initialze the loop counter to 0, then compare i to the size
	//of the array, increment by 1.
	//
	for (int i = 0; i < size; i++) {
		//Within the for loop use an if statement to see if the given array element using foods[i]
		//is equal to the element(myFood) at that given iteration. It will keep looping through all the
		//elements of the foods array (three foods). If a given myFood is found then it will be returned to
		//the function call in main. The if statement executes then return i wihin that if block.
		if (foods[i] == myFood) {

			return i;
		}
		
	}
	
	//Just outside the for loop back in the function definition codeblock we want to return -1. This will be
	//the sentinal value that will be returned to the function call in main and used in the if statement
	//there to display whether a food was found or not.
	return -1;
}