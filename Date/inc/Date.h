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
		Dec
	    };
	Date();
	Date(int day, Month mon, int year);
	
	//Mutuators
	int get_day(void) const { return Day; }
	Month get_month(void) const { return Mon; }
	int get_year(void) const { return Year; }

	//Accessors
	void set_day(int day_setter);
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

    ostream& operator<<(ostream& os, const Date& d);
    istream& operator>>(istream& is, const Date& d); 
} //End of Chrono namespace
