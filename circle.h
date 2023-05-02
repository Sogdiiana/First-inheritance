#pragma once
#include <iostream>
using namespace std;
class Circle
{
private:
	double radius;
public:
	Circle(double radius = 0) {
		setRadius(radius);
	}

	~Circle() {};
	void setRadius(double radius)
	{
		this->radius = radius;
	}
	double getRadius()
	{
		return radius;
	}
	double getArea()
	{
		return 3.14 * radius * radius;

	}
	double getDiameter()
	{
		return  radius * 2;

	}
	double getCircumference()
	{
		return 2 * 3.14 * radius;

	}
	void print()
	{
		cout << "Radius : " << getRadius() << endl;
		cout << "Diameter : " << getDiameter() << endl;
		cout << "Circumference : " << getCircumference() << endl;
	}

};
