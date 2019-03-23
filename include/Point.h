#ifndef POINT_H_
#define POINT_H_

class Point
{
public:
	Point() : x(0), y(0) {};
	Point(double, double);
	virtual ~Point();

	/*Setter's*/
	void setPointX(double);
	void setPointY(double);
	/*Geter's*/
	double getPointX(void);
	double getPointY(void);

	void printPoint(void);
	double distanceBetweenTwoPoints(Point b);
	Point midPoint(Point b);

private:
	double x, y;
};
#endif /* POINT_H_ */
