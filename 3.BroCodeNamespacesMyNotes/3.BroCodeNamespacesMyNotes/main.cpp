#include<iostream>
using namespace std;


//Using namespace std is not evil when learning coding logic. It save a ton of time on something
//an AI can run through and fix when you finish your program. Use it!

//These are global versions/variables that can be accessed from main.
//Declare namespace var first and set int x to 1 in codeblock.
//CODE:
namespace first {

	int x = 1;
}

//Do same for namespace second codeblock setting int x to 2.
//CODE:
namespace second {

	int x = 2;
}

//Same for third and x to 3
//CODE:
namespace third {

	int x = 3;
}

//Declare main program int main(){}
//CODE:

int main() {

	//Namespace = provides a solution for preventing name conflicts in large projects. Each entity 
	//needs a unique name. A namespace allows for identically named entities as long as the
	//namespaces are different.

	//Each entity needs its own unique name. With namespace two or more entities can share
	//the same name. This is a local variable and can only be accessed in main. Declare an
	//int variable x initialized to 0.
	//CODE:
	int x = 0;

	//Output the above local variable x to the screen with a new line after.
	//CODE:
	cout << x << endl;

	//Use the global variable outside main used to define namespace definitions (first,second,third)
	//earlier values outside main. Use "first" with :: -> scope resolution operator allows you to 
	//access global variables outside main. This is prefixing the namespace. And use scope resolution
	//operator. It tells computer to look in global space outside main to access "first" version of
	//x that is found within the first namespace.
	//Output first and second x to the screen.
	//CODE:
	cout << first::x << endl;
	cout << second::x << endl;

	//So entities can have the same name so long as their within a different namespace.

	//If we have an entity without the prefix of namespace it is assumed that we are trying to
	//use the entity used in that particular namespace when wrote like below. 
	//Using "using namespace third" and every x following that (assuming there are no modifications
	//to x in between the computer will know to use the namespace third located outside main.
	//put declare "third" by "using namespace" in front of it.
	//CODE:
	using namespace third;

	cout << x << endl;

	//**So this would work within local using namespace third but if you then wanted to use the second 
	//value of x you would have to prefix it.

}