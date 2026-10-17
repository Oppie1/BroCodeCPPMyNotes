#include<iostream>
using namespace std;



//foreach loop = loop that eases the traversal over an iterable data set.

int main() {

	
	cout<<"Part 1: Using string array named students iterate over 4 names using foreach loop"<<'\n'<<endl;

	//Create a string array named students with 4 names.
	//CODE:
	string students[] = { "SpongeBob", "Patrick", "Squidward", "Sandy" };

	//Use a foreach loop to iterate over students array using the current element we are on. Here we
	//will just name it string student (generic element). Use a colon and the iterable array students.
	//During each iteration display what the current element is so student each on a new line.
	//CODE:
	for (string student : students) {

		cout << student << endl;
	}

	cout << "\n**************************************************************************\n";
		cout << "Part two: Do same operation with an int data type following same process as above " << endl;
	
	//Use int data type and a grades[] array initialized to 4 grades.
	//CODE:
	int grades[] = { 65,72,81,93 };

	//Use a for each loop to iterate over all of the grades and print the grades on same line with spaces.
	//CODE:
	for (int grade : grades) {

		cout << grade << "  ";
	}

	cout << endl;

}