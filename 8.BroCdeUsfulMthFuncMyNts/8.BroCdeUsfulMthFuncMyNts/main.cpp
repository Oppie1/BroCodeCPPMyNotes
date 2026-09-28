#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	//Declare 8 double variables a-i and set 2 to whole numbers, 3 uninitilized and
	//3 to decimal values.
	//CODE:
	
	double a;
	double b;
	double z;
	double c = 3.14;
	double d = 3.14;
	double e = 3.99;
	double f = 3;
	double g = 4;

	//Assign variable z to the max function with f and g as parameters.
	//This line just compares 3 and 4 to determine which is larger.
	//CODE:
	z = max(f, g);

	//Output z to screen to see what value is larger.
	//CODE:
	cout << z << endl;//So 4 is larger

	//Assign variable z to the function min() with f and g as parameters.
	//CODE:
	z = min(f, g);//This line compares 3 and 4 to see which is smaller

	//Output z to screen to see which value is smaller.
	cout << z << endl;

	//The cmath library above gives us the pow function. Use the pow() with the 
	//parameters 2 and for to figure out what 2 raised to the power of 4 is. 
	//Assign the value of that expression to g variable.
	//CODE:
	g = pow(2, 4);

	//Do the same for the values 2 raised to the power of 3 using pow() and assign to f var.
	//CODE:
	f = pow(2, 3);

	//Output variables f and g to screen.
	//CODE:
	cout << f << endl;
	cout << g << endl;

	//Use the sqrt() with the parameter of 9 to assign a variable to result.
	//CODE:
	a = sqrt(9);
	//Output a to the screen.
	//CODE:
	cout << a << endl;

	//Use the abs() with -7 as a parameter to show the absolute value of -7 to screen.
	//Assign the variable b to that function.
	//Output b to the screen/
	b = abs(-7);//So here abs means absolute value so if it's negative it is turned to positive.
	//Output b to screen.
	//CODE:
	cout << b << endl;

	//Assign the variable c to the round() function with c as its parameter to get the 
	//whole number value of c.
	//So round function rounds value up or down to nearest whole number
	//CODE:
	c = round(c);
	//Output c to screen.
	//CODE:
	cout << c << endl;

	//Assign the var d to the function ceil() with d as its parameter.
	//So here we round up no matter what. The ceiling...
	//CODE:
	d = ceil(d); 
	//Output d to screen.
	//CODE:
	cout << d << endl;

	//Assign the variable e to the floor() with the paramter of e.
	//Here we round down no matter what.  The floor...	e = floor(e);
	e = floor(e);//Here we round down no matter what.  The floor...
	cout << e << endl;

	return 0;
}

//Definitions of the library cmath functions
//https://www.cplusplus.com/reference/math/
//Can search all libraries like this to see if there are shortcuts available