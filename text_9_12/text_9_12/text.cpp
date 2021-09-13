//#include<iostream>
//#include<string>
//using namespace std;
//#include"vector.h"
//
//int main()
//{
//	//Solution::text_vector1();
//
//	//Solution::text_vector2();
//
//	//Solution::text_vector3();
//
//	Solution::text_vector4();
//	return 0;
//}


#include<iostream>
#include<vector>
using namespace std;

//class Solution
//{
//public:
//	void reverseString(vector<char>& s)
//	{
//		vector<char>:: iterator left = s.begin();
//		vector<char>::iterator right = s.end() - 1;
//		while (left < right)
//		{
//			swap(*left, *right);
//			left++;
//			right--;
//		}
//	}
//};

class Solution
{
public:
	void reverseString(vector<char>& s)
	{
		size_t left = 0, right = s.size() - 1;
		while (left < right)
		{
			swap(s[left], s[right]);
			left++;
			right--;
		}
	}
};

int main()
{
	vector<char> v{ 'h','e','l','l','0' };
	Solution().reverseString(v);

	vector<char>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	return 0;
}