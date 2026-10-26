#include<iostream>
using namespace std;



//Declare a void sort() function declaration with the first parameter being
//an int array and the second an int variable to represent size.
//CODE:
void sort(int array[], int size);



int main() {

	//Declare a integer array[] initialized to 4 random numbers make sure they
	//are not in a sequence as they will be sorted later.
	//CODE:

	int array[] = { 10, 1, 9, 4 };

	//Declare an int array[] initialized to an expression using sizeof()
	// with "array" as its argument divided by sizeof() one of the array 
	// element [0]
	//CODE:
	int size = sizeof(array) / sizeof(array[0]);

	cout << "\n\nNot sorted array\n";

	//Use a range based for loop that declares an uninitialized int element
	//that iterates over the array using ":". ":" means "in" or for each... in"/
	//So it will go like this -> for each int element -> : (in) -> 
	//-> array (container array to iterate through. Then goes to codeblock and prints
	//the element at given location and returns to condition that continues to scroll
	// through all the elements in the array.
	//CODE:
	for (int element : array) {

		cout << element << " ";
	}

	;

	cout << "\n--- Sorted Array Regular for loop ---\n" << endl;
	
	sort(array, size);

	for (int i = 0; i < size; i++) {

		cout << array[i]<<" ";
	}

	cout << '\n' << endl;

	cout << "\n---Range Based Sorted Array ---\n" << endl;

	for (int element : array) {

		cout << element << " ";
	}

	cout << endl;
}

//Define the void sort() function
//CODE:
void sort(int array[], int size) {

	//Declare an integer variable to hold temporary variable (temp).
	//CODE:
	int temp;

	//Use an outer for loop to iterate through the array and an inner loop with
	//an if statement to perform the bubble sort.
	//First use for loop and declare int i variable to 0; i is less than the size
	//of the array minus 1 -> The reason we use size - 1 is that we dont need to 
	//compare the last element to anything since the value to the left of the
	//last element would just move right if it is greater.
	//
	//EXAMPLE: So for our first element in the array we have 4. So when i = 0
	// the size is the array which is 4 elements minus one. So 10 is at the
	// 0 position and is comparted to 3 (the third index/4 elements) so the 
	// comparison is is 0 < 3? Yes, move on to next step in code which is the
	// nested for loop where we will compare the value (10) at index 0 1st element
	//to the next value second value (1) at index 1.
	// 
	// The reason that the condition to size - 1 is because we dont need to compare
	// the last value to anything. The larger numbers will naturally move to the
	// later part of the array.
	// 
	//Now back in the outer loop as the inner/nested loop has finished and program
	// has returned to outer loop we increment i by 1. So now i = 1. Then in the 
	//control portion of loop we have 1 < 4 - 1 -> 1<3? True, move back to nested loop.
	// 
	// The next step in outer loop is 2 < 3? Yes, return to nested loop with i = 2.
	// 
	// Finally during 4th iteration where i = 3 0> 3<3? False. The for loop and by
	// default the nested loop is skipped and program goes to next step. Which is
	// back in main where for a for/each / range based loop is used again to display
	// the now sorted contents of the for loop.
	// 
	//CODE:
	for (int i = 0; i < size - 1; i++) {

	//Use inner (nested) for loop to insure we dont sort elements that have already
	//been sorted. So for example -> 0 < size - 1 -> 0 < 4 - 0 - 1 = 0<3? True,
	//Move on to codeblock of for loop which is an if statement that will test
	//the actual element at that index location to the next element value at that
	//index location. So you are comparing index 0 element (10) to index 1 element (1) 
	// 
	//Back in the j side of the loop we have j = to 0 again since we are on a new
	// iteration of a for loop. The size is the same 4 - 1 - 1 so 2. We then ask
	// is 0 < 2? True, we move to the if statement with array[j] = array[j+1] ->
	// -> array[0] > array[1]. The difference now is tha out loop is sorted
	// Now is 1 < 4-1-1 (2)? True, go back to if statement.
	// With i = 3 is 3< 4-1(3)? False, the for loop fails and is skipped going 
	// to the next step in the program with the nested loop and its contents also
	// being skipped. So all this information is returned to the caller which is the
	// sort() back in main. The next step after that is to run a for/each/range based
	// loop to print out the newly sorted array contents.
	//
	//CODE:
		for (int j = 0; j < size - i - 1; j++) {

			//Within the above nested for loop we have an if statement that will test
			//the element value (10) located at index j(here 0) to see if it is greater
			//that the next element in the array (j+1). If it is then the if condition
			//will execute. Which it is since 10>1.
			//So now when j = 1 -> array[1] = 1 and array[1+1] = 2. Is 1>2? False
			// so we skipped the if condition and go straight back to the for loop and
			// increment j by 1.
			// with if condition array[1](9) > array[1+1](4)? True, execute if statement.
			//CODE:
			if (array[j] > array[j + 1]) {
		//Within the if condition codeblock we will have to assign the temp variable
		//to whatever is in the arrays first index location j which is 10. Since3
		//10 is located at index 0.
		// We assign/store the array[j] = array[9] = 9 in the temp variable.
				//CODE:
				temp = array[j];
				
				//Now that 10 is in the temp variable we ant to assign where 10 was
				//i.e. array[j] to the value to the right which is 1 since 10 was
				//greater. So when we say assign array[j] to array[j+1] we are just
				//saying array[j] = 1. So now 1 is at index location [0] which to 
				//humans is just the first position.
				//We assign array[j] to the array[j+1] so the 2 index location whos
				// value is 4 to the array position of array[1] index location. And so
				// now the second element is 4.
				//CODE:
				array[j] = array[j+1];
				
				//Now that we have that completed we need to fill in the index 
				//location 1 where the number 1 was located with what we stored
				//in the temp variable for this vary moment.
				//So array[j+1] the second spot in the array. Will now equal 10.
				////Finally we assign the array[j+1]/ array[2] or the third index
				// position. Now making 9 the third element. So Now the array looks
				// like this: {1,4,9,10} and we return to the outer for loop and 
				// increment i by one -> i++ = 2++ -> 2+1= 3 i now = 3.
				//CODE:
				array[j+1] = temp;

			//Now that the if condition has fully executed we move back into the nested
			//inner for loop and increment j by 1 and then test it again in the 
			//control section of the loop. So is j (1) < size(4) - i(0) - 1? So,
			//is 1 < 3? Yes, perform the if condition again. So,
			//if(array[j]>array[j+1])? So now j = 1 is at the 1 index of the array
			//the element at that position is now 10 so we do the comparison is 10
			//greater than 9? (array[j](10)> array[j+1](9)?) Yes, so we enter the if
			//statement code block and complete the same steps. We assign the temp
			//variable to 10 which is at position array[j](array[1]) then we assign
			//the position array[j] to array[j+1](9). Then finally we assign 
			//array[j+1] to what is in the temp variable so 10.
			//The array looks like this at this point: 1,9,10,4. Now we go back to 
			//nested for loop again and iterate j by 1 again so j = 2
			//So in the control we have is 2 < size(4) - 0 - 1? Is 2<3?  Yes, So now
			//We go to the if statement again and test
			//if(array[j - index 2](10)>a array[j+1 index 3]4? True, complete steps
			//in if condition so assign temp to 4 (array[j]),
			//array[j] to array[j+1] -> array[j+1] assigned to temp.
			//Then we go back to for loop and increment j by 1 again so j = 2++
			//j now equals 3 and so in the for loop is 3 < 4 - 0 -1 (is 3<3)
			//False, so the for loop fails and we we return to the outer for loop
			//and increment i by 1.
			}


		}
	}
}