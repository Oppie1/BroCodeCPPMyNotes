#include<iostream>
using namespace std;



int main() {


	//Seed the random number generator with time. Use the srand() function with the argument
	//of time() with its own argument of NULL. Now when you use the rand() function it will
	//produce a truly random number.
	//CODE:
	srand(time(NULL));

	//Declare three int variables name num1, num2 and num3. Initialize them to a random number 
	//Modulus 6 and add 1. This just takes whatever numer that was produce by the rand() function
	//and divides by 6 but only keeps the remainder. We add 1 to account for instances where 6 evenly
	//goes into a given number so that we have a final number of 1-6. This could be useful for a dice
	//game or something similar. So if random number was 20 -> 20/6 = 3 with 2 as a remainder. So we 
	//would end up with 3 as our number. So if the rand() produced the number 18 whenre 6 would go into
	//that number evenly -> 18/6 = 3 which has 0 as its remainder after we add 1 to the expression we
	//would have the number 1 as our final number.
	//CODE:

	int num1 = (rand() % 6) + 1;
	int num2 = (rand() % 6) + 1;
	int num3 = (rand() % 6) + 1;

	//Print all three number outputs on their own line to the screen.
	//CODE:
	cout << num1 << '\n';
	cout << num2 << '\n';
	cout << num3 << '\n';



}