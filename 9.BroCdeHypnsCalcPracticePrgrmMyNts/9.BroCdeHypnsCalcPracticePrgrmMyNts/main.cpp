#include <iostream>
#include<cmath>
using namespace std;


int main() {

	//Declare 3 double variables a, b and c.
	//CODE:
	double a;
	double b;
	double c;

	cout << "Enter side A ";

	//Input a variable to screen.
	//CODE:
	cin >> a;

	cout << "\nEnter side B ";
	
	//Input b var to screen.
	//CODE:
	cin >> b;

	//Assign a variable to pow() with a and 2 as parameters.
	//CODE:
	a = pow(a, 3);

	//Output a variable to screen.
	//CODE:
	cout << "\n" << a <<"\n"<< endl;
	
	//Assign b var to pow() with b and 3 as parameters.
	//CODE:
	b = pow(b, 3);

	//Output b var to screen.
	//CODE:
	cout << "\n"<< b <<"\n"<< endl;

	//Assign variable c to the square root function with the value of adding both of the
	//pow() to the screen.
	//CODE:
	c = sqrt(pow(a, 3) + pow(b, 3));

	//Output c to the screen.
	//CODE:

	cout << "side C " << c << endl;

	//Now assign c again to the sqrt() with a + b as its parameters.
	//CODE:

	c = sqrt(a + b);

	//Output c to the screen.
	//CODE:
	cout << c;
}