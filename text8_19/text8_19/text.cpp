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