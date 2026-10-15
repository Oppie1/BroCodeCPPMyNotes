#include<iostream>
#include<ctime>
using namespace std;


int main() {

	//Use srand() function seed the random number generator. Use time() with 0 as its argument.
	//Using time insures the results are truly random.
	//CODE:
	srand(time(0));

	//Declare a variable and assign it to the expression of the rand() modulus 5 and add 1.
	//What this does is gives us a random number and divides it by 5. We use 5 because we have
	//5 cases to chose from. When you divide say a random number for example 37 by 5 we get 7 since
	//5 * 7 is 35. Because we use modulus we just take the remainder which would be 2. We then add
	//the one to take care of any instances where there would be no remainder. So here it would be
	//2+1 = 3. So case 3 would be selected and "You win a free lunch" is printed to the screen.
	//Again, we add 1 so if say the random number were 35 instead of 37 and we use the modulus 
	//operator we would have 0 as our remainder. Which wouldnt match up with any of the cases.
	//So random number were 35 and so 0 remainder we just add 1 (0+1=1) and it would trigger case 1 
	//"You win a t-shirt" to be printed to the scrren.
	//CODE:
	int randNum = rand() % 5 + 1;

	//Use a switch statement with the variable randNum as its argument.
	//CODE:
	switch (randNum) 
	
		//Within the switch codeblock think of 5 cases where the user could win something and print
		//a message saying what they won out to the screen. Don't for get to use the key word break
		//after each case to prevent fallthrough to next case when one is already selected.
		//CODE:
	{


	case 1: cout << "You win a t-shirt\n";
		break;

	case 2: cout << "You win a bumper sticker!\n";
		break;

	case 3: cout << "You win a free lunch!\n";
		break;

	case 4: cout << "You win a gift card!\n";
		break;

	case 5: cout << "You win concert tickets\n";
		break;

	
	}
}