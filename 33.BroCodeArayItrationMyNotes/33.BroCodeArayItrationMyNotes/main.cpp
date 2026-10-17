#include <iostream>
using namespace std;



int main() {

	
	cout << "Part One: Print Grades A-F to the screen with each character on its own line\n\n";

	//Make a char array to hold grades A-F;
	//CODE:
	char grades[] = { 'A','B','C', 'D', 'F' };

	//Use a for loop to scroll through all the grades over as many iterations as necessary.
	//To do this you will need to use the size of function to divide the sizeof() the grades
	//array by the sizeof() one char element. Print to screen on different lines.
	//CODE:
	for (int i = 0; i < sizeof(grades) / sizeof(char); i++) {

		cout << grades[i] << '\n';
	}

	cout << "\n********************************************************************\n";

	//Create a string array named students with 4 names/elements.
	//CODE:
	string students[] = { "SpongeBob","Patrick","Squidward","Sandy" };

	cout << "Part Two - Print names to screen using index locations and on each line\n\n";

	//CODE:
	cout << students[0] << endl;
	cout << students[1] << endl;
	cout << students[2] << endl;
	cout << students[3] << endl;

	cout << "\n********************************************************************\n";
	cout << "Part Three - Print names to screen using a for loop\n\n";

	//You will have to use the sizeof() function to divide the sizeof() the array by the
	//sizeof each element. Display each name to screen over 4 iterations on same line with space
	//between each name.
	//CODE:

	for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {

		cout << students[i] << "  ";

	}

	cout << endl;

	return 0;
}
