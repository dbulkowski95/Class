#include <iostream>
#include <cmath>
#include "Point.h"


Point::Point(double x1, double y1)
{
	this->x = x1;
	this->y = y1;
}

void Point::setPointX(double x1)
{
	this->x = x1;
}

void Point::setPointY(double y1)
{
	this->y = y1;
}

double Point::getPointX(void)
{
	return this->x;
}

double Point::getPointY(void)
{
	return this->y;
}

void Point::printPoint(void)
{
	std::cout << "Point x = " << this->x << "\nPoint y = " << this->y << std::endl;
}

double Point::distanceBetweenTwoPoints(Point b)
{
	double n = pow((this->x - b.x),2);
	double m = pow((this->y - b.y),2);
	return sqrt(n + m);
}

Point Point::midPoint(Point b)
{
	Point mid;
	mid.x = (this->x + b.x)/2;
	mid.y = (this->y + b.y)/2;
	return mid;
}

Point::~Point() {}


