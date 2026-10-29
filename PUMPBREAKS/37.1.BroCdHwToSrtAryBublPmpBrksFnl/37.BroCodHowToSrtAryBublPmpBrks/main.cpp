#include <iostream>
using namespace std;



//Declare a sort() function of void data type. With parameters of an int array[] to
//hold the actual array element values an int size variable to hold the total 
//size of the array.
//CODE:
void sort(int array[], int size);


int main() {

	//Declare an int array[] that contains 4 elements initialized to 10,1,4,9
	//CODE:
	int array[] = { 10,1,4,9 };

	//Declare and initialize the int size variable to the sizeof() with the
	//argument of array. Then divide the size of the full array by just one
	//element of the array using of one element of that array using sizeof()
	//with one element of the array[0] as its parameter.
	//CODE:
	int size = sizeof(array) / sizeof(array[0]);

	cout << "\nUnsorted Array Using traditional for loop\n" << endl;

	//Use a for loop with int i initialized to 0; i less that the size of the array.
	//increment i by 1. As the loop iterates, in the codeblock output each element /
	//of the array using array[i] syntax on one line with a space between each element.
	//CODE:
	for (int i = 0; i < size; i++) {

		cout << array[i] << " ";

	}
	
	cout << endl;

	cout << "\nUnsorted Array Using range based loop\n" << endl;

	//Now use a range-based/for-each loop to output all the elements to the
	//screen in the same way just done above. See bottom for thorough explanation
	//of for-each/range-based loop concept.
	//CODE:
	for (int element : array) {

		cout << element << " ";
	}

	cout << endl;

	//Call the sort function with array and size as its arguments.
	//CODE:
	sort(array, size);

	cout << "\nSorted Array Using traditional for loop\n" << endl;

	//Use a for loop with int i initialized to 0, i less than size, i++
	//Again, during each iteration print the current element to screen.
	//CODE:
	for (int i = 0; i < size; i++) {

		cout << array[i] << " ";
	}

	cout << endl;

	cout << "\nSorted Array Using range based loop\n" << endl;
	
	//Use a range-based for-each loop to print elements to the screen.
	//CODE:
	for (int element : array) {

		cout << element << " ";
	}

	cout << endl;

}

//Define the void sort function.
//CODE:
void sort(int array[], int size) {

	//Declare int variable named temp to store the temp variable that will
	//be stored and then swapped in sorting.
	//CODE:
	int temp;

	//Use a for loop initializing int i to 0, i<size of the array; then increment
	//i by one. Here the functional purpose is to go through each of the for 
	//elements in the array to insure that each has their chance to be sorted.
	//1. i = 0, 0<4 -> True, Go to next step/nested for loop.#1
	//2. i = 1, 1<4 -> True, Go to next step/nested for loop.#5 
	//3. i = 2, 2<4 -> True, Go to next step/nested for loop.#8
	//4. i = 3, 3<4 -> True, Go to next step/nested for loop.#10
	//5. i = 4, 4<4? -> False, Skip nested for loop and return to main program.
	// -- Prints sorted array and program completes.
	//CODE:
	for (int i = 0; i < size; i++) {

	//Create a nested for loop to take care of the current element testing it
	//against the the element to the right in the unsorted sequence.
	//1. j = 0, 0 < 4 - 0 - 1 -> 0 < 3 True.
	//2. j = 1, 1 < 4 - 0 - 1 -> 1 < 3 True.
	//3. j = 2, 2 < 4 - 0 - 1 -> 2 < 3 True.
	//4. j = 3, 3 < 4 - 0  - 1 -> 3 < 3 False.
	//Skip nested loop return to outer loop and increment i by 1 -> i++ 0++ = i = 1 #2
	//5. j = 0, 0 < 4 - 1 - 1 -> 2  -> 0 < 2 True. Move to if statement. #5
	//6. j = 1, 1 < 4 - 1 - 1 -> 2 -> 1 < 2 True. Move to if statement.#6
	//7. j = 2, 2 < 4 - 1 - 1 -> 2 -> 2 < 2? False, Skip nested loop and go back to
	//outer for loop. Increment i by 1 i++ -> 1++ -> i = 2. #3
	//8. j = 0, 0 < 4 - 2 - 1 -> 0 < 1, True, Move to if statement #7
	//9. j = 1, 1 < 4 - 2 - 1 -> 1 < 1? False, Skip if statement return to outer
	//loop increment i by 1 -> i++ = 3.i = 3 #4
	//10. j = 0, 0 < 4 - 3 - 1 -> 0 < 0? False, Skip if statement return to outer
	//loop increment i by 1 -> i++ = 4. i = 4 #5
		for (int j = 0; j < size - i - 1; j++) {

	//1. array[0(10)] > array[0+1] = 1 (1)]? True.
	//2. array[1[10] > array[1+1] = 2 (4)]? True.
	//3. array[2[10] > array[2+1] = 3(9)? True.
	
//5. array[0(1)] > array[0+1(4)] = 1 > 4? False. Skip if statement return to nested 
//for loop and increment j by 1 -> 0++ -> 1. #6.
//6. array[1(4)] > array[1+1(9)} = 4 > 9? False, Skip if statement return to nested
//for loop and increment j by 1 -> 1++ -> 2. #7
//7. array[2(9)] > array[1+2(10)] = 9>10? False, Skip if statement return to nested 
//for loop and increment j by 1 #9

			if (array[j] > array[j + 1]) {

	//1. Assign temp variable to 10 (10 stored in temp)
	//2. Assign temp variable to 10 (10 stored in temp)
	//3. Assign temp variable to 10 (10 stored in temp)
				temp = array[j];
	
	//1.Assign array[j] = array[j(0)+1](1 set to 1st position)
	//2. Assign array[j] = array[j(1)+1](4 set to 2nd position)
	//3. Assign array[j] = array[j(2)+1](9 set to 3rd position)
				array[j] = array[j + 1];

	//1.Assign array[j+1] to var that is in temp (which is 10)
	//2.Assign array[j+1] to var stored in temp (which is 10)
	//3.Assign array[j+1] to var stored in temp (which is 10)
				array[j + 1] = temp;
		
	//1.Array is now partly sorted -> {1, 10, 4, 9}. Return to 
	//for loop increment j by 1 -> 0++ -> j = 1. #2
	//2. Array is now -> {1, 4, 10, 9}. Return to for loop increment
	// j by 1 -> = 1++ -> j = 2. #3
	//3. Array is now -> {1, 4, 9, 10}. Return to for loop increment
	//j by 1 -> = 2++ -> j = 3. #4
			}
		}
	}
}

//Range-based  for-each loop 
//Syntax: for (type variable : container) { ... }
//
//Automatically iterates through EVERY element in the array from start to end
//-"element" is a copy of each array value on each iteration (1st: 10, 2nd: 1
//-3rd: 4, 4th: 9. No need to manage index variable (i) or check boundary 
//conditions (i<size)
//-Cleaner and safter than traditional for loops - eliminates off-by-one errors
//-Works with arrays, vectors, and any container supporting iteration
//"int" type matches the array's element type - compiler knows what to expect.

//for(int element : array){
//cout<< element << "  ";

