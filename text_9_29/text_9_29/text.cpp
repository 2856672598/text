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

//剑指 Offer 39. 数组中出现次数超过一半的数字
#include<iostream>
#include<vector>
using namespace std;

//一个数出现的次数超过数组长度的一半 也就是说 它出现的次数比其他数出现的次数和还要多
class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int count = 1, flag = nums[0];
		for (int i = 1; i < (int)nums.size(); i++)
		{
			if (flag == nums[i])
				count++;
			else
				count--;
			if (count == 0)
			{
				flag = nums[i];
				count = 1;
			}
		}
		return flag;
	}
};

int main()
{
	vector<int> nums{ 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	cout << Solution().majorityElement(nums) << endl;
}