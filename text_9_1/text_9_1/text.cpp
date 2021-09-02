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



//#include<iostream>
//using namespace std;
//template <class T>
//void Swap(T& x1, T& x2)
//{
//	T tmp = x1;
//	x1 = x2;
//	x2 = tmp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	Swap(a, b);
//	char ch1 = 'a', ch2 = 'b';
//	Swap(ch1, ch2);
//	double x = 1.23, y = 34.65;
//	Swap(x, y);
//	return 0;
//}


//#include<iostream>
//#include<cassert>
//using namespace std;
//template <class T>
//class vector
//{
//public:
//	vector()
//		:_a(nullptr)
//		, _size(0)
//		, _capacity(0)
//	{}
//
//	~vector()
//	{
//		delete[] _a;
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//
//	T operator[](const int i)
//	{
//		assert(i < _size);
//		return _a[i];
//	}
//	size_t size()
//	{
//		return _size;
//	}
//
//	void Push_Back(const T& x);
//	void Pop_Back();
//private:
//	T* _a;
//	int _size;
//	int _capacity;
//};
//
//template<class T>
//void vector<T>::Push_Back(const T& x)
//{
//	if (_size == _capacity)
//	{
//		//满了
//		size_t newcapacity = _capacity == 0 ? 2 : _capacity * 2;
//		T* tmp = new T[newcapacity];
//		if (_a)
//		{
//			//拷贝到新空间
//			memcpy(tmp, _a, _size * sizeof(T));
//			delete _a;
//		}
//		_a = tmp;
//		_capacity = newcapacity;
//	}
//	_a[_size] = x;
//	_size++;
//}
//
//template<class T>
//void vector<T>::Pop_Back()
//{
//	assert(_size > 0);
//	_size--;
//}
//
//int main()
//{
//	vector<int>st1;
//	size_t i = 0;
//	st1.Push_Back(1);
//	st1.Push_Back(2);
//	st1.Push_Back(3);
//	st1.Push_Back(4);
//	st1.Pop_Back();
//	for (i = 0; i < st1.size(); i++)
//	{
//		cout << st1[i] << " ";
//	}
//	return 0;
//}



////string
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	//string s1;
//	//string s2("hello");
//	//string s3(10, 'a');
//	//string s4(s2);
//	//cout << s1 << endl;
//	//cout << s2 << endl;
//	//cout << s3 << endl;
//	//cout << s4 << endl;
//
//	string s1("hello");
//	s1 += ",world";
//	cout << s1 << endl;
//
//	string s2 = ("hello");
//	s2.append(",world");
//	cout << s2 << endl;
//
//	s2.push_back('H');
//	cout << s2 <<  endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1("12345");
//	int ret = 0;
//	size_t i = 0;
//	for (i = 0; i < s1.size(); i++)
//	{
//		ret *= 10;
//		ret += s1[i] - '0';
//	}
//	cout << ret;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void text1_string()
//{
//	string s1("hello world");
//	cout << s1 << endl;
//
//	//写
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		s1[i] += 1;
//	}
//
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//
//	//迭代器
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		*it -= 1;
//		it++;
//	}
//
//	it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//	//反向迭代器
//	string::reverse_iterator rit = s1.rbegin();
//	while (rit != s1.rend())
//	{
//		cout << *rit << " ";
//		rit++;
//	}
//	cout << endl;
//
//}
//int singtoint(const string& str)
//{
//	int val = 0;
//	//迭代器需要加const
//	string::const_iterator it = str.begin();
//	while (it != str.end())
//	{
//		val *= 10;
//		val += *it - '0';
//		it++;
//	}
//	return val;
//}
//void text2_string()
//{
//	string s1("12345");
//	cout << singtoint(s1) << endl;
//}
//
//int main()
//{
//	//text1_string();
//
//	text2_string();
//	return 0;
//}
