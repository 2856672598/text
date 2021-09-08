//#include<iostream>
//#include<string.h>
//using namespace std;
//
////class Solution
////{
////public:
////	int lengthOfLastWord(string s)
////	{
////		int i = s.size() - 1;
////		while (i >= 0 && s[i] == ' ')
////		{
////			i--;
////		}
////		int count = 0;
////		while (i >= 0 && s[i] != ' ')
////		{
////			count++;
////			i--;
////		}
////		return count;
////	}
////};
//
//class Solution 
//{
//public:
//	int lengthOfLastWord(string s)
//	{
//		int count = 0;
//		for (int i = s.size() - 1; i >= 0; i--)
//		{
//			if (s[i] != ' ')
//				count++;
//			if (s[i] == ' '&&count != 0)
//				break;
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	string s1("a");
//	cout << Solution().lengthOfLastWord(s1) << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void text_vector1()
//{
//	//三种遍历方式
//	vector<int>s1;
//	s1.push_back(1);
//	s1.push_back(2);
//	s1.push_back(3);
//
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//
//	//迭代器
//	vector<int>::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//	//范围for
//	for (auto s : s1)
//	{
//		cout << s << " ";
//	}
//	cout << endl;
//}
//
//void print_vector(const vector<int>& s)
//{
//	vector<int>::const_iterator it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//}
//
////迭代器
//void text_vector2()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	//正常的可读 可写
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//	print_vector(v);
//
//	//逆序可读可写
//	vector<int>::reverse_iterator rit = v.rbegin();
//	while (rit != v.rend())
//	{
//		cout << *rit << " ";
//		rit++;
//	}
//	cout << endl;
//}
//
//void text_vector3()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.insert(v.begin(), 0);
//	v.insert(v.end(), 9);
//
//	for (auto s : v)
//	{
//		cout << s;
//	}
//	cout << endl;
//
//	//删除指定位置
//	v.erase(v.begin());
//	for (auto s : v)
//	{
//		cout << s;
//	}
//	cout << endl;
//	//删除某段
//	v.erase(v.begin(), v.end());
//	for (auto s : v)
//	{
//		cout << s;
//	}
//	cout << endl;
//}
//
//void text_vector4()
//{
//	vector<int> v;
//	v.push_back(8);
//	v.push_back(18);
//	v.push_back(5);
//	v.push_back(30);
//
//	//删除18；
//	vector<int>::iterator pos = find(v.begin(), v.end(), 18);
//	if (pos != v.end())
//	{
//		v.erase(pos);
//	}
//
//	for (auto s : v)
//	{
//		cout << s << " ";
//	}
//	cout << endl;
//
//	//排序
//	sort(v.begin(), v.end());
//
//	for (auto e : v)
//		cout << e << " ";
//	cout << endl;
//}
//
//int main()
//{
//	//text_vector1();
//
//	//text_vector2();
//
//	//text_vector3();
//
//	text_vector4();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int singleNumber(vector<int>& nums)
//	{
//		int ret = 0;
//		for (auto e : nums)
//		{
//			ret ^= e;
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums;
//	nums.push_back(2);
//	nums.push_back(2);
//	nums.push_back(1);
//
//	cout << Solution().singleNumber(nums) << endl;
//	return 0;
//}

////137. 只出现一次的数字 II
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int singleNumber(vector<int>& nums)
//	{
//		int arr[32] = { 0 };
//		for (size_t i = 0; i < nums.size(); i++)
//		{
//			unsigned tmp = nums[i];
//			int pos = 0;
//			while (tmp)
//			{
//				arr[pos] += tmp & 1;
//				tmp >>= 1;
//				pos++;
//			}
//		}
//		int ret = 0;
//		for (size_t i = 0; i < 32; i++)
//		{
//			if (arr[i] % 3 == 1)
//			{
//				ret += 1 << i;
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> v;
//	v.push_back(2);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(2);
//	cout << Solution().singleNumber(v) << endl;
//	return 0;
//}


////260. 只出现一次的数字 III
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int _singleNumber(vector<int>& nums)
//	{
//		int ret = 0;
//		for (auto e : nums)
//		{
//			ret ^= e;
//		}
//		return ret;
//	}
//
//	vector<int> singleNumber(vector<int>& nums)
//	{
//		int tmp = 0;
//		for (auto e : nums)
//		{
//			tmp ^= e;
//		}
//		int flag = 1;
//		while (tmp)
//		{
//			if (tmp&flag)
//				break;
//			flag <<= 1;
//		}
//
//		vector<int> nums1;
//		vector<int> nums2;
//
//		for (size_t i = 0; i < nums.size(); i++)
//		{
//			if ((nums[i] & flag) != 0)
//				nums1.push_back(nums[i]);
//			else
//				nums2.push_back(nums[i]);
//		}
//		
//		vector<int> ret;
//		ret.push_back(_singleNumber(nums1));
//		ret.push_back(_singleNumber(nums2));
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums;
//	nums.push_back(1);
//	nums.push_back(2);
//	nums.push_back(1);
//	nums.push_back(3);
//	nums.push_back(2);
//	nums.push_back(5);
//
//	vector<int> ret = Solution().singleNumber(nums);
//	for (auto e : ret)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}


////JZ28 数组中出现次数超过一半的数字
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		sort(numbers.begin(), numbers.end());
//
//		size_t flag = numbers.size() / 2;
//		int cur = 0;
//		while (flag < numbers.size() && numbers[cur] != numbers[flag])
//		{
//			cur++;
//			flag++;
//		}
//		return numbers[cur];
//	}
//};
//
//int main()
//{
//	vector<int>nums;
//	nums.push_back(3);
//	nums.push_back(3);
//	nums.push_back(3);
//	nums.push_back(2);
//	nums.push_back(2);
//
//	cout << Solution().MoreThanHalfNum_Solution(nums) << endl;
//	return 0;
//}

//JZ30 连续子数组的最大和
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	int FindGreatestSumOfSubArray(vector<int> array)
	{
		int max = array[0];
		int sum = 0;
		for (auto e : array)
		{
			if (sum <= 0)
				sum = e;
			else
				sum += e;
			if (max < sum)
				max = sum;
		}
		return max;
	}
};
int main()
{
	vector<int> array;
	array.push_back(1);
	array.push_back(-2);
	array.push_back(3);
	array.push_back(10);
	array.push_back(-4);
	array.push_back(7);
	array.push_back(2);
	array.push_back(-5);

	cout << Solution().FindGreatestSumOfSubArray(array) << endl;
	return 0;
}