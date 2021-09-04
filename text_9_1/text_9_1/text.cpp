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


//#include<iostream>
//#include<string>
//using namespace std;
//void text1_string()
//{
//	string s1("hello");
//	cout << s1.size()<< endl;
//	cout << s1.length() << endl;
//
//
//	cout << s1.capacity() << endl;
//	cout << s1.empty() << endl;//判断字符串是否为空
//
//	string s2;
//	cout << s2.empty() << endl;
//	cout << s2.size() << endl;
//	
//	s2.reserve(10);
//	cout << s2.capacity() << endl;
//	cout << s2.size() << endl;
//
//
//	s2.resize(10, 'a');//预留空间
//	cout << s2 << endl;
//	cout << s2.size() << endl;
//
//	s2.resize(15, 'b');
//	cout << s2 << endl;
//	cout << s2.capacity() << endl;
//
//	//当reserve参数小于容量大小时，不会改变容量大小
//	s2.reserve(10);
//	cout << s2 << endl;
//	cout << s2.capacity() << endl;
//}
//int main()
//{
//	text1_string();
//	return 0;
//}



//#include<iostream>
//#include<string>
//using namespace std;
//class Solution
//{
//public:
//	string reverseOnlyLetters(string s)
//	{
//		int left = 0, right = s.size()-1;
//		while (left < right)
//		{
//			while (left < right && !(s[left] >= 'a'&&s[left] <= 'z' || s[left] >= 'A'&&s[left] <= 'Z'))
//			{
//				left++;
//			}
//			while (left < right && !(s[right] >= 'a'&&s[right] <= 'z' || s[right] >= 'A'&&s[right] <= 'Z'))
//			{
//				right--;
//			}
//			swap(s[left], s[right]);
//			left++;
//			right--;
//		}
//		return s;
//	}
//};
//int main()
//{
//	string s("Test1ng-Leet=code-Q!");
//	cout << Solution().reverseOnlyLetters(s) << endl;
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	int firstUniqChar(string s)
//	{
//		int arr[26] = { 0 };
//		for (size_t i = 0; i < s.size(); i++)
//		{
//			arr[s[i] - 'a']++;
//		}
//		for (size_t i = 0; i < s.size(); i++)
//		{
//			if (arr[s[i] - 'a'] == 1)
//				return i;
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	string s("loveleetcode");
//	cout << Solution().firstUniqChar(s) << endl;
//	return 0;
//}


//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	int firstUniqChar(string s)
//	{
//		for (size_t i = 0; i < s.size(); i++)
//		{
//			if (s.find(s[i]) == s.rfind(s[i]))
//				return i;
//		}
//		return -1;
//	}
//};
//int main()
//{
//	string s("loveleetcode");
//	cout << Solution().firstUniqChar(s) << endl;
//	return 0;
//}

//HJ1 字符串最后一个单词的长度
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s("hello");
//	getline(cin, s);
//	string::reverse_iterator it = s.rbegin();
//	int count = 0;
//	while (it != s.rend())
//	{
//		if (*it == ' ')
//			break;
//		count++;
//		it++;
//	}
//	cout << count << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	int pos = s.rfind(" ");
//	cout << s.size() - pos - 1 << endl;
//	return 0;
//}



//#include<iostream>
//#include<string>
//using namespace std;
//void text1_string()
//{
//	string s1("http://www.cplusplus.com/");
//	string s2("https://leetcode-cn.com/");
//	string& url = s2;
//	int i1 = s1.find(":");
//	if (i1 != string::npos)
//	{
//		cout << s1.substr(0, i1) << endl;
//	}
//
//	int i2 = s1.find('/', i1 + 3);
//	if (i2 != string::npos)
//	{
//		cout << s1.substr(i1 + 3, i2 - (i1 + 3));
//	}
//}
//int main()
//{
//	text1_string();
//	return 0;
//}

////125. 验证回文串
//#include<iostream>
//#include<string>
//using namespace std;
//class Solution
//{
//public:
//	bool isCharOrNumber(char ch)
//	{
//		if (ch >= 'a'&&ch <= 'z' || ch >= '0'&&ch <= '9')
//			return true;
//		else
//			return false;
//	}
//	bool isPalindrome(string s)
//	{
//		for (size_t i = 0; i < s.size(); i++)
//		{
//			if (s[i] >= 'A'&&s[i] <= 'Z')
//				s[i] += 32;
//		}
//
//		int begin = 0, end = s.size() - 1;
//		while (begin < end)
//		{
//			while (begin < end && !isCharOrNumber(s[begin]))
//			{
//				begin++;
//			}
//			while (begin < end && !isCharOrNumber(s[end]))
//			{
//				end--;
//			}
//			if (s[begin] != s[end])
//				return false;
//			else
//			{
//				begin++;
//				end--;
//			}
//		}
//		return true;
//	}
//};
//int main()
//{
//	string s1("0P");
//	cout << Solution().isPalindrome(s1) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//class Solution
//{
//public:
//	string addStrings(string num1, string num2)
//	{
//		int end1 = num1.size() - 1;
//		int end2 = num2.size() - 1;
//		string ret;
//		int flag = 0;
//		while (end1 >= 0 || end2 >= 0)
//		{
//			int sum = 0;
//			if (end1 < 0 || end2 < 0)
//			{
//				end1 < 0 ? sum = num2[end2] - '0' + flag : sum = num1[end1] + flag - '0';
//			}
//			else
//				sum = num1[end1] + num2[end2] - 2 * '0' + flag;
//			if (sum > 9)
//			{
//				flag = 1;
//				sum -= 10;
//			}
//			else
//				flag = 0;
//			ret += sum + '0';
//			end1--;
//			end2--;
//		}
//		if (flag == 1)
//			ret += '1';
//		//int begin = 0, end = ret.size() - 1;
//		//while (begin < end)
//		//{
//		//	char ch = ret[end];
//		//	ret[end] = ret[begin];
//		//	ret[begin] = ch;
//		//	begin++;
//		//	end--;
//		//}
//
//		reverse(ret.begin(), ret.end());
//		return ret;
//	}
//};
//
//int main()
//{
//	string s1("1");
//	string s2("9");
//	cout << Solution().addStrings(s1, s2) << endl;
//	return 0;
//}

////541. 反转字符串 II
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//class Solution
//{
//public:
//	string reverseStr(string s, int k)
//	{
//		size_t n = s.size();
//		for (size_t i = 0; i < n; i += 2 * k)
//		{
//			reverse(s.begin() + i, s.begin() + min(i + k, n));
//		}
//		return s;
//	}
//};
//int main()
//{
//	string s("abcdefg");
//	int k = 2;
//	cout << Solution().reverseStr(s, k) << endl;
//	return 0;
//}

////557. 反转字符串中的单词 III
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	string reverseWords(string s)
//	{
//		int end = s.rfind(' ');
//		int begin = 0;
//		int prev = 0;
//		while (1)
//		{
//			begin = s.find(' ', prev);
//			reverse(s.begin() + prev, s.begin() + begin);
//			prev = begin + 1;
//			if (begin == end)
//				break;
//		}
//		reverse(s.begin() + prev, s.begin() + s.size());
//		return s;
//	}
//};
//
//int main()
//{
//	string s("Let's take LeetCode contest");
//	cout << Solution().reverseWords(s) << endl;
//	return 0;
//}

//HJ59 找出字符串中第一个只出现一次的字符
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	while (cin >> s1)
//	{
//		int arr[256] = { 0 };
//		size_t i = 0;
//		for (i = 0; i < s1.size(); i++)
//		{
//			arr[s1[i]]++;
//		}
//		int flag = 0;
//		for (i = 0; i < s1.size(); i++)
//		{
//			if (arr[s1[i]] == 1)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1)
//			cout << s1[i] << endl;
//		else
//			cout << -1 << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int flag = 0;
//		size_t i = 0;
//		for (i = 0; i < s.size(); i++)
//		{
//			//当第一次出现的位置和最后一次出现的位置相等是说明只出现一次
//			if (s.find(s[i]) == s.rfind(s[i]))
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1)
//			cout << s[i] << endl;
//		else
//			cout << -1 << endl;
//	}
//	return 0;
//}

//43. 字符串相乘
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution
{
public:
	string addStrings(string num1, string num2)
	{
		int end1 = num1.size() - 1;
		int end2 = num2.size() - 1;
		string ret;
		int flag = 0;
		while (end1 >= 0 || end2 >= 0)
		{
			int sum = 0;
			if (end1 < 0 || end2 < 0)
			{
				end1 < 0 ? sum = num2[end2] - '0' + flag : sum = num1[end1] + flag - '0';
			}
			else
				sum = num1[end1] + num2[end2] - 2 * '0' + flag;
			if (sum > 9)
			{
				flag = 1;
				sum -= 10;
			}
			else
				flag = 0;
			ret += sum + '0';
			end1--;
			end2--;
		}
		if (flag == 1)
			ret += '1';

		reverse(ret.begin(), ret.end());
		return ret;
	}

	string multiply(string num1, string num2)
	{
		string ret;
		if (num1 == "0" || num2 == "0")
		{
			return "0";
		}
		int count = 0;
		for (int i = num2.size() - 1; i >= 0; i--)
		{
			string sum;
			int tmp = 0;
			int flag = 0;
			for (int j = num1.size() - 1; j >= 0; j--)
			{
				tmp = (num1[j] - '0')*(num2[i] - '0') + flag;
				if (tmp > 9)
				{
					flag = tmp / 10;
					tmp %= 10;
				}
				else
					flag = 0;
				sum += tmp + '0';
			}
			if (flag > 0)
				sum += flag + '0';
			reverse(sum.begin(), sum.end());
			string s(count, '0');
			sum += s;
			ret = addStrings(ret, sum);
			count++;
		}
		return ret;
	}
};

int main()
{
	string s1("5933017823982");
	string s2("6133388083");
	cout << Solution().multiply(s1, s2) << endl;
	return 0;
}