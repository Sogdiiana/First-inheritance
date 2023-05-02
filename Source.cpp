#include <iostream>
using namespace std;
#include "circle.h";
#include "cylinder.h";



int main()
{
	
	
	Cylinder cylind;
	double radius, length;
	cout << "Enter radius: ";
	cin >> radius;
	cout << "Enter length: ";
	cin >> length;
	cylind.setLength(length);
	cylind.setRadius(radius);
	cout << endl;
	cout << endl;
	cylind.output();



	return 0;
}