#include <iostream>
#include <string>//Must include this library when inputing sentence and not just one word.
using namespace std;


//cout<<(insertion operator) cout to screen.
//cin>>(extraction operator) cin from user

int main() {

	//Declare an uninitialized string variable name to store a sentence.
	//CODE:
	string name;

	//Declare an uninitialized var name2 to store another sentence.
	//CODE:
	string name2;
	
	//Declare integer var to store age.
	//CODE:
	int age;

	cout << "What's your name " << endl;

	//Input first users name into program.
	//CODE:
	cin >> name;//-> Automatically an \n new line character.

	//Output the name to the screen.
	//CODE:
	cout << "Hello my name is " << name << endl;

	cout << "\nWhat is your full name?" << endl;

	//The getline keyword captures everything including white spaces so whole sentence not just one 
	//word read in. "ws" needed here because getline reads everything all the way to the newline
	//character above. Clears buffer.
	//Use getline to input users full name.
	getline(cin >> ws, name2);

	//Output statement that shows users full name to the screen.
	//CODE:
	cout << "\nMy full name is " << name2 << endl;

	cout << "\nHow old are you?" << endl;

	//Input users age using standard cin statement.
	//CODE:
	cin >> age;

	//Output users age to the screen.
	//CODE:
	cout << "User is " << age << " Years old." << endl;

	return 0;

}

//How does the below fit in to this tutorial?:
//cin.ignore();
//Needed here because getline reads everything all the way to the newline character from above. Clears buffer.