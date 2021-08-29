#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1);

	Date(const Date& d);
	void Print()const;
	int MonthDay(int year, int month)const;
	bool operator==(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator>(const Date& d)const;
	Date operator+(int day);
	Date& operator+=(int day);
	Date operator-(int day);
	Date& operator-=(int day);
	Date operator++(int);
	Date operator--(int);
	Date& operator++();
	Date& operator--();
	int operator-(const Date& d)const;
private:
	int _year;
	int _month;
	int _day;
};