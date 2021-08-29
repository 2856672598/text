//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//
//	//初始化列表-->初始化只能进行一次
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year),
//		_month(month),
//		_day(day)
//	{
//		//赋初值
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a)
//		: _a(a)
//	{}
//private:
//	int _a;
//
//};
//class B
//{
//public:
//	B(int a, int b, int c)
//		:_a(a),
//		_b(b),
//		_c(c)
//	{
//	}
//private:
//	//应使用初始化列表进行初始化
//	A _a;//没有默认的构造函数
//	const int _b;//const
//	int& _c;//引用
//};
//int main()
//{
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a)//成员变量初始化的顺序就是在类中声明的顺序，与在初始化列表中的顺序无关
//		//初始化列表
//		:_a (a),
//		_b(_a)
//	{}
//	void Print()
//	{
//		cout << _a << " " << _b << endl;
//	}
//private:
//	//变量声明
//	int _b;
//	int _a;
//};
//int main()
//{
//	A aa(2);
//	aa.Print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	explicit Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date" << endl;
//	}
//	Date(Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date1" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2012, 4, 6);//构造函数
//	Date d2(d1);//拷贝构造
//	Date d3 = d2;//拷贝构造
//	//Date d4 = 2;//隐试类型转换   >>先构造tmp(2),然后拷贝构造>>优化成直接构造
//	//在构造函数前加explicit，会禁止单参数构造函数的隐试转化
//	return 0;
//}

////计算创建了多少个类的对象
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	//构造
//	A()
//	{
//		++_count;
//	}
//	//拷贝构造
//	A(const A& a)
//	{
//		++_count;
//	}
//	void GetCount()
//	{
//		cout << _count << endl;
//	}
//private:
//	static int _count;
//};
//
//int A::_count = 0;
//int main()
//{
//	A a1;
//	A a2(a1);
//	A a3(a2);
//	a3.GetCount();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Sum
//{
//public:
//	Sum()
//	{
//		_sum += _i;
//		_i++;
//	}
//	static int GetSum()
//	{
//		return _sum;
//	}
//private:
//	static int _i;
//	static int _sum;
//};
//
//int Sum::_i = 1;
//int Sum::_sum = 0;
//
//class Solution {
//public:
//	int Sum_Solution(int n)
//	{
//		Sum *p = new Sum[n];
//		return Sum::GetSum();
//	}
//};
//
//int main()
//{
//	Solution s;
//	cout <<s.Sum_Solution(5) << endl;
//	return 0;
//}

//
////静态的成员函数可以调用非静态的成员函数吗？_----->>>不可以
////非静态的成员函数可以调用静态的成员函数吗？？？--->>可以
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void F1()
//	{}
//	static void F2()
//	{
//		//静态成员函数没有默认的this指针，静态函数是存储在静态区的
//		F1();
//	}
//	void F3()
//	{
//		F1();
//	}
//};
//int main()
//{
//	return 0;
//}


//友元
#include<iostream>
using namespace std;
class Date
{
	friend ostream& operator<<(ostream& _cout, const Date& d);
	friend istream& operator>>(istream& _cin, Date& d);
public:
	Date(int year = 0, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& _cout, const Date& d)
{
	_cout << d._year << "/" << d._month << "/" << d._day << endl;
	return _cout;
}
istream& operator>>(istream& _cin, Date& d)
{
	_cin >> d._year;
	_cin >> d._month;
	_cin >> d._day;
	return _cin;
}
int main()
{
	Date d1(2021, 8, 29);
	Date d2;
	cout << d1 << d2 ;
	cin >> d2;
	cout << d2;
	return 0;
}