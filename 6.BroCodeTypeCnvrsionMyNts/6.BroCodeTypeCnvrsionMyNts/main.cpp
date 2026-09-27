#include <iostream>
using namespace std;



int main() {

	//Type conversion = conversion of a value of one data type to another.
	//Implicit = automatic
	//Explicit = precede value with new data type (int)

	//These are examples of  implicit - automatic.
	//Declare an int var x and initialize it to 3.14
	//CODE:
	int x = 3.14;

	double y = 3.14;
	
	//This converts 3.14 to an integer then is stored in the double z (as 3)
	//This is explicit (precede value with new data type (int)
	//Declare double z variable and explicitly set it to an int var 3.14
	//CODE:
	double z = (int)3.14;

	//Declare a char var a and set it equal to a number
	//CODE:
	char a = 100;

	//Output the above information to the screen.
	//CODE:
	cout << x << endl;//-> So here the x value gets truncated since we'e dealing with an int.
	cout << y << endl;//->Here the decimal is accounted for

	cout << a << endl;//-> So we will implicitly caste 100 as a character. We will convert it using 
	//acci table to whatever its equivalent is. If 100 is converted into a character it would be letter "d"

	//Explicitly cast the number 100 to a character which again is the letter d using the data type char
	//and 100.
	//CODE:
	cout << (char) 100 << endl;

	
	//Write code that calculates a students test score.
	//Declare an int variable correct to represent the right answers and initialize it to 8
	//CODE:
	int correct = 8;

	//Declare a variable questions to represent total number of questions and initialize it to 10
	//CODE:
	int questions = 10;

	//Assign a double variable score to the expression of correct divided by questions * 100
	//CODE:
	double score = correct / questions * 100;
	
	//Assign another double var score2 to the expression of correct divided by questions but in
	//this case use conversion (cast) to set "questions" var to a double to pick up the decimal.
	//CODE:
	double score2 = correct / (double)questions * 100;

	//We first use int data type and so questions is of the int data type and so get a truncated version 
	//of the answer since we got rid of the decimal (which was .8) and the basis of what we were trying
	//to find. So when we cast questions as a double data type we retrain the decimal portion and so 
	//the correct answer which is 80% (.80)

	cout << "Your score is: " << score << "%" << endl;
	cout << "Your score is: " << score2 << endl;

	return 0;

}