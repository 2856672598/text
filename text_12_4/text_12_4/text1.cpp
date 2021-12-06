//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//using namespace std;
////2094. 找出 3 位偶数
//class Solution
//{
//public:
//	vector<int> findEvenNumbers(vector<int>& digits)
//	{
//		unordered_set<int>ret;
//		for (int i = 0; i < (int)digits.size(); i++)
//		{
//			for (int j = 0; j < (int)digits.size(); j++)
//			{
//				for (int z = 0; z < (int)digits.size(); z++)
//				{
//					int flag = digits[i] * 100 + digits[j] * 10 + digits[z];
//					if (flag >= 100 && flag % 2 == 0 && i != j && j != z && i != z)
//						ret.insert(flag);
//				}
//			}
//		}
//		vector<int> flag;
//		for (auto e : ret)
//		{
//			flag.push_back(e);
//		}
//		sort(flag.begin(), flag.end());
//		return flag;
//	}
//};
//
//int main()
//{
//	vector<int> digits{ 2,1,3,0 };
//	vector<int>ret = Solution().findEvenNumbers(digits);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}

//#include<iostream>
//#include <utility> 
//using namespace std;
//
//int main()
//{
//	int x = 1, y = 2;
//	//左值引用
//	int& a = x;
//
//	//右值引用
//	int&& b = x + y;
//
//	//左值引用不能引用右值，const左值引用可以
//	//int& c = 10;
//	const int& c = 10;
//
//	//右值引用不能引用左值，move后的左值就可以
//	int&& d = move(x);
//
//	cout << a << " " << b << " " << c << " " << d;
//}

//#include<iostream>
//using namespace std;
//
//template<class T>
//void f(const T& a)
//{
//	cout << "T& a" << endl;
//}
//
//template<class T>
//void f(const T&& a)
//{
//	cout << "T&& a" << endl;
//}
//
//int main()
//{
//	int num = 10;
//	f(10);
//	f(num);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

class String
{
public:
	String(const char* str = " ")
	{
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	String(const String& s)
	{
		_str = new char[strlen(s._str) + 1];
		strcpy(_str, s._str);
		cout << "深拷贝" << endl;
	}
	
	String(const String&& s)
	{
		_str = nullptr;
		cout << "浅拷贝" << endl;
	}

private:
	char* _str;
};
String f(const char* str)
{
	String tmp(str);
	return tmp;
}
int main()
{
	String s("hello word");
	String a(s);
	String b(f("临时"));

	return 0;
}