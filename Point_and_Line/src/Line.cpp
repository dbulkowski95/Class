#include "Line.h"

Line::Line(void) : lineSlope(0), lineIntercept(0)
{

}

Line::Line(Point* P1, Point* P2)
{
	double x1, x2, y1, y2;
	x1 = P1->getPointX();
	y1 = P1->getPointY();
	x2 = P2->getPointX();
	y2 = P2->getPointY();

	if ((x1 - x2) == 0)
	{
		throw "Divide by 0!";
	}
	double m = (y1 - y2)/(x1 - x2);
	double b = y1 - m * x1;

	this->lineSlope = m;
	this->lineIntercept = b;
}

void Line::setSlope(double slope)
{
	this->lineSlope = slope;
}

void Line::setIntercept(double intercept)
{
	this->lineIntercept = intercept;
}

double Line::getSlope(void)
{
	return this->lineSlope;
}

double Line::getIntercept(void)
{
	return this->lineIntercept;
}

Line::~Line() {}
