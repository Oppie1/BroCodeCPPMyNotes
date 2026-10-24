#include <iostream>
using namespace std;



//Declare a void sort function declaration with he first parameter by an integer array
//and the second variable be the actual size of said array.
//CODE:
void sort(int array[], int size);


int main() {

	//Declare an integer array[] initialized to 4 random numbers.
	//CODE:
	int array[] = {10,1,9, 4};

	//Declare an integer variable initialized to an expression using the sizeof() function
	//with "array" array as its argument divided by the sizeof() one of the array elements [0]
	//CODE:
	int size = sizeof(array) / sizeof(array[0]);

	cout << "\nNot sorted array\n" << endl;
	for (int element : array) {

		cout << element << " ";
	}

	//Call the sort array function while using array and size variables as the arguments.
	//CODE:
	sort(array, size);

	//A range- based loop is a shorthand that automatically iterates through each element in the array.
	//It declares a variable (int element) that holds the current element's value in each loop
	//iteration, eliminating the need for manual index management. This for/each loop process each
	//element in sequence.
	//CODE:

	cout << "\n\nSorted array\n" << endl;
	for (int element : array) { //for each loop

	//Each loop iteration print out the element and a space on the same line.
	//CODE:
		cout << element << " ";
	}

	return 0;

}

//Define the void sort() function
//CODE:
void sort(int array[], int size) {

	//Decalre an integer variable to hold temporary variable (temp).
	//CODE:
	int temp;

	//Use an outer for loop to iterate through the array and an inerfor loop with an if statement
	//to perform the actual bubble sort.
	//First use for loop and declare integer i variable to 0; i is less than the size of the array
	//minus 1 -> The reason we use size - 1 is that we dont need to compare the last element to anything.
	//Then we iterate i by on.
	//CODE:
	for (int i = 0; i < size - 1; i++) {
	
	//Use inner for loop to insure that we done sort elements that have already been sorted.
	//So for example size - i - 1 -> 0 < 10 - 0 - 1 = 9 for the first iteration. For the next
	//iteration of the inner for loop where j = 1 we would have 10  - 0 -1 1<9? and then to the
	//point where j = 9 -> 9 < 10 - 0 - 1 and so at 9<9 the loop will fail. At that point the
	//variable would have swapped all the way from the left to the right part of sequence.
	//IMPORTANT: We start at index 0 so the size in the control is 10 elements in total so it
	//covers the last element in the array.
	//CODE:
		for (int j = 0; j < size - i - 1; j++) {

		//For each element we use an if statement to take the givein element we are on so say
		//element 0 and test if the given element is less that then element to the right.
		//So we first test array at index j (0) -> array[j] is less than  0 + 1. We are saying
		//is whatever element value at j less than the element next to it.
		//CODE:
			if (array[j] > array[j + 1]) {
		//Then we use the temp variable we created as storage for whatever is in index j if it
		//was less than the element to the right of it.
		//CODE:
				temp = array[j];
		//Then the next step in the code block would be to assign array[j] to the value of whatever
		//element is at array[j+1]
		//CODE:
		array[j] = array[j + 1];
		//Finally we take the value that was one step to the right (bigger number) and set it
		//equal to the value located in the temp storage as to move it to the right by one.
		//This keeps on happening until the largest value is all the way to the right leaving
		//all the lesser numbers to the left.
		//CODE:
			array[j + 1] = temp;
			}
		}

	}
}







