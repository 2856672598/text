//#include<iostream>
//
////using std::cout;
////using std::cin;
////using std::endl;
//
////c++库中所有东西都是放到std命名空间的（namespace)
//using namespace std;//将std所有东西都展开
//int main()
//{
//	int a;
//	double b;
//	//std::cin >> a >> b;
//	//std::cout << "hello word" << std::endl;
//	//std::cout << a << " " << b << std::endl;
//
//	cin >> a >> b;
//	cout << a << " " << b;
//
//	return 0;
//}



//#include<iostream>
//using std::cout;
//using std::endl;
//
////全缺省参数
//void Funk1(int a = 10, int b = 20)
//{
//	cout << a << " " << b << endl;
//}
////半缺省
//void Funk2(int a, int b = 20)
//{
//	cout << a << " " << b << endl;
//}
//int main()
//{
//	//Funk1();
//	//Funk1(30);
//	Funk1(30, 40);
//
//	//Funk2(50);
//	//Funk2();//err从右向左缺省
//	return 0;
//}

//#include<iostream>
//using namespace std;
////重载函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//double Add(double x, double y)
//{
//	return x + y;
//}
//
//long int Add(long x, long y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	cin >> a >> b;
//	int add = Add(a, b);
//	cout << add << endl;
//	return 0;
//}


//#include<iostream>
//using std::cout;
//using std::endl;
//int main()
//{
//	cout << 'V' << "   " << 'V' << endl;
//	cout << " " << 'V' << " " << 'V' << endl;
//	cout << "  " << 'V' << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	//int a = 10;
//	//int&b = a;//引用 就是给a取了个别名 叫b;
//	//int c = 20;
//	//cout << a << endl;
//	//cout << b << endl;
//
//	int a = 10;
//	double c = a;
//	const double& b = a;
//	cout << b << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void swap(int&x, int&y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	swap(a, b);
//	cout << a << b << endl;
//	return 0;
//}



//#include<iostream>
//using std::endl;
//using std::cout;
//int& Add(int x, int y)
//{
//	int c = x + y;
//	return c;
//}
//
//int main()
//{
//	int& ret = Add(2, 3);
//	Add(4, 5);
//
//	cout << "Add(2, 3) is " << ret << endl;//返回为局部变量时，引用返回是不安全的
//	return 0;
//}


//#include<iostream>
//#include<ctime>
//using namespace std;
//struct A
//{
//	int arr[10000];
//};
//struct A a;
//struct A text1()
//{
//	return a;
//}
//struct A& text2()
//{
//	return a;
//}
//int main()
//{
//	int i = 0;
//	int time1 = clock();
//	for (i = 0; i < 100000; i++)
//		text1();
//	int time2 = clock();
//	int time3 = clock();
//	for (i = 0; i < 100000; i++)
//		text2();
//	int time4 = clock();
//	cout << "text1 time:" << time2 - time1 << endl;
//	cout << "text2 time:" << time4 - time2 << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	//c语言
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		arr[i] *= 2;
//	}
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//	//范围for
//	for (auto&a : arr)
//	{
//		a *= 2;
//	}
//	for (auto a : arr)
//	{
//		cout << a << " ";
//	}
//	cout << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void Fun(int n)
//{
//	cout << "整形" << endl;
//}
//void Fun(int* n)
//{
//	cout << "整形指针" << endl;
//}
//int main()
//{
//	Fun(0);
//	Fun(NULL);
//	Fun(nullptr);//c++11中建议空指针使用nullptr;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//class ListNode
//{
//	//1.成员变量
//	//2.成员函数
//private:
//	int _val;
//	ListNode* _next;
//	ListNode* _prev;
//};
//
//
////struct ListNode
////{
////	int _val;
////	ListNode* _next;
////	ListNode* _prev;
////};
//
//int main()
//{
//	ListNode s;
//	//s._val = 0;//err 私有的和保护的在外部不可以被修改
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int _x;
//	int _y;
//	int Add(int _x, int  _y)
//	{
//		return _x + _y;
//	}
//};
//class B
//{
//	int Add(int x, int y)
//	{
//		int sum = x + y;
//		return sum;
//	}
//};
//int main()
//{
//	A a;
//	//实例化类的对象的大小为，变量相加的大小（需要考虑内存对齐）
//	cout << sizeof(A) << endl;//8
//
//	//当实例化对象没有变量时，大小为1
//	cout << sizeof(B) << endl;//1
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Data
//{
//public:
//	void Init(int year, int month, int day)//void Init(Data* this ,int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()//void Print(Data* this)
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
//	Data a;
//	a.Init(2021, 8, 24);//a.Init(&a , 2021 , 8 , 24);
//	a.Print();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//	void Show()
//	{
//		cout << "show" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* a = NULL;
//	//成员函数存储在公共代码段，所以不会到对象中去查找成员函数
//	//PrintA函数中由于this指针会解引用，导致崩溃（NULL）
//	//Show函数没有对this指针进行解引用，所以正常输出
//	a->PrintA();//程序崩溃
//	a->Show();//正常输出
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//构造函数-->支持函数重载
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date()
//	{
//		_year = 0;
//		_month = 1;
//		_day = 1;
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
//	Date d1(2021, 8, 24);
//	d1.Print();
//	Date d2;//Data d2() 构造函数无参时，不要写括号
//	d2.Print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	Time()
//	{
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//
//};
//
//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//int main()
//{
//	Date d1;
//	d1.Print();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//全缺省构造函数
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//析构函数
//	~Date()
//	{
//		;
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
//	Date d1;
//	d1.Print();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Stack
//{
//public:
//	//构造函数
//	Stack(int n = 10)
//	{
//		_a = (int*)malloc(sizeof(Stack));
//		_size = _capacity = n;
//		cout << "Stack" << endl;
//	}
//	//析构函数 当对象生命周期结束时，自动调用 完成清理工作
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//		cout << "`Stack"<< endl;
//	}
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};
//int main()
//{
//	Stack s1;
//	return 0;
//}

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
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	bool operator==(const Date&d)
//	{
//		return _year == d._year
//			&&_month == d._month
//			&&_day == d._day;
//	}
//
//	bool operator > (const Date&d)
//	{
//		if (_year > d._year)
//			return true;
//		else if (_month > d._month&&_year == d._year)
//			return true;
//		else if (_year == d._year&&_month == d._month&&_day > d._day)
//			return true;
//		return false;
//	}
//
//	bool operator < (const Date&d)
//	{
//		if (_year < d._year)
//			return true;
//		else if (_year == d._year&& _month < d._month)
//			return true;
//		else if (_year == d._year && _month == d._month && _day < d._day)
//			return true;
//		return false;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	//Date d1(2021, 8, 25);
//	//d1.Print();
//	//Date d2(d1);
//	//d2.Print();
//
//	//int tmp = d1.operator==(d2);
//	//cout << tmp << endl;
//
//	//cout << (d1 == d2) << endl;
//
//	Date d1(2021, 9, 34);
//	Date d2(2019, 10, 23);
//	Date d3;
//
//	cout << (d1 == d2) << endl;
//	cout << (d1.operator>(d2)) << endl;
//	cout << (d3 < d2) << endl;
//	return 0;
//}


#include<iostream>
using namespace std;
class Date
{
public:
	//构造函数
	Date(int year, int month, int day)
	{
		if (year >= 0 && month >= 1 && month <= 12 && day >= 1 && day <= MonthDays(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
			cout << "日期非法" << endl;
	}
	//拷贝构造函数
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	int MonthDays(int year, int month)
	{
		int days[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			return days[month];
		return 28;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	bool operator<(const Date& d)
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year&&_month < d._month)
			return true;
		else if (_year == d._year&& _month == d._month&&_day < d._day)
			return true;
		return  false;
	}
	bool operator>(const Date&d)
	{
		if (_year > d._year)
			return true;
		else if (_year == d._year&&_month > d._month)
			return true;
		else if (_year == d._year&& _month == d._month&&_day > d._day)
			return true;
		return  false;
	}
	bool operator==(const Date&d)
	{
		if (d._year == _year
			&& d._month == _month
			&& d._day == _day)
			return true;
		return false;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2021, 8, 25);
	d1.Print();

	Date d2(2021, 2, 29);
	d2.Print();

	cout << (d1 < d2) << endl;
	cout << (d1 > d2) << endl;
	return 0;
}