// Julian Gardner
// 102215161
// CSCI 2312 002
// 2/5/2016

// File for the computeArea function

#include <cmath>
#include "Point.h"

//Computes area using Heron's formula
double computeArea(const Point& a, const Point& b, const Point& c)
{
	double area, semiPerimeter, lengthA, lengthB, lengthC;

	//Determine sides
	lengthA = a.distanceTo(b);
	lengthB = b.distanceTo(c);
	lengthC = c.distanceTo(a);

	//Determine semiperimeter
	semiPerimeter = (lengthA + lengthB + lengthC) / 2.0;

	//Use Heron's formula
	area = std::sqrt(semiPerimeter * (semiPerimeter - lengthA) * (semiPerimeter - lengthB) * (semiPerimeter - lengthC));
	return area;
}