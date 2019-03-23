#include <iostream>
#include "Point.h"

int main(void)
{
	Point firstPoint(-1, 1);
	Point secodPoint(3, 4);

	firstPoint.printPoint();
	secodPoint.printPoint();

	std::cout << firstPoint.distanceBetweenTwoPoints(secodPoint) <<std::endl;

	Point temp = firstPoint.midPoint(secodPoint);
	std::cout << temp.getPointX() << std::endl;
	std::cout << temp.getPointY() << std::endl;
	return 0;
}
