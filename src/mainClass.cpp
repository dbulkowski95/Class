#include <iostream>
#include "../include/Point.h"
#include "../include/Line.h"

int main(void)
{
	try
	{
		Point firstPoint(15, 1);
		Point secodPoint(33, 3);

		firstPoint.printPoint();
		secodPoint.printPoint();

		std::cout << firstPoint.distanceBetweenTwoPoints(secodPoint) <<std::endl;

		Point temp = firstPoint.midPoint(secodPoint);
		std::cout << temp.getPointX() << std::endl;
		std::cout << temp.getPointY() << std::endl;

		Line firstLine(&firstPoint, &secodPoint);

		std::cout << firstLine.getSlope() << std::endl;
		std::cout << firstLine.getIntercept() << std::endl;

		Line secondtLine;

		std::cout << secondtLine.getSlope() << std::endl;
		std::cout << secondtLine.getIntercept() << std::endl;

		firstLine.setSlope(1.1);

		std::cout << firstLine.getSlope() << std::endl;
		std::cout << firstLine.getIntercept() << std::endl;
	}

	catch (...)
	{
		std::cout << "Exception occurred!\n";
	}
	return 0;
}
