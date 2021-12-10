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

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//class String
//{
//public:
//	String(const char* str = " ")
//	{
//		_str = new char[strlen(str) + 1];
//		strcpy(_str, str);
//	}
//
//	String(const String& s)
//	{
//		_str = new char[strlen(s._str) + 1];
//		strcpy(_str, s._str);
//		cout << "深拷贝" << endl;
//	}
//	
//	String(const String&& s)
//	{
//		_str = nullptr;
//		cout << "浅拷贝" << endl;
//	}
//
//private:
//	char* _str;
//};
//String f(const char* str)
//{
//	String tmp(str);
//	return tmp;
//}
//int main()
//{
//	String s("hello word");
//	String a(s);
//	String b(f("临时"));
//
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	int longestConsecutive(vector<int>& nums)
//	{
//		unordered_set<int>flag;
//		for (auto e : nums)
//		{
//			flag.insert(e);
//		}
//		int maxleng = 0;
//		int next = 0;
//		int continu = 0;
//		for (auto e : flag)
//		{
//			next = e + 1;
//			continu = 1;
//			while (flag.count(next))
//			{
//				next += 1;
//				continu++;
//			}
//
//			maxleng = max(maxleng, continu);
//		}
//		return maxleng;
//	}
//};
//int main()
//{
//	vector<int >nums{ 100,4,200,1,3,2 };
//	cout << Solution().longestConsecutive(nums) << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	int kthSmallest(vector<vector<int>>& matrix, int k)
//	{
//		vector<int>flag;
//		for (int i = 0; i < matrix.size(); i++)
//		{
//			for (int j = 0; j < matrix[0].size(); j++)
//			{
//				flag.push_back(matrix[i][j]);
//			}
//		}
//		sort(flag.begin(), flag.end());
//		return flag[k - 1];
//	}
//};
//
//int main()
//{
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr1[100], arr2[100];
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		arr2[i] = arr1[i];
//		if (i % 2)
//			printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[100][100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j =0; j <n-i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[100][100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//double avg(int A[], int s, int e)
//{
//	double sum = 0;
//	for (int i = s; i <= e; i++)
//	{
//		sum += A[i];
//	}
//	return sum / (e - s + 1);
//}
//int main()
//{
//	int n;
//	int arr[100];
//	scanf("%d", &n);
//	int s, e;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d %d", &s, &e);
//	double ret = avg(arr, s, e);
//	printf("%lf", ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[100];
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m;
//	scanf("%d", &m);
//
//	int left = 0, right = n - 1;
//	int mid = 0;
//	while (left < right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > m)
//			right = mid - 1;
//		else if (arr[mid] < m)
//			left = mid + 1;
//		else
//			break;
//	}
//	if (left != right)
//		printf("%d", mid);
//	else
//		printf("null\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct Date
//{
//	int _year;
//	int _month;
//	int _day;
//};
//void datePrint(struct Date date)
//{
//	printf("%d/%d/%d\n", date._day, date._month, date._year);
//}
//int main()
//{
//	struct Date date;
//	printf("输入年月日，中间用空格隔开\n");
//	scanf("%d %d %d", &date._year, &date._month, &date._day);
//	datePrint(date);
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////class Solution
////{
////public:
////	int maxPower(string s)
////	{
////		int maxLength = 1;
////		for (int i = 0; i < (int)s.size(); i++)
////		{
////			int count = 1;
////			for (int j = i + 1; j < (int)s.size(); j++)
////			{
////				if (s[i] != s[j])
////					break;
////				count++;
////			}maxLength = max(maxLength, count);
////		}
////		return maxLength;
////	}
////};
//
////前后指针
//class Solution
//{
//public:
//	int maxPower(string s)
//	{
//		int cur = 1, prev = 0;
//		int maxlength = 1, count = 1;
//		while (cur < (int)s.size())
//		{
//			if (s[cur] == s[prev])
//			{
//				count++;
//				cur++;
//			}
//			else
//			{
//				prev = cur;
//				cur++;
//				maxlength = max(maxlength, count);
//				count = 1;
//			}
//		}
//		if (cur - 1 != prev)
//			maxlength = max(maxlength, count);
//		return maxlength;
//	}
//};
//int main()
//{
//	string num("cc");
//	cout << Solution().maxPower(num) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//	int countWords(vector<string>& words1, vector<string>& words2)
//	{
//		map<string, int>m1, m2;
//		for (auto e : words1)
//		{
//			m1[e]++;
//		}
//
//		for (auto e : words2)
//		{
//			m2[e]++;
//		}
//
//		map<string, int>flag;
//		for (auto e : words1)
//		{
//			if (m1[e] == 1)
//				flag[e]++;
//		}
//
//		for (auto e : words2)
//		{
//			if (m1[e] == 1)
//				flag[e]++;
//		}
//		int count = 0;
//		for (auto e : flag)
//		{
//			if (e.second == 2)
//				count++;
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	vector<string>work1{ "leetcode","is","amazing","as","is" };
//	vector<string>work2{ "amazing","leetcode","is" };
//	cout << Solution().countWords(work1, work2) << endl;
//}


//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
////class Solution
////{
////public:
////	bool isAnagram(string s, string t)
////	{
////		if (s.size() != t.size())
////			return false;
////		map<char, int>m1;
////		for (auto e : s)
////			m1[e]++;
////		map<char, int>m2;
////		for (auto e : t)
////			m2[e]++;
////		for (auto e : s)
////		{
////			if (m1[e] != m2[e])
////				return false;
////		}
////		return true;
////	}
////};
//
//class Solution
//{
//public:
//	bool isAnagram(string s, string t)
//	{
//		if (s.size() != t.size())
//			return false;
//		int arr[26] = { 0 };
//		for (auto e : s)
//		{
//			arr[e - 'a']++;
//		}
//
//		for (auto e : t)
//		{
//			arr[e - 'a']--;
//		}
//
//		for (auto e : arr)
//		{
//			if (e != 0)
//				return false;
//		}
//		return true;
//	}
//};
//int main()
//{
//	string s{ "anagram" }, t{ "nagaram" };
//	cout << Solution().isAnagram(s, t) << endl;
//	return 0;
//}


#include<iostream>
#include<unordered_set>
using namespace std;

class Solution
{
public:
	bool isHappy(int n)
	{
		unordered_set<int>flag;
		while (n != 1)
		{
			int tmp = n;
			n = 0;
			while (tmp)
			{
				n += (int)pow(tmp % 10, 2);
				tmp /= 10;
			}

			if (flag.find(n) != flag.end())
			{
				//说明产生了循环
				return false;
			}

			flag.insert(n);
		}
		return true;
	}
};

int main()
{
	int n = 2;
	cout << Solution().isHappy(n) << endl;
	return 0;
}