//#include<iostream>
//#include<vector>
//#include<deque>
//#include<time.h>
//#include<algorithm>
//using namespace std;
//
//void text_deque()
//{
//	int n = 100000;
//	deque<int> d;
//	vector<int> v;
//
//	srand((unsigned int)time(0));
//	for (int i = 0; i < n; i++)
//	{
//		int x = rand();
//		d.push_back(x);
//		v.push_back(x);
//	}
//	clock_t begin1 = clock();
//	sort(d.begin(), d.end());
//	clock_t end1= clock();
//
//	clock_t begin2 = clock();
//	sort(v.begin(), v.end());
//	clock_t end2 = clock();
//
//	cout << "deque:" << end1 - begin1 << endl;
//	cout << "vector:" << end2 - begin2 << endl;
//}
//int main()
//{
//	text_deque();
//	return 0;
//}


//#include<iostream>
//using  namespace std;
//
//template<class T, size_t n>
//class Array
//{
//private:
//	T _arr[n];
//	size_t _size;
//};
//
//int main()
//{
//	Array<int, 10> a;
//	Array<int, 20>b;
//	return 0;
//}

////模板的特化（针对某些类型进行特殊化处理）
//#include<iostream>
//using namespace std;
//
//template<class T>
//bool IsEqual(const T& x1, const T& x2)
//{
//	return x1 == x2;
//}
//
//
////函数模板的特化
//bool IsEqual(const char* p1, const char* p2)
//{
//	return strcmp(p1, p2) == 0;
//}
//
//template<class T1, class T2>
//class A
//{
//public:
//	A()
//	{
//		cout << "<T1,T2>" << endl;
//	}
//private:
//	T1 _a;
//	T2 _b;
//};
//
////类模板的全特化  特化全部参数
//template<>
//class A<int, double>
//{
//public:
//	A()
//	{
//		cout << "类模板的全特化<int，double>" << endl;
//	}
//private:
//	int _a;
//	char _b;
//};
//
////类模板的偏特化---可以是特化一部分参数 或者是对参数进一步限制
//template<class	T>
//class A<T, int>
//{
//public:
//	A()
//	{
//		cout << "类模板的偏特化<T,int>" << endl;
//	}
//private:
//	T _a;
//	int _b;
//};
//
//template<class T1, class T2>
//class A<T1&, T2&>
//{
//public:
//	A()
//	{
//		cout << "<T1&,T2&>" << endl;
//	}
//private:
//	T1 _a;
//	T2 _b;
//};
//
//
//template<class T1, class T2>
//class A<T1*, T2*>
//{
//public:
//	A()
//	{
//		cout << "<T1*,T2*>" << endl;
//	}
//private:
//	T1 _a;
//	T2 _b;
//};
//int main()
//{
//	cout << IsEqual(1, 2) << endl;
//	cout << IsEqual("hello", "hello") << endl;
//
//	A<int, long> a;
//	A<int, int> b;
//	A<int*, char*>c;
//	A<double&, char&>d;
//	return 0;
//}


////2000. 反转单词前缀
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	string reversePrefix(string word, char ch) {
//		string::iterator it = find(word.begin(), word.end(), ch);
//
//		if (it != word.end())
//		{
//			reverse(word.begin(), it + 1);
//		}
//		return word;
//	}
//};
//
//int main()
//{
//	string word("abcdef");
//	char ch = 'd';
//	cout << Solution().reversePrefix(word, ch) << endl;
//	return 0;
//}


////2001. 可互换矩形的组数
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	long long interchangeableRectangles(vector<vector<int>>& rectangles) {
//		vector<double> flag;
//		for (int i = 0; i < (int)rectangles.size(); i++)
//		{
//			double tmp = rectangles[i][0] * 1.0 / rectangles[i][1];
//			flag.push_back(tmp);
//		}
//		long long count = 0;
//
//		//for (int i = 0; i < (int)flag.size() - 1; i++)
//		//{
//		//	for (int j = i + 1; j < (int)flag.size(); j++)
//		//	{
//		//		if (flag[i] == flag[j])
//		//			count++;
//		//	}
//		//}
//		//return count;
//
//		
//		int left = 0, right = 1;
//		sort(flag.begin(), flag.end());
//
//		while (right < (int)flag.size())
//		{
//			if (flag[right] != flag[left])
//			{
//				int tmp = right - left;
//				count += tmp * (tmp + 1) / 2;
//				left = right;
//			}
//			right++;
//		}
//		if (left != right)
//		{
//			int tmp = right - left;
//			count += tmp * (tmp - 2) / 2;
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	return 0;
//}

////1984. 学生分数的最小差值
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//	int minimumDifference(vector<int>& nums, int k) {
//		sort(nums.begin(), nums.end());
//
//		int min = 0;
//		for (int i = 0; i <= (int)nums.size() - k; i++)
//		{
//			int diff = nums[i + k - 1] - nums[i];
//			if (i == 0)
//				min = diff;
//			else if (diff < min)
//				min = diff;
//		}
//		return min;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 9,4,1,7 };
//	int k = 2;
//	cout << Solution().minimumDifference(nums, k) << endl;
//	return 0;
//}


////1991. 找到数组的中间位置
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int findMiddleIndex(vector<int>& nums) {
//		int sum = 0;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			sum += nums[i];
//		}
//		int leftsum = 0;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			if (leftsum * 2 + nums[i] == sum)
//				return i;
//			else
//				leftsum += nums[i];
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 0,0,0,0 };
//	cout << Solution().findMiddleIndex(nums) << endl;
//}


//#include<iostream>
//#include"add.h"
//using namespace std;
//int main()
//{
//	cout << Add(10, 10) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class A
//{
//public:
//
//protected:
//	string _name = "张三";
//	int _id = 111;
//};
//
//class B :public A
//{
//public:
//	void print()
//	{
//		cout << _name << endl;
//		cout << _id << endl;
//	}
//protected:
//	int _id = 666;
//};
//
//int main()
//{
//	B b;
//	b.print();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class A
//{
//public:
//	string _name;
//		int _age;
//};
//
//class B :public A
//{
//private:
//	int _id;
//};
//
//int main()
//{
//	B b;
//	//子对象可以直接赋值给父类对象/指针/引用
//	A a = b;
//	A* c = &b;
//	A& d = b;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Person
//{
//protected:
//	string _name = "张三";
//	int _age = 19;
//	string _id = "12345";//身份证号
//};
//
//struct Student :public Person
//{
//public:
//	void print()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//		cout << _id << endl;
//		cout << "身份证号" << Person::_id << endl;
//	}
//protected:
//	string _id = "200108";//学号
//};
//
//int main()
//{
//	Student s;
//	s.print();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class A
//{
//public:
//	void Fun()
//	{
//		cout << "Fun()" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	void Fun()
//	{
//		//和基类中构成隐藏，成员函数满足同名就构成隐藏
//		cout << "Fun1()" << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	b.Fun();//构成隐藏时 默认调用当前类中的函数
//	b.A::Fun();//调用基类
//	return 0;
//}

////乐鑫01. 录取分数线
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	double getAdmissionLine(int k, vector<double>& scores) {
//		sort(scores.rbegin(), scores.rend());
//		return scores[k - 1];
//	}
//};
//
//int main()
//{
//	vector<double> nums{ 162.5,321.0,448.0,543.0,499.0,99.0,641.5,442.5,618.5,678.0,675.0,650.5,646.5,518.0,703.5,62.0,13.0,94.0,40.5,422.5 };
//	int k = 6;
//	cout << Solution().getAdmissionLine(k, nums) << endl;
//	return 0;
//}

////1979. 找出数组的最大公约数
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int findGCD(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//
//		int max = nums[nums.size() - 1];
//		int min = nums[0];
//
//		while (min)
//		{
//			int tmp = min;
//			min = max % min;
//			max = tmp;
//		}
//		return max;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 2,5,6,9,10 };
//	cout << Solution().findGCD(nums) << endl;
//	return 0;
//}

////剑指 Offer 39. 数组中出现次数超过一半的数字
//#include<iostream>
//#include<vector>
//using namespace std;
//
////一个数出现的次数超过数组长度的一半 也就是说 它出现的次数比其他数出现的次数和还要多
//class Solution {
//public:
//	int majorityElement(vector<int>& nums) {
//		int count = 1, flag = nums[0];
//		for (int i = 1; i < (int)nums.size(); i++)
//		{
//			if (flag == nums[i])
//				count++;
//			else
//				count--;
//			if (count == 0)
//			{
//				flag = nums[i];
//				count = 1;
//			}
//		}
//		return flag;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//	cout << Solution().majorityElement(nums) << endl;
//}


//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(const string& name = "张三", const string& sex = "男")
//		:_name(name)
//		,_sex(sex)
//	{
//		cout << "Person()" << endl;
//	}
//
//	Person(const Person& person)
//	{
//		_name = person._name;
//		_sex = person._sex;
//		cout << "Person()拷贝构造" << endl;
//	}
//
//	Person operator=(const Person& p)
//	{
//		_name = p._name;
//		_sex = p._sex;
//		cout << "Person operator" << endl;
//		return *this;
//	}
//
//	~Person()
//	{
//		cout << "~Person" << endl;
//	}
//protected:
//	string _name;
//	string _sex;
//};
//
//class Student :public Person
//{
//public:
//	Student(const string& name = "张三", const string& sex = "男", const int age = 18)
//		: Person(name, sex)
//		, _age(age)
//	{
//		cout << "Student()" << endl;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _sex << " " << _age << endl;
//	}
//
//	Student(const Student& student)
//		:Person(student)
//		, _age(student._age)
//	{
//		cout << "Student()拷贝构造" << endl;
//	}
//
//	Student operator=(const Student& student)
//	{
//		Person::operator=(student);
//		_age = student._age;
//		return *this;
//		cout << " Strudent operator=()" << endl;
//	}
//
//	~Student()
//	{
//		cout << "~Student" << endl;
//	}
//protected:
//	int _age;
//};
//
//int main()
//{
//	Student s("张三", "女", 78);
//	s.Print();
//	Student a(s);
//	a.Print();
//
//	Student b;
//	b = s;
//	b.Print();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	string _name;
//	static int _age;
//};
//
//int Person::_age = 0;
//
//class Student : public Person
//{
//public:
//	string _sex;
//};
//
//class Graduate : public Student
//{
//public:
//	string _major;//科目
//};
//
//int main()
//{
//	Person a;
//	Student b;
//	Graduate c;
//	a._age += 1;
//	a._age++;
//	cout << a._age << endl;
//	cout << b._age << endl;
//	cout << c._age << endl;
//
//	cout << &a._age << " " << &b._age << " " << &c._age << endl;
//	return 0;
//}


////虚继承
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int _a;
//};
//
//class B :virtual public A
//{
//public:
//	int _b;
//};
//
//class C : virtual public A
//{
//public:
//	int _c;
//};
//
//class D :public B, public C
//{
//public:
//	int _d;
//};
//int main()
//{
//	D d;
//	cout << sizeof(d) << endl;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//	return 0;
//}

////剑指 Offer 03. 数组中重复的数字
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution {
////public:
////	int findRepeatNumber(vector<int>& nums) {
////		for (int i = 0; i < (int)nums.size(); i++)
////		{
////			while (nums[i] != i)
////			{
////				if (nums[i] == nums[nums[i]])
////					return nums[i];
////				swap(nums[i], nums[nums[i]]);
////			}
////		}
////		return nums[0];
////	}
////};
//
////class Solution {
////public:
////	int findRepeatNumber(vector<int>& nums) {
////		vector<int> flag;
////		flag.resize(nums.size(), 0);
////
////		int i = 0;
////		for (i = 0; i < (int)nums.size(); i++)
////		{
////			if (flag[nums[i]] == 0)
////				flag[nums[i]]++;
////			else
////				break;
////		}
////		return nums[i];
////	}
////};
//
//
//class Solution {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//
//		int prev = nums[0];
//		int i = 1;
//		for (i = 1; i < (int)nums.size(); i++)
//		{
//			if (prev == nums[i])
//				break;
//			else
//			{
//				prev = nums[i];
//			}
//		}
//		return nums[i];
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 2, 3, 1, 0, 2, 5, 3 };
//	cout << Solution().findRepeatNumber(nums) << endl;
//	return 0;
//}


////剑指 Offer 05. 替换空格
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	string replaceSpace(string s) {
//		int count = 0;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			if (s[i] == ' ')
//				count++;
//		}
//		string ret;
//		ret.resize(s.size() + count * 3 + 1);
//
//		int insert = 0;
//		for (int i = 0; i <= (int)s.size(); i++)
//		{
//			if (s[i] == ' ')
//			{
//				ret[insert++] = '%';
//				ret[insert++] = '2';
//				ret[insert++] = '0';
//			}
//			else
//				ret[insert++] = s[i];
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	string s{ "" };
//	cout << Solution().replaceSpace(s) << endl;
//	return 0;
//}

////两个栈实现一个队列
//#include<iostream>
//#include<stack>
//using namespace std;
//class CQueue {
//public:
//	CQueue() {
//
//	}
//
//	void appendTail(int value) {
//		st1.push(value);
//	}
//
//	int deleteHead()
//	{
//		if (st1.empty() && st2.empty())
//			return -1;
//		if (st2.empty())
//		{
//			while (!st1.empty())
//			{
//				st2.push(st1.top());
//				st1.pop();
//			}
//		}
//		int tmp = st2.top();
//		st2.pop();
//		return tmp;
//	}
//private:
//	stack<int> st1;
//	stack<int> st2;
//};

//405. 数字转换为十六进制数
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	string toHex(int num) {
		string ret, nums = "0123456789abcdef";
		unsigned tmp = num;

		if (num == 0)
			ret.push_back('0');
		while (tmp)
		{
			ret = ret + nums[tmp & 0xf];
			tmp >>= 4;
		}
		reverse(ret.begin(), ret.end());
		return ret;
	}
};
int main()
{
	int num = 0;
	cout << Solution().toHex(num) << endl;
	return 0;
}