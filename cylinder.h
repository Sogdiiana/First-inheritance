#pragma once
#include <iostream>
#include "circle.h";
using namespace std;
class Cylinder : public Circle
{
private:
	double length;
public:
	Cylinder(double length = 0, double radius = 0) {
		setLength(length);
	}
	~Cylinder() {};
	void setLength(double length)
	{
		this->length = length;
	}
	double getLength()
	{
		return length;
	}

	double getVolume()
	{
		return 3.14 * getRadius() * getRadius() * length;
	}
	double getSurface()
	{
		return (2 * 3.14 * getRadius() * getRadius()) + (2 * 3.14 * length);

	}
	void output()
	{
		print();
		cout << "Length : " << getLength() << endl;
		cout << "Volume : " << getVolume() << endl;
		cout << "Surface : " << getSurface() << endl;
	}

};

