#include<iostream>
#include<string>
using namespace std;



int main() {
	
	//Declare a uninitialized string variable called name.
	string name;

	//Use a while loop with the empty() function being called on the name variable(obj)
	//to request user to enter their name, bring in that name using the getline(,) within the
	// while codeblock. If the while loop is true and they entered something display hello and their 
	//name to the screen. Hint: next codeblock in main.
	while (name.empty()) {//This says so long as name is empty run this loop.

		cout << "Enter you name: ";

		getline(cin, name);//If this is empty run this loop again.
		//If not, meaning you entered a name, move to the next code block.

	}

	cout << "Hello " << name;
}

//Demonstrates an infinite loop via a while loop statement.
//While (1==1){

//cout<<"Help! I am stuck in an infinite loop" << endl;