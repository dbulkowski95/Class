#ifndef DATE_H
#define DATE_H
#include <iostream>

namespace Chrono
{
    class Date
    {
	public:
	    enum Month
	    {
		Jan = 1,
		Feb,
		Mar,
		Apr,
		Jun,
		Jul,
		Aug,
		Sep,
		Oct,
		Nov,
		Dec,
		Number_of_months
	    };
	Date();
	Date(int day, Month mon, int year);

	~Date();

	//Mutuators
	int get_day(void) const { return Day; }
	Month get_month(void) const { return Mon; }
	int get_year(void) const { return Year; }

	//Accessors
	void set_day(const int day_setter);
	void set_month(Month mon_setter);
	void set_year(int year_setter);

	void add_day(int day_add);
	void add_month(int mon_add);
	void add_year(int year_add);

	private:
	    int Day;
	    Month Mon;
	    int Year;
    }; //End of Date class

    //Helper function/ Convenience function/ Auxiliary function
    bool is_date_valid(int day, Date::Month mon, int year);

    bool leapyear(int year);

    bool operator==(const Date& d1, const Date& d2);
    bool operator!=(const Date& d1, const Date& d2);

    std::ostream& operator<<(std::ostream& os, const Date& d);
    std::istream& operator>>(std::istream& is, Date& d1);
} //End of Chrono namespace
#endif /* DATE_H */
