#include<iostream>
using namespace std;



//function = block of reusable code.

//Create a void function named happy birthday with the parameters of a string for the name
//and an integer for the age. This is called a function prototype.
//CODE:
void happyBirthday(string name, int age);

int main() {
	
	//Declare a string variable called name and initialize it to Claudia.
	//CODE:
	string name = "Claudia";
	
	//Declare a integer variable called age and initialize it to 45
	//CODE:
	int age = 45;

	//Call the function happyBirthday with the arguments of name and age.
	//CODE:
	happyBirthday(name, age);


}


//Define the happyBirthday function.
//CODE:
void happyBirthday(string name, int age) {

	//Within the codeblock for the happyBithday() funciton print a message that says happy Birthday to
	//and then use the name variable that will print out to the screen. Do this 4 times
	//CODE:
	cout << "Happy Birthday to " << name << '\n' << endl;
	cout << "Happy Birthday to " << name << '\n' << endl;
	cout << "Happy Birthday to " << name << '\n' << endl;
	cout << "Happy Birthday to " << name << '\n' << endl;

	//Now include a line of code that prints the age out to the screen in a complete sentence on one line.
	//Make sure it is a complete sentence -> you are(age variable) years old
	cout << "You are " << age << " years old" << endl;

}