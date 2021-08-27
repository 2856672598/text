#include"Date.h"

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

void Date::Print() const
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

int Date::MonthDay(int year, int month)const
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		days[month] = 29;
	return days[month];
}

bool Date:: operator == (const Date& d)const
{
	return _year == d._year
		&&_month == d._month
		&& _day == d._day;
}

bool Date::operator<(const Date& d)const
{
	if (_year < d._year)
		return true;
	else if (_year == d._year&&_month < d._month)
		return true;
	else if (_year == d._year&&_month == d._month&&_day < d._day)
		return false;
	return false;
}

bool Date::operator>=(const Date& d)const
{
	if (*this < d)
		return false;
	return true;
}

bool Date::operator<=(const Date& d)const
{
	if (*this < d || *this == d)
		return true;
	return false;
}

bool Date::operator>(const Date& d)const
{
	if (*this <= d)
		return false;
	return true;
}

Date Date::operator+(int day)
{
	Date ret(*this);
	ret._day += day;
	while (ret._day > MonthDay(ret._year, ret._month))
	{
		ret._day -= MonthDay(ret._year, ret._month);
		++ret._month;
		if (ret._month > 12)
		{
			++ret._year;
			ret._month -= 12;
		}
	}
	return ret;
}

Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		*this -= -day;
	}
	else
	{
		_day += day;
		while (_day > MonthDay(_year, _month))
		{
			_day -= MonthDay(_year, _month);
			++_month;
			if (_month > 12)
			{
				_month -= 12;
				_year++;
			}
		}
	}
	return *this;
}

Date Date::operator-(int day)
{
	Date ret(*this);
	ret._day -= day;
	while (ret._day < 1)
	{
		--ret._month;
		if (ret._month == 0)
		{
			--ret._year;
			ret._month = 12;
		}
		ret._day += MonthDay(ret._year, ret._month);
	}
	return ret;
}

Date& Date::operator-=(int day)
{
	if (day < 0)
		*this += (-day);
	else
	{
		_day -= day;
		while (_day < 1)
		{
			--_month;
			if (_month == 0)
			{
				--_year;
				_month = 12;
			}
			_day += MonthDay(_year, _month);
		}
	}
	return *this;
}

Date Date::operator++()
{
	*this += 1;
	return *this;
}

Date Date::operator--()
{
	*this -= 1;
	return *this;
}

Date& Date::operator++(int)
{
	Date d(*this);
	*this += 1;
	return d;
}

Date& Date::operator--(int)
{
	Date d(*this);
	*this -= 1;
	return d;
}