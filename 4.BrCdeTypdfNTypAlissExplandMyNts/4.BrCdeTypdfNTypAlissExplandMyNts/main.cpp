#include <iostream>
#include<vector>
using namespace std;


//typedef vector::pair::string, int>>pairlist_t
//can use typedef as a shorthand identifier to represent whole line of code.
//t = type
//typedef string test_t; //So here we could use text_t to represent string
//Show a way to replace using namespace std using this logic using text_t = std::string.
//By doing this you can just use the text_t variable throughout program.
//CODE:
using text_t = std::string;
using number_t = int;
using std::cout;

int main() {

	//So below we can replace with this data type with something a bit shorter
	//****std::string firstName -> change to below. So now the variable will behave like a string.
	//Use text_t to make a string var.
	//CODE:
	text_t firstName = "Adam";

	//Now use number_t to create an integer variable for age.
	//CODE:
	number_t age = 21;

	cout << firstName << endl;
	cout << age << endl;

	/*Typedef = reserved keyword used to create an additional name (alias) for another data type.
	New identifier for an existing type. Helps with readability and reduces typos use when
	there is a clear benefit. Replaced with using (works better w? templates*/

	//std::vector<std::pair<std::string in>>pairlist.

	//So here rather than writing that whole line of code above we can just use pairlist_t pairlist
	//pairlist_t pairlist.
	//Helps with readability and limits typos
	return 0;

}