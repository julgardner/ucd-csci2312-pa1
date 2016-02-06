// Julian Gardner
// 102215161
// CSCI 2312 002
// 2/5/2016

// Implementation file for the Point class in Point.h

#include <cmath>
#include "Point.h"

// Constructors
Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(double newX, double newY, double newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

//Mutator methods
void Point::setX(double newX)
{
	x = newX;
}

void Point::setY(double newY)
{
	y = newY;
}

void Point::setZ(double newZ)
{
	z = newZ;
}

//Accessor methods
double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

double Point::getZ() const
{
	return z;
}

//Other methods
double Point::distanceTo(const Point& otherPoint) const //computes distance to otherPoint
{
	double distance;
	double xDistance;
	double yDistance;
	double zDistance;
	//Get positive distance no matter what
	if ((this->x) > otherPoint.getX())
	{
		xDistance = (this->x) - otherPoint.getX();
	}
	else
	{
		xDistance = otherPoint.getX() - (this->x);
	}

	if ((this->y) > otherPoint.getY())
	{
		yDistance = (this->y) - otherPoint.getY();
	}
	else
	{
		yDistance = otherPoint.getY() - (this->y);
	}

	if ((this->z) > otherPoint.getZ())
	{
		zDistance = (this->z) - otherPoint.getZ();
	}
	else
	{
		zDistance = otherPoint.getZ() - (this->z);
	}

	//Pythagorean Theorum
	distance = std::sqrt((std::pow(xDistance, 2.0)) + (std::pow(yDistance, 2.0)) + (std::pow(zDistance, 2.0)));
	return distance;
}