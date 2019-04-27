#include "Date.h"

#define MAX_DAYS_IN_MONTH 31
namespace Chrono
{
Date::Date(int day, Month mon, int year)
{
	Day = day;
	Mon = mon;
	Year = year;
}

const Date& default_date()
{
	static Date d(1,Date::Jan,2001); //Begin of XXI
	return d;
}

Date::Date()
{
	Day = default_date().get_day();
	Mon = default_date().get_month();
	Year = default_date().get_year();
}

void Date::set_day(int day_setter)
{
	Day = day_setter;
	if( is_date_valid(Day, Mon, Year))
	{

	}
}

void Date::set_month(Month mon_settter)
{
	Mon = mon_settter;
	if( is_date_valid(Day, Mon, Year))
	{

	}
}

void Date::set_year(int year_setter)
{
	Year = year_setter;
	if( is_date_valid(Day, Mon, Year))
	{

	}
}

void Date::add_day(const int day_add)
{
	switch (Mon)
	{
		case Jan:
		case Mar:
		case Jun:
		case Aug:
		case Oct:
		case Dec:
			if (Day > MAX_DAYS_IN_MONTH && Mon == Dec)
			{
				Mon = static_cast<Month>((static_cast<int>(Mon) + 1) % Number_of_months);
				Day = 1;
				Year += 1;
			}
			else if (Day > MAX_DAYS_IN_MONTH)
			{
				Mon = static_cast<Month>((static_cast<int>(Mon) + 1) % Number_of_months);
				Day = 1;
			}
			else
			{
				Day += day_add;
			}
			break;
		case Feb:
		case Apr:
		case Jul:
		case Sep:
		case Nov:
			if (Mon == Feb && Day == 29 && !leapyear(Year))
			{
				Mon = Mar;
				Day += day_add;
			}
			else if (Day  > MAX_DAYS_IN_MONTH - 1)
			{
				Mon = static_cast<Month>((static_cast<int>(Mon) + 1) % Number_of_months);
				Day = 1;
			}
			break;
		default:
			break;
	}
}

void Date::add_month(int mod_add)
{
	if(Mon < 1 || Mon > 12)
	{

	}
	Mon = static_cast<Month>((static_cast<int>(Mon) + mod_add) % Number_of_months);
}

void Date::add_year(int year_add)
{
	if (Mon == Feb && Day == 29 && !leapyear(Year))
	{
		Mon = Mar;
		Day = 1;
	}
	Year += year_add;
}

Date::~Date()
{

}

bool is_date_valid(int day, Date::Month mon, int year)
{
	if (day <= 0 || day > MAX_DAYS_IN_MONTH) return false;
	if (mon <= 0 || mon > 12) return false;
	int days_in_month = MAX_DAYS_IN_MONTH;

	switch (mon)
	{
		case Date::Feb:
			days_in_month = leapyear(year) ? 29 : 28;
			break;
		case Date::Apr: case Date::Jun: case Date::Sep: case Date::Nov:
			days_in_month = 30;
			break;
		default:
			break;
	}
	if (days_in_month < day) return false;
	return true;
}

bool leapyear(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0|| year % 400 == 0))
		return true;
	return false;
}

bool operator==(const Date& d1, const Date& d2)
{
	return d1.get_day() == d2.get_day()
			&& d1.get_month() == d2.get_month()
			&& d1.get_year() == d2.get_year();
}

bool operator!=(const Date& d1, const Date& d2)
{
	return !(d1 == d2);
}

std::istream& operator>>(std::istream& is, Date& d1)
{
	int y, m, d;

	is >> d >>  m >> y;
	if (!is) return is;
	if (is_date_valid(d, Date::Month(m), y))
	{
		d1 = Date(d, Date::Month(m), y);
	}
	return is;
}

std::ostream& operator<<(std::ostream& os, const Date& d)
{
	return os << d.get_day() << ' ' << d.get_month() << ' ' << d.get_year();
}

} /* namespace Chrono */

