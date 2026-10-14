#include<iostream>
using namespace std;



int main() {

	//Declare two uninitialized integer variables rows and columns. Then a third char
	//variable named symbol to use to show the rows and columns to the screen.
	//CODE:
	int rows;
	int columns;
	char symbol;


	cout << "How many rows" << endl;
	
	//Input the number of rows you would like and store in rows variable.
	//CODE:
	cin >> rows;

	cout << "How many columns" << endl;
	
	//Input the number of columns you would like and store in column variable.
	//CODE:
	cin >> columns;

	cout << "Enter a symbol to use " << endl;

	//Input the symbol you would like and store it in the char symbol variable.
	//CODE:
	cin >> symbol;

	//Use a for loop initializing the int variable i to 1, i less than or equal to the rows, increment i by 1.
	//You can also just set i to 0 and use the less than sign comparing the rows entered.
	// 
	//CODE:
	for (int i = 0; i < rows; i++) {
		
//Use nested for loop, initialize int var j to 1, j less than or equal to rows  (or use 0 for j and just less than sign).
//and increment j by 1.Then print the symbol/(variable) to the screen. What happens here is that
// fully execute we go back and iterate through the   a symbol is printed in row 1,
//column 1. Then because the nested for loop must nested column loop and print another symbol, 
// then again same row 3rd column and so on until j(iteration) is less than column that the user entered. 
// IMPORTANT: Make sure you print on SAME
// line for the nested loop. If you add a new line you defeat the purpose of having a for loop 
// for the rows.
	//CODE:
		for (int j = 0; j < columns; j++) {

			cout << symbol;
		}

		//Lastly, when the nested column for loop has fully executed and the program returns to the
		//outer "rows" for loop print a new line so program can print the symbol on the next row and
		//then each column when it falls back into the nested for loop. This will cause the program
		//to print across the second row and in each column a symbol int he same way as it did for 
		//the symbol in the first row.
		//CODE:

		cout << endl;
	}

}