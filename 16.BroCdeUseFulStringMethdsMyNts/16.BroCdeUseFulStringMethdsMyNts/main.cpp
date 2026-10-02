#include<iostream>
#include<string>
using namespace std;


int main() {

	//Declare uninitialized string name.
	//CODE:
	string name;

	cout << "Enter your name:\n";
	
	//Use getline() call with arguments cin and name to bring in name from user.
	//CODE:
	getline(cin, name);

	//Use if statement with name object with length() function call to see if the name is greater than
	//12 characters. The print name cant be more than 12 characters to the screen.
	//CODE:
	if (name.length() > 12) {

		cout << "\nYour name cannot be over 12 characters long ";
	}

	//Use else statement to welcome the user by printing Welcome and name variable to screen.
	//CODE:
	else {

		cout << "Welcome " << name << endl;
	}

	cout << "\n\nEnter your name example number 2 type name\n";

	//Call getline function to bring in the name.
	//CODE:
	getline(cin, name);

	//Use if statement with empty function called on the object name to see if user entered their name.
	//Print to screen if true that they did not enter name to screen.
	//CODE:
	if (name.empty()) {

		cout << "You didnt enter your name\n";
	}

	//Use else statement to say hello to the user.
	//CODE:y
	else {

		cout << "Hello " << name << endl;
	}

	cout << "\n\nEnter your name example number 3 type name\n" << endl;
	//Use getline() call to bring in user name.
	//CODE:
	getline(cin, name);

	//Use call clear() on variable(obj) name and output Hello and var name to the screen to see what happens.
	//CODE:
	name.clear();
	cout << "Hello " << name;
	
	cout << "\n\nEnter your name example number 4 type name\n";
	
	//Use getline() call to bring in name to the program.
	//CODE:
	getline(cin, name);

	//Call append() function on the variable name to add email address to name.
	//CODE:
	name.append("@gmail.com");

	//Show new username with appended gmail added to end of name to the screen.
	//CODE:
	cout << "Hello your full user name is now: " << name << endl;

	cout << "\n\nEnter your user name example number type name 5\n";
	
	//Use getline() to bring in name and then display your user name to screen using at() with 1
	//as argument on the name variable(obj). This should print out the second letter in the 
	// string index (0 is first) so d will print to screen.
	//CODE:
	getline(cin, name);

	cout << name.at(1);

	cout << "\n\nEnter your name example number 6 type name\n";

	//Use getline() to bring in and store user entry in name.
	//CODE:
	getline(cin, name);

	//Call the insert() on name with arguments 0, "@" to insert 0 where the @ symbol is in name
	// and then display name to the screen. Will insert just @ in front of Adam
	//CODE:
	name.insert(0, "@");
	cout << name;

	cout << "\n\nEnter your name example number 7 type full name with space.\n";
	
	//Use getline() to bring in name again.
	//CODE:
	getline(cin, name);

	//Use find function to locate the space ' ' to the screen in one line of code.
	//CODE:
	cout << name.find(' ');

	cout << "\n\nEnter your name example number 8 enter name:\n";

	//Use getline function to bring in name to name variable.
	//CODE:
	getline(cin, name);

	//Call erase function with arguments 0 and 3 to erase. This just means start at 0 and count to 
	// the third index and erase to that point. So if you entered Adam only m would be displayed.
	//CODE:
	name.erase(0, 3);
	cout << name;


}