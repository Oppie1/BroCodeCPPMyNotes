#include<iostream>
using namespace std;



int main() {


	//Declare a two dimensional string array named procedure with an array that 
	//contains three one dimensional arrays. 3 rows by 3 columns. In the the array
	//declarator/dimension specifier "[]" the first dimension (rows here) can be an 
	//unspecified size. The second dimension has a size of 3 ->[3]. Use words from
	//category of your choosing. -> healthcare, cars, schools, etc.
	string procedure[][3] = {{"Trocar","Canula","Laparoscope"},
						{"Colon", "Heart", "Appendix"},
						{"Light Source", "Varus Needle", "Probe"} };

	//Declare an int variable named row initialized to an expression using the sizeof()
	//function with argument of the entire procedure array divided by one array of
	//the procedure multidimensional array using the sizeof() with an element of 
	//procedure as argument. Just taking the total byte size of the multi 
	//dimensional array and dividing it by one of the arrays within the 
	//multidimensional array.
	//CODE:
	int rows = sizeof(procedure) / sizeof(procedure[0]);

	//Declare a variable named columns initialized to the size of ONE array
	//of the multidimensional array procedure divided by an element of that array
	//within the multidimensional array.
	//CODE:
	int column = sizeof(procedure[0]) / sizeof(procedure[0][0]);

	//Use an for loop with a nested for loop within it to print all the values within the
	//multidimensional array to the screen.

	//First use an outer for loop to represent rows. Initialize the counting variable
	//i to0, i (iteration continues) when the current value of i is less than the total
	//number of rows, increment i by 1 after each iteration.
	//CODE:
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < column; j++) {

			cout << procedure[i][j] << " ";
		}

		cout << '\n';

	}

	//Use a nested for loop to print out each value of the column within the current
	//row/iteration program is in. initialize another counting/iteration variable
	//j to 0, in control so long is j is less than the total columns (3 here) the
	//code block prints the current value of the element at position i (row i) and
	//(column j) of the procedure array. Include a space within each.
	//CODE:
	

	//After nested for loop print a new line to separate the rows.
	//CODE:
		
	
}