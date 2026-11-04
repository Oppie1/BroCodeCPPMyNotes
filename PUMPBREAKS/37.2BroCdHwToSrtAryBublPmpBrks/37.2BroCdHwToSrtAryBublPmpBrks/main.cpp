#include <iostream>
using namespace std;



//Declare a void sort function declaration with he first parameter by an integer array
//and the second variable be the actual size of said array.
//CODE:
void sort(int array[], int size);

int main() {

	//Declare an integer array[] initialized to 4 random numbers.
	//CODE:
	int array[] = { 9,6,3,7 };

	//Declare an integer variable initialized to an expression using the sizeof() function
	//with "array" array as its argument divided by the sizeof() one of the array elements [0]
	//CODE:
	int size = sizeof(array) / sizeof(array[0]);

	//Call the sort array function while using array and size variables as the arguments.
	//CODE:
	sort(array, size);

	//A range- based loop is a shorthand that automatically iterates through each element in the array.
	//It declares a variable (int element) that holds the current element's value in each loop
	//iteration, eliminating the need for manual index management. This for/each loop process each
	//element in sequence.
	//CODE:
	for (int element : array) {

		cout << element;
	}

		//Each loop iteration print out the element and a space on the same line.
		//CODE:

	return 0;

}

//Define the void sort() function
//CODE:
void sort(int array[], int size) {

	int temp;

	for (int i = 0; i < size - 1; i++) {

		for (int j = 0; j < size - i - 1; j++) {

			if (array[j] > array[j + 1]) {

				temp = array[j];

				array[j] = array[j+1];

				array[j + 1] = temp;
			}
		}
	}
}
	//Declare an integer variable to hold temporary variable (temp).
	//CODE:

	//Use an outer for loop to iterate through the array and an inner for loop with an if statement
	//to perform the actual bubble sort.
	//First use for loop and declare integer i variable to 0; i is less than the size of the array
	//minus 1 -> The reason we use size - 1 is that we dont need to compare the last element to anything.
	//Then we iterate i by on.
	//CODE:

		//Use inner for loop to insure that we done sort elements that have already been sorted.
		//So for example size - i - 1 -> 0 < 10 - 0 - 1 = 9 for the first iteration. For the next
		//iteration of the inner for loop where j = 1 we would have 10  - 0 -1 1<9? and then to the
		//point where j = 9 -> 9 < 10 - 0 - 1 and so at 9<9 the loop will fail. At that point the
		//variable would have swapped all the way from the left to the right part of sequence.
		//IMPORTANT: We start at index 0 so the size in the control is 10 elements in total so it
		//covers the last element in the array.
		//CODE:
	

			//For each element we use an if statement to take the given element we are on so say
			//element 0 and test if the given element is less that then element to the right.
			//So we first test array at index j (0) -> array[j] is less than  0 + 1. We are saying
			//is whatever element value at j less than the element next to it.
			//CODE:
		
				//Then we use the temp variable we created as storage for whatever is in index j if it
				//was less than the element to the right of it.
				//CODE:
				
				//Then the next step in the code block would be to assign array[j] to the value of whatever
				//element is at array[j+1]
				//CODE:
				
				//Finally we take the value that was one step to the right (bigger number) and set it
				//equal to the value located in the temp storage as to move it to the right by one.
				//This keeps on happening until the largest value is all the way to the right leaving
				//all the lesser numbers to the left.
				//CODE:


//SORTING { 9, 6, 3 , 7}
//Outer for loop -> for(int i = 0; i< size-1;i++)
//First pass is i = 0 -> 4 - 0 - 1 -> 3 - compares first three pairs and 9 bubbles down the array to last position.
// Second pass is i = 1 -> 4 - 1 -1  -> 2 - compares first 2 pairs since 9 is already in the last position.
// -------
//Inner for loop -> for(int j = 0;j<size-i-1;i++)
//Each pass of bubble sort pushes the largest unsorted number to the right. Once a number is in its final 
//position, you dont need to check it again. So: 
//After pass 1, the biggest number is at the end -> skip it next time 
//After pass 2, the 2nd biggest is in place -> skip it too.

//First pass j = 0 ( 0 < 3?) true -> 9 > 3 True -> temp = array[j(0)(9)] -> temp = 9 -> 
//array [j(0)(9)] = array[j+1(1,6)] **Key point when we assign a variable/array position 
// it brings in the thing we are assigning it from. So here we are assigning the first element in the 
//array to 3. Then, array[j+1] = temp -> So here we take we assign the second position in the array 
//to what is in the temp variable. So the second position is 9.
//The second pass of the inner loop -> j = 1 < 3, True, array[1(9)]> array[2(3)] -> temp = 9
//array[j(1)] = array[j+1], So 3 is moved to the 2nd element. -> array[j+1] = temp.
//Third pass -> j = 2 -> 2 < 3? True, j = 2 -> array[2(9)] > array[2+1 = 3 (7)] True, 
//temp = array[j.2] -> array[j.2+1] -> array[2] = 7. -> array[2+1 (third position] = temp (9).
//for j = 3 -> 3 < 3? False, go to outer loop -> array now {6, 3, 7, 9}.
//for(int i = 1; 1 < 4 - 1 = 3 -> this means we are only comparing 3 values since in the first run 9
//made it to the last position on the right -> So size we are sorting is actually 3 -> 6,3,7.
//Inner loop with i = 1 -> for(int j = 0; 0<4-1-1 = 2 -> 0<2? True.
//if(array[0,6]>array[1,3]? True -> temp = array[j,6](6) -> array[j,6] = array[j+1 = 2 = 3](array[j] = 3;
// array[1+1] = temp(6). Return to nested loop with array at (3,6,7) j = 1. 1 < 2? True,  
// array[1(6)]>array[2(7)] False, skip if statement. Go back to nested for loop with array 3,6,7 j = 2.
// for(j=2, 2< 2? False, skip inner loop and return to outer for loop with i = 2. for(i = 2; 2 < 3? True,
// Go to nested loop for(j=0,0<4-2-1-> 0<1? true, array[j]>array[1] -? 3> 6? False, fails if stement returns
// to for loop -> for(j=1;1<1? False, return to outer for loop with i = 3. for(i=3;3<3? False) exit
// outer for loop and move to next step in program! Yay done
// 
//