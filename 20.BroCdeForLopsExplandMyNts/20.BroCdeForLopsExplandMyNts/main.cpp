#include <iostream>
using namespace std;



int main() {

	//Declare a for loop with integer variable index initialized to 1 within the for condition (), test
	//whether index is <=3 within the control (second part) and then iterate the index by 1 (third part)
	//Then within the for loops code block output "Happy New Year" Which should print out 3 times to screen.
	//CODE:
	for (int index = 1; index <= 3; index++) {

		cout << "Happy New Year" << endl;
	}
	
	//Print a line in between each for loop.
	//CODE:
	cout << endl;

	//Declare a for loop with int variable i initialized to 1 within the for condition (), test whether 
	//i is <=3 within the control (second part) and then iterate the index by 1 (third part). Then within
	//the for loops code block output "Happy New Year" which should print three times to screen.
	for (int i = 1; i <= 3; i++) {

		cout << "Happy New Year" << endl;
	}

	//Print a line between each for loop.
	//CODE:
	cout << endl;

	//Declare for loop with int i initialized to 1, i less than or equal to 5, then iterate by 1.
	//Then output Happy New Year to screen in the following codeblock. Should print 5 times.
	//CODE:
	for (int i = 1; i <= 5; i++) {

		cout << "Happy New Year" << endl;
	}

	cout << "\n";

	//Declare a for loop with int i set to 1, i less than or equal to 10; iterate i by 1.
	//Then within the codeblock print the value of i out to the screen. So this for loop will 
	//print a number during each iteration until the final iteration which is 10. At this point
	//the for loop will stop having printed 1-10 to screen. After the for loop code block print 
	//Happy new year to the screen. Should only print once.
	//CODE:
	for (int i = 1; i <= 10; i++) {
		
		cout << i << '\n';
	}

	cout << "Happy New Year." << endl;

	cout << endl;

	//Declare the same for loop with i to 1, i <= 10, but iterate by 2 instead of 1. The within
	//code block print i to the screen on one line. So here the number 1 will print out to the
	//screen as it is the first number. Then it will iterate by 2 so 2 will be skipped the i 
	//will equal 3 and will be tested in the for loop and will print 3 to screen. Then iterate
	//by 2 again which will mean i = 5 which will go back through for loop and be printed to the
	//screen. This will happen until i = 11 and so loop will fail and it will go onto next part
	//of code. Which here is again to print Happy New Year after code block. 
	//Should print ->13579 Happy New Year on one line to screen.
	//**To print on one line just forgo  << '\n' or endl; (new line character). So just i;
	//CODE:
	for (int i = 1; i <= 10; i += 2) {

		cout << i;
	}

	cout << " Happy new year" << endl;

	cout << endl;


	//Declare another  for loop but initialize int i to 0 (computers start counting for 0 unlike humans 
	//which start at 1). In control i<=10, iterate by 3. Then print i to screen on new line each time.
	//So 0 should be printed first followed by 3,6 and 9. i will iterate to 12 after the 9 and will fail
	//the control condition and the for loop will stop. Then after block print Happy New Year.
	//CODE:
	for (int i = 0; i <= 10; i += 3) {

		cout << i << '\n';
	}

	cout << "Happy New Year" << endl;

	cout << endl;

	//Declare another for loop and initialize i to 10. Here we will show how to count down using the
	//for loop. We set the control to i is greater than or equal to 0 but this time deincrement by 1 using
	//the deincrement operator (--) -> i--. Then print i out to the screen. Should count down 109876543210
	//Outside the for loop code block print Happy New Year which should come after count down on new line.
	//CODE:
	for (int i = 10; i >= 0; i--) {

		cout << i << endl;
	}

	cout << "Happy New Year" << endl;

	cout << endl;

	//Declare for loop initialized i to 10, i is greater than or equal to 0 but this time deincrement by 2 (-=)
	//Print i to screen on one line with Happy new  year. Should be 1086420 Happy New Year.
	//CODEL
	for (int i = 10; i >= 0; i -= 2) {

		cout << i;
	}

	cout << " Happy New Year" << endl;

}