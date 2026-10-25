#include<iostream>
#include<string>
using namespace std;


//Multidimensional arrays - Here a 2D array. They are arrays made up of
//arrays. Useful because they can represent a grid or matrix of data.

int main() {

	//Declare a string array named cars. Because it is a two dimensional 
	//array two sets of square brackets are needed. The first set of square
	//brackets represents rows and the second st of square brackets represent
	//columns. Make the 2D array 1 row by  3 columns. Do not need to set 
	//row size but do need to set column size. Make 3 arrays representing
	//three cars per array from different makers.
	//CODE:
	string cars[][3] = { {"Mustang", "Escape", "F-150"},
	{"Corvette","Equinox","Silverado" },
	{ "Challenger", "Durango","Ram 1500" }};

	//Declare a variable named rows initialized to the size of the cars array
	//divided by one element of that array. Use sizeof() function with cars/cars[0]
	//as the arguments.
	//CODE:
	int rows = sizeof(cars) / sizeof(cars[0]);

	//Declare a variable named column initialized to the sizeof() one row
	//(3 strings) of the array divided by one element of that row. So
	//3 (again number of strings) divided by 1 element/string gives you 3 columns.
	//CODE:
	int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

	//If we need to iterate over a 2D array we can use nested loops.
	//Create two for loops. One that will represent the cars in a row and
	//the next cars in three columns. So will have an array of one row that
	//that prints all the cars by maker on 3 separate lines..
	//CODE:
	for (int i = 0; i < rows; i++) {
	
	//Then nested for loop to represent the columns.
	//CODE:
		for (int j = 0; j < columns; j++) {

		//The code in the nested for loop codeblock should contain an output
		//statement that scrolls through each column within each row. So use
		//i variable from outer for loop and j variable for nested loop. As
		//Usual for arrays you will use square brackets. Print out on one line
		//at a time for each maker.
	//CODE:
			cout << cars[i][j] << " ";
		}

	//When j(nested column loop) executes fully, (j iterates 3 times) the program
	//returns to outer for loop. Print a line here so that the program goes to 
	//next row. This will return to the row for loop.
	//CODE:
		cout << '\n';
	}

	cout << "\n---Second Example---\n" << endl;

	//Print out all the array elements (cars). Printing out each
	//car manufacturer on one line. So will have 3 lines total.
	//CODE:

	cout << cars[0][0] << " ";
	cout << cars[0][1] << " ";
	cout << cars[0][2] << " \n";
	cout << cars[1][0] << " ";
	cout << cars[1][1] << " ";
	cout << cars[1][2] << " \n";
	cout << cars[2][0] << " ";
	cout << cars[2][1] << " ";
	cout << cars[2][2] << " ";

	cout << "\n ------------------- " << endl;

}