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


