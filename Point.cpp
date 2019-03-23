#include <iostream>
#include "Point.h"


Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Point::setPointX(double x)
{
	this->x = x;
}

void Point::setPointY(double y)
{
	this->y = y;
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


Point::~Point() {
	// TODO Auto-generated destructor stub
}


