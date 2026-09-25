#include<iostream>
using namespace std;


//The const keyword specifies that a variable's value is constant. Tells compiler to prevent anything
//from modifying it (read-only). Cant be changed. Use constants as often as possible but only if you're
//certain variable will not be changed.


int main() {

	//Common practice for const variables is to change them from lower to all uppercase.
	
	//Declare 4 constant variables for PI, LIGHT_SPEED, WIDTH and HEIGHT with corresponding values.
	//Declare them as data type double or int.
	//CODE:
	const double PI = 3.14259; 
	const int LIGHT_SPEED = 299792458;
	const int WIDTH = 1920;
	const int HEIGHT = 1080;

	//Declare 2 double variables for radius and circumference. Assign radius to a value
	//and circumference to an equation.
	//CODE:
	double radius = 10;
	double circumference = 2 * PI * radius;

	//Output circumference to the screen.
	//CODE:
	cout << circumference << "cm\n";
	
	//Output the speed of light to the screen.
	//CODE:
	cout << "Speed of light is: " << LIGHT_SPEED << endl;

}