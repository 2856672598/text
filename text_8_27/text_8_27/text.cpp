//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//拷贝构造函数
//	Date(Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2021, 8, 26);
//	Date d2(d1);
//	d2.Print();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//构造函数
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	////拷贝构造函数
//	//Date(const Date& d)
//	//{
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	bool operator==(const Date& d)
//	{
//		return _year == d._year
//			&& _month == d._month
//			&&_day == d._day;
//	}
//	bool operator<(const Date& d)
//	{
//		if (this->_year < d._year)
//			return true;
//		else if (this->_year == d._year&&this->_month < d._month)
//			return true;
//		else if (this->_year == d._year&&this->_month == d._month&&this->_day < d._day)
//			return true;
//		return false;
//	}
//
//	//赋值
//	//Date& operator=(const Date& d)
//	//{
//	//	if (this != &d)
//	//	{
//	//		_year = d._year;
//	//		_month = d._month;
//	//		_day = d._day;
//	//	}
//	//	return *this;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2021, 8, 27);
//	Date d2;
//	d2 = d1;
//	Date d3(d1);
//	d1.Print();//赋值运算符重载和拷贝构造函数默认生成--->是浅拷贝的
//	d2.Print();
//	d3.Print();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Stack
//{
//public:
//	Stack(int n = 10)
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//	}
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int*_a;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	//报错  拷贝构造和赋值默认生成的为浅拷贝
//	Stack st1;
//	Stack st2(20);
//	st1 = st2;
//	return 0;
//}


#include"Date.h"
int main()
{
	Date d1(2021, 8, 27);
	Date d2;
	d2 = d1 - 100;
	d2.Print();
	//d1 -= -1000;
	d1 += -1000;
	d1.Print();
	d2 = d1 + 10000;
	d2.Print();
	Date d3(d1);
	cout << (d1 == d3) << endl;
	cout << (d1 <= d3) << endl;
	cout << (d1 >= d3) << endl;

	Date d4;
	d4 = d3++;
	d4.Print();
	d3.Print();

	d3--;
	d3.Print();
	--d3;
	d3.Print();

	++d3;
	d3.Print();
	d2 = d3 + 105646;
	cout << d3 - d2 << endl;
	return 0;
}