#include<iostream>
using namespace std;


int main() {

	//Arithmetic operators = return the result of a specific arithmetic operation. (+ - * /)

	//Declare integer studentClasses1-11 initialized to increasing by 5 for each class.
	//CODE:
	int students = 20;
	int studentsClass2 = 23;
	int studentsClass3 = 25;

	int studentsClass4 = 30;
	int studentsClass5 = 40;
	int studentsClass6 = 50;

	int studentsClass7 = 60;
	int studentsClass8 = 70;


	int studentsClass9 = 80;
	int studentsClass10 = 90;
	int studentsClass11 = 100;

	//Declare a double studentClass112 initialized to 100.
	//CODE:
	double studentsClass12 = 100;

	//Declare an int remainder initialized to 99.
	int remainder = 99;

	//Assign the remainder variable to the expression students var modulus % 2.
	//Using modulus operator shows just the remainder.
	//CODE:
	remainder = students % 2;

	//Output the remainder to the screen. So here there would be 0 remainder.
	//CODE:
	cout << remainder << endl;

	//Now assign the remainder to expression students % 3.
	//CODE:
	remainder = students % 3;

	//Output the new remainder to the screen. Here you will get 2 as the remainder.
	//CODE:
	cout << remainder << endl;

	//Using modulus operator is a great way to find out if something is even/odd just do modulus % 2
	//If it is a whole number you know that it is even.  0 remainder = even. 1 remainder = odd.

	//Assign the students variable to students + 1 -> 20 + 1 = 21
	//CODE:
	students = students + 1;

	//Assign studentsClass2 equal to +=1. This means students = students + 1; students = 23 + 1 = 24
	//CODE:
	students += 1;

	//Assign studentsClass3 to studentsClass3++ which just means iterate the var by 1s
	//CODE:
	studentsClass3++;

	//Assign studentsClass4 to studentsClass4 = studentsClass4 - 2; = 20 - 2 =28;
	//CODE:
	studentsClass4 = studentsClass4 - 2;

	//Assign studentsClass5 to -= 2 -> 38
	//CODE:
	studentsClass5 -= 2; 

	//Assign studentClass6-- -> just means add one (iterate one)
	//CODE:
	studentsClass6--;

	//Now go ahead and ouput all the information above on separate lines.
	//CODE:
	cout << students << endl;
	cout << studentsClass2 << endl;
	cout << studentsClass3 << endl;

	cout << studentsClass4 << endl;
	cout << studentsClass5 << endl;
	cout << studentsClass6 << endl;

	//Assign studentClass7 bto the expression of studentsClass 7 * 2
	//CODE:
	studentsClass7 = studentsClass7 * 2;

	//Assign studentsClass8 to *= 2 Meaning just multiply by 2 and give me the solution
	//CODE:
	studentsClass8 *=2;

	//Output the last two expressions to the screen (sC7 and sC8) on two separate lines.
	//CODE:
	cout << studentsClass7 << endl;
	cout << studentsClass8 << endl;

	//Use the division / operator with studentClass9-12 

	//Assign studentClass9 = studentClass9/2
	//CODE:
	studentsClass9 = studentsClass9 / 2;

	//sC10 -> Assign to /=2
	//CODE:
	studentsClass10 /= 2;

	//Assign ->sC11 -> assign to sC11 = sC11/3;
	//CODE:
	studentsClass11 = studentsClass11 / 3;

	//Assign -> sC12 = sC12 / 3 -> Because this is a double it will give decimal (4 dec places)
	//CODE:
	studentsClass12 = studentsClass12 / 3;

	//Output the above sC9-12 information to the screen on same line with a space between each solution.
	//CODE:
	cout << studentsClass9 << " " << studentsClass10 << " " << studentsClass11 << " " << studentsClass12 << endl;


	//These arithmetic operators have an order of precedence:
	//Parenthesis -> multiplication -> division -> addition -> subtraction. (PEDMAS)

	//Assign an int variable people to an expression using all operators without parenthesis included.
	//CODE:
	int people = 6 - 5 + 4 * 3 / 2;

	//Now assign a new int var people2 to the exact same expression but put a parenthesis to show difference.
	////Since people2 is an int there will be no decimal.
	//CODE:
	int people2 = 6 - (5 + 4) * 3 / 2;

	//Output people1 and people2 answer to the screen on different lines.
	//CODE:
	cout << people << endl;

	cout << people2 << endl;
}