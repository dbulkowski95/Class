/*
 * Point.h
 *
 *  Created on: Mar 23, 2019
 *      Author: bulkodaw
 */

#ifndef POINT_H_
#define POINT_H_

class Point
{
public:
	Point() : x(0), y(0) {};
	Point(double x, double y);
	virtual ~Point();

	/*Setter's*/
	void setPointX(double x);
	void setPointY(double y);
	/*Geter's*/
	double getPointX(void);
	double getPointY(void);

	void printPoint(void);

private:
	double x, y;
};
#endif /* POINT_H_ */
