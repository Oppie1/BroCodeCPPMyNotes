#include<iostream>
using namespace std;



int main()
{
	//break -> break out of loop.
	//continue -> skip current iteration.

	//Use a for loop with int i = 1 i less than or equal to 20 and iterate i by 1.
	//CODE:
	for (int i = 1; i <= 20; i++) {

	//Within the the for loop codeblock use an if statement where i is equal to 13. Within
	//the if codeblock use a break; So long as the if condition is false (i = 1-12) the if
	//block is skipped and the number is printed to the screen. When true (i = 13) then the
	//break; is returned to the for loop and the for loop finishes (13-20 not printed.

	//Use an if condition that sets i equal to 13 and uses a break statement in the code block
		if (i == 13) {
			
			break;//This is returned to the for loop which breaks the loop and goes to next part in code.

		}

		cout << i << endl;//Keeps printing i until if condition is true.
	}

	cout << '\n';

	//Use a for loop with i = to 1, i is less than or equal to 20, and iterate i by 1.
	//CODE:
	for (int i = 1; i <= 20; i++) {
		
	//Here we use the if condition and set i equal to 13. Unlike the break statement where we break
	//out of the for loop we use the continue; keyword which skips the current iteration and goes
	//to next iteration where the code keeps printing the numbers until i <= 20 and stops. So
	//the for loop continues to print and just skips the number 13.
	
		//Use an if condition with the continue keyword that does this.
		if (i == 13) {

			continue;

		}

		//Within the for loop keep printing i out until the for control of the for loop is false.
		//CODE.
		cout << i << endl;
	}
}