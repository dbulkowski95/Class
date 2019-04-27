#include "Date.h"
int main()
{
	Chrono::Date d1(30,Chrono::Date::Mar, 1995);
	Chrono::Date d2;

	std::cout << d1 << std::endl;
	std::cin >> d2;
	std::cout << d2;
	return 0;
}
