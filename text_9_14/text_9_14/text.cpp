
////27. 移除元素
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int removeElement(vector<int>& nums, int val)
//	{
//		vector<int>::iterator it = nums.begin();
//		while (it != nums.end())
//		{
//			if (*it == val)
//			{
//				it = nums.erase(it);
//			}
//			else
//				it++;
//		}
//		return nums.size();
//	}
//};
//
//int main()
//{
//	vector<int> v{ 3,2,2,3 };
//	int val = 3;
//	cout << Solution().removeElement(v, val) << endl;
//	return 0;
//}


////35. 搜索插入位置
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int searchInsert(vector<int>& nums, int target)
//	{
//		int left = 0, right = nums.size() - 1;
//		int mid = 0;
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//
//			if (nums[mid] > target)
//			{
//				right = mid - 1;
//			}
//			else if (nums[mid] < target)
//			{
//				left = mid + 1;
//			}
//			else
//				return mid;
//		}
//		return left;
//	}
//};
//
//
//int main()
//{
//	vector<int>v{ 1,3,5,7 };
//	int target = 6;
//	cout << Solution().searchInsert(v, target) << endl;
//	return 0;
//}


////66. 加一
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int> plusOne(vector<int>& digits)
//	{
//		int sz = digits.size() - 1;
//		digits[sz] += 1;
//		while (sz > 0 && digits[sz] >= 10)
//		{
//			digits[sz - 1] += 1;
//			digits[sz] -= 10;
//			sz--;
//		}
//		if (digits[sz] >= 10)
//		{
//			digits[sz] -= 10;
//			digits.insert(digits.begin(), 1);
//		}
//
//		return digits;
//	}
//};
//
//int main()
//{
//	vector<int> v{ 9 };
//	Solution().plusOne(v);
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	return 0;
//}


////53. 最大子序和
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	int maxSubArray(vector<int>& nums)
//	{
//		int maxsum = nums[0], sum = nums[0];
//		size_t size = nums.size();
//		for (size_t i = 1; i < size; i++)
//		{
//			if (sum > 0)
//				sum += nums[i];
//			else
//			{
//				if (sum < nums[i])
//					sum = nums[i];
//			}
//			if (sum > maxsum)
//				maxsum = sum;
//		}
//		return maxsum;
//	}
//};
//
//
////class Solution
////{
////public:
////	int maxSubArray(vector<int>& nums)
////	{
////		size_t sz = nums.size();
////		int maxsum = nums[0], sum = 0;
////		int begin = 0;
////		for (size_t i = 0; i < sz; i++)
////		{
////			sum = max(sum + nums[i], nums[i]);
////			maxsum = max(maxsum, sum);
////		}
////		return maxsum;
////	}
////};
//
//int main()
//{
//	vector<int> v{ -2,1,-3,4,-1,2,1,-5,4 };
//	cout << Solution().maxSubArray(v) << endl;
//	return 0;
//}


////217. 存在重复元素
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	bool containsDuplicate(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		size_t sz = nums.size();
//		size_t fast = 1, slow = 0;
//
//		while (fast < sz)
//		{
//			if (nums[fast] == nums[slow])
//				return true;
//			fast++;
//			slow++;
//		}
//		return false;
//	}
//};
//
//
//int main()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	cout << Solution().containsDuplicate(v) << endl;
//	return 0;
//}

////88. 合并两个有序数组
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution
////{
////public:
////	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
////	{
////		for (int i = 0; i < n; i++)
////		{
////			nums1[m + i] = nums2[i];
////		}
////		sort(nums1.begin(), nums1.end());
////	}
////};
//
//class Solution
//{
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
//	{
//		int* nums = new int[m + n];
//		int cur = 0, begin1 = 0, begin2 = 0;
//		while (begin1 < m || begin2 < n)
//		{
//			if (begin1 == m)
//			{
//				nums[cur++] = nums2[begin2++];
//			}
//			else if (begin2 == n)
//			{
//				nums[cur++] = nums1[begin1++];
//			}
//			else if (nums1[begin1] < nums2[begin2])
//			{
//				nums[cur++] = nums1[begin1++];
//			}
//			else
//				nums[cur++] = nums2[begin2++];
//		}
//
//		for (size_t i = 0; i < nums1.size(); i++)
//		{
//			nums1[i] = nums[i];
//		}
//	}
//};
//
//int main()
//{
//	vector<int> nums1{ 1,2,3,0,0,0 };
//	vector<int> nums2{ 2,5,6 };
//	Solution().merge(nums1, 3, nums2, 3);
//
//	for (auto e : nums1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}


////268. 丢失的数字
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution
////{
////public:
////	int missingNumber(vector<int>& nums)
////	{
////		size_t sz = nums.size();
////		int sum = (1 + sz)*sz / 2;
////		for (size_t i = 0; i < sz; i++)
////		{
////			sum -= nums[i];
////		}
////		return sum;
////	}
////};
//
//
//class Solution
//{
//public:
//	int missingNumber(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		size_t sz = nums.size();
//		for (size_t i = 0; i < sz; i++)
//		{
//			if (nums[i] != i)
//				return i;
//		}
//		if (nums[sz - 1] != sz)
//			return sz;
//
//		return -1;
//	}
//};
//
//int main()
//{
//	vector<int> v{ 3,4,1,5,2 };
//	cout << Solution().missingNumber(v) << endl;
//	return 0;
//}


////204. 计数质数
//#include<iostream>
//#include<vector>
//#include<math.h>
//using namespace std;
//
////class Solution
////{
////public:
////	bool isPrimes(int n)
////	{
////		for (int i = 2; i <= (int)sqrt(n); i += 2)
////		{
////			if (n%i == 0)
////				return false;
////		}
////		return true;
////	}
////	int countPrimes(int n)
////	{
////		int count = 0;
////		for (int i = 2; i < n; i++)
////		{
////			if (i % 2 != 0 && isPrimes(i))
////				count++;
////		}
////		return count;
////	}
////};
//
////埃氏筛
//class Solution
//{
//public:
//	int countPrimes(int n)
//	{
//		vector<int> ret(n, 1);
//		for (int i = 2; i <= (int)sqrt(n); i++)
//		{
//			if (ret[i] == 1)
//			{
//				for (int j = i + i; j < n; j += i)
//				{
//					ret[j] = false;
//				}
//			}
//		}
//
//		int count = 0;
//		for (size_t i = 2; i < ret.size(); i++)
//		{
//			if (ret[i] != 0)
//				count++;
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	cout << Solution().countPrimes(n) << endl;
//	return 0;
//}



////389. 找不同
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	char findTheDifference(string s, string t)
//	{
//		sort(s.begin(), s.end());
//		sort(t.begin(), t.end());
//		size_t sz = s.size();
//		for (size_t i = 0; i < sz; i++)
//		{
//			if (s[i] != t[i])
//				return t[i];
//		}
//		return t[sz];
//	}
//};
//
//int main()
//{
//	string s1("abcd");
//	string s2("abcde");
//	cout << Solution().findTheDifference(s1, s2) << endl;
//	return 0;
//}


////709. 转换成小写字母
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	string toLowerCase(string s)
//	{
//		size_t size = s.size();
//		for (size_t i = 0; i < size; i++)
//		{
//			if (s[i] >= 'A'&&s[i] <= 'Z')
//				s[i] += 32;
//		}
//		return s;
//	}
//};
//
//int main()
//{
//	string s1("HELLO");
//	cout << Solution().toLowerCase(s1) << endl;
//	return 0;
//}


////392. 判断子序列
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	bool isSubsequence(string s, string t)
//	{
//		string::iterator it = t.begin();
//		string::iterator is = s.begin();
//		while (it != t.end())
//		{
//			if (*it == *is)
//			{
//				is++;
//			}
//			it++;
//		}
//		if (is == s.end())
//			return true;
//		return false;
//	}
//};
//
//int main()
//{
//	string s1("abc");
//	string s2("ahbgdc");
//	cout << Solution().isSubsequence(s1, s2) << endl;
//	return 0;
//}


////520. 检测大写字母
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	bool detectCapitalUse(string word)
//	{
//		size_t sz = word.size();
//		int count = 0;//大写字母个数
//		int flag = 0;
//		for (size_t i = 0; i < sz; i++)
//		{
//			if (word[i] >= 'A'&&word[i] <= 'Z')
//			{
//				if (i == 0)
//					flag = 1;
//				count++;
//			}
//		}
//		if (count == sz || (count == 1 && flag == 1) || count == 0)
//			return true;
//		return false;
//	}
//};
//int main()
//{
//	string word("ffffffG");
//	cout << Solution().detectCapitalUse(word) << endl;
//	return 0;
//}


////796. 旋转字符串
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
////class Solution
////{
////public:
////	bool rotateString(string s, string goal)
////	{
////		if (s.size() != goal.size())
////			return false;
////		s.append(s);
////		if (s.find(goal) != string::npos)
////			return true;
////		return false;
////	}
////};
//
//class Solution
//{
//public:
//	bool rotateString(string s, string goal)
//	{
//		if (s.size() != goal.size())
//			return false;
//		s += s;
//		string::iterator is = s.begin();
//		string::iterator ig = goal.begin();
//		string::iterator p = s.begin();
//		while (p != s.end())
//		{
//			is = p;
//			while (*is == *ig)
//			{
//				is++;
//				ig++;
//			}
//			if (ig == goal.end())
//				return true;
//
//			ig = goal.begin();
//			p++;
//		}
//		return false;
//	}
//};
//
//int main()
//{
//	string s1("abcde");
//	string s2("abced");
//	cout << Solution().rotateString(s1, s2) << endl;
//	return 0;
//}


////453. 最小操作次数使数组元素相等
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution
////{
////public:
////	int minMoves(vector<int>& nums)
////	{
////		sort(nums.begin(), nums.end());
////		size_t size = nums.size();
////		int count = 0;
////		while (true)
////		{
////			int diff = nums[0] - nums[size - 1];
////			count += diff;
////			if (diff == 0)
////				return count;
////			for (size_t i = 0; i < size; i++)
////			{
////				if (i != size - 1)
////				nums[i] += diff;
////			}
////			sort(nums.begin(), nums.end());
////		}
////	}
////};
//
//class Solution
//{
//public:
//	int minMoves(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		size_t count = 0;
//		for (int i = nums.size() - 1; i >= 0; i--)
//		{
//			count += nums[i] - nums[0];
//		}
//		return count;
//	}
//};
//int main()
//{
//	vector<int>nums{ 1,2,3 };
//	cout << Solution().minMoves(nums) << endl;
//	return  0;
//}


////14. 最长公共前缀
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//
//class Solution
//{
//public:
//	string longestCommonPrefix(vector<string>& strs)
//	{
//		string ret;
//		size_t sz = strs.size();
//
//		size_t min = strs[0].size();
//		for (size_t i = 0; i < strs.size(); i++)
//		{
//			if (min > strs[i].size())
//			{
//				min = strs[i].size();
//			}
//		}
//
//		int count = 0;
//
//		for (size_t i = 0; i < min; i++)
//		{
//			count = 0;
//			for (size_t j = 0; j < strs.size() - 1; j++)
//			{
//				if (strs[j][i] == strs[j + 1][i])
//					count++;
//				else
//					return ret;
//			}
//			if (count == strs.size() - 1)
//				ret.push_back(strs[0][i]);
//		}
//
//		return ret;
//	}
//};
//int main()
//{
//	vector<string> str{ "flower","flow","flight" };
//	cout << Solution().longestCommonPrefix(str) << endl;
//	return 0;
//}

//412. Fizz Buzz
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution
{
public:
	vector<string> fizzBuzz(int n)
	{
		vector<string> ret;
		for (int i = 1; i <= n; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
				ret.push_back("FizzBuzz");
			else if (i % 3 == 0)
				ret.push_back("Fizz");
			else if (i % 5 == 0)
				ret.push_back("Buzz");
			else
				ret.push_back(to_string(i));
		}
		return ret;
	}
};

int main()
{
	int n = 0;
	cin >> n;
	vector <string> ret = Solution().fizzBuzz(n);
	vector<string>::iterator it = ret.begin();
	while (it != ret.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	return 0;
}