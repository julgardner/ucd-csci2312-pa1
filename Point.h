// Julian Gardner
// 102215161
// CSCI 2312 002
// 2/5/2016

// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z; //coordinates

public:
    // Constructors
    Point();                      // default constructor
    Point(double newX, double newY, double newZ);    // three-argument constructor

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
	void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
	double getZ() const;

	//Other methods
	double distanceTo(const Point& otherPoint) const; //computes distance to otherPoint
    
};

#endif // __POINT_H
