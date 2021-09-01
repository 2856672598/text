//#include<iostream>
//using namespace std;
//int main()
//{
//	//动态申请一个类型为int的空间
//	int* p1 = new int;
//	//动态申请一个类型为int的空间并初始化为10
//	int* p2 = new int(10);
//	cout << *p2 << endl;
//	//动态申请10个int类型的空间
//	int* p3 = new int[10];
//	delete p1;
//	delete p2;
//	delete[] p3;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout << "A" << endl;
//	}
//	~A()
//	{
//		cout << "~A" << endl;
//	}
//private:
//	int _n;
//};
//int main()
//{
//	A* a1 = (A*)malloc(sizeof(A));
//	free(a1);
//
//	A* a2 = new A;//自定义类型时会调动构造函数
//	delete(a2);//会调用析构函数
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout << "A" << endl;
//	}
//	~A()
//	{
//		cout << "~A" << endl;
//	}
//private:
//	int _n;
//};
//int main()
//{
//	A* p1 = (A*)operator new(sizeof(A) * 5);
//	new(p1)A;//定位new new(空间的指针)构造函数
//
//	p1->~A();
//	operator delete(p1);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char* p1 = new char[1024 * 1024 * 1024];
//	int* p2 = new int;
//	//由于创建了没有对其释放，就会造成泄漏
//	return 0;
//}



#include<iostream>
using namespace std;
template <class T>
void Swap(T& x1, T& x2)
{
	T tmp = x1;
	x1 = x2;
	x2 = tmp;
}
int main()
{
	int a = 10, b = 20;
	Swap(a, b);
	char ch1 = 'a', ch2 = 'b';
	Swap(ch1, ch2);
	double x = 1.23, y = 34.65;
	Swap(x, y);
	return 0;
}