#include<iostream>
using namespace std;



//Create a void function prototype called printNum that carries an integer parameter called myNum2
//CODE:
void printNum2(int myNum2); //Global variable

void printNum3(int myNum3);


int main()
{

	//Local variables = declared inside a function or block {  }
	//Global variables = declared outside of all functions

	//Declare an integer variable named myNum and initialize it to 1.
	//CODE:
	int myNum = 1; //local variable

	//Output the myNum variable you just created to the screen.
	//CODE:
	cout << myNum << endl;

	//Call the printNum2 function (global function) with myNum as its argument which contains "myNumA" 
	//as its own local variable. A copy of this argument will be passed to the functions parameter as (1)
	//Important: the "myNum" integer variable must be used as it exsits within main. There is no "myNumA"
	// in main. What happens is that the myNum is passed into the printNum2 functions parameter(int myNum2)
	// from there the int myNumA = 3; overwirte/shadows the parameter myNum2 -> now (1) that gets used. 
	// So when called myNumA = 3 is used. 3 Is printed to screen.
	//CODE:
	printNum2(myNum);

	//Call the printNum3 global function with myNum as its argument. Same thing myNum must be used because
	//it exists locally in main. When we use a function we use the local variable as the parameter and is
	//the placeholder for that same shadow variable within the function. You NEED to have the local variable
	//of some sort or data type for the function to work. What is returned is the execution from the functions
	// that exist outside main.
	//CODE:
	printNum3(myNum);

	return 0;

}

//Define the printNum2 function with appropriate parameters.  Then within the codeBlock make the function
//have its own local int variable and set it equal to 3. Then show this variable to the screen. Again, what
//happens when called from main is this executes and retruns to the position of the caller.
//CODE:
void printNum2(int myNum2) {

	int myNumA = 3;

	cout << myNumA << endl;;
}

//Define printNum3(int myNum3) parameter. Then within the codeBlock make the function have its own local
//int variable and set it equal to 7. Then show this variable to the screen. Again, what happens when called
//from main is this executes and returns to the position of the caller.
//CODE:
void printNum3(int myNum3) {

	int myNumB = 7;

	cout << myNumB << endl;
}