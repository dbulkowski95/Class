#ifndef LINE_H_
#define LINE_H_
#include "Point.h"
class Line
{
public:
	Line(void);
	Line(Point* P1, Point* P2);

	/*Setter's*/
	void setSlope(double);
	void setIntercept(double);
	/*Geter's*/
	double getSlope(void);
	double getIntercept(void);

	virtual ~Line();
private:
	Point p1, p2;
	double lineSlope, lineIntercept;
};

#endif
