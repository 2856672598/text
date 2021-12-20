//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int>tmp;
//	void backtracking(int n, int k, int index, vector<vector<int>>&ret)
//	{
//		if (k == 0)
//		{
//			ret.push_back(tmp);
//			return;
//		}
//		for (int i = index; i <= n; i++)
//		{
//			tmp.push_back(i);
//			backtracking(n, k - 1, i + 1, ret);
//			tmp.pop_back();//需要回溯了
//		}
//	}
//	vector<vector<int>> combine(int n, int k)
//	{
//		vector<vector<int>>ret;
//		backtracking(n, k, 1, ret);
//		return ret;
//	}
//};
//
//int main()
//{
//	int n = 4, k = 2;
//	Solution().combine(n, k);
//	return  0;
//}

////216. 组合总和 III
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<vector<int>> combinationSum3(int k, int n)
//	{
//		vector<vector<int>>ret;
//		int sum = 0;
//		backtracking(k, n, 1, ret, sum);
//		return ret;
//	}
//	vector<int>tmp;
//	void backtracking(int k, int n, int index, vector<vector<int>>&ret, int& sum)
//	{
//		if (k == 0)
//		{
//			if (sum == n)
//				ret.push_back(tmp);
//			return;
//		}
//		for (int i = index; i <= 9; i++)
//		{
//			tmp.push_back(i);
//			sum += i;
//			backtracking(k-1, n, i + 1, ret, sum);
//			sum -= i;
//			tmp.pop_back();
//		}
//	}
//};
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	string tmp;
//	void backtracking(const string&digits, int index, vector<string>&ret)
//	{
//		if (index == digits.size())
//		{
//			ret.push_back(tmp);
//			return;
//		}
//		int digit = digits[index] - '0';
//		string letter = letterMap[digit];
//		for (int i = 0; i < letter.size(); i++)
//		{
//			tmp.push_back(letter[i]);
//			backtracking(digits, index + 1, ret);
//			tmp.pop_back();
//		}
//	}
//	vector<string> letterCombinations(string digits)
//	{
//		if (digits.size() == 0)
//			return {};
//		vector<string>ret;
//		backtracking(digits, 0, ret);
//		return ret;
//	}
//private:
//	const string letterMap[10] = {
//		"", // 0
//		"", // 1
//		"abc", // 2
//		"def", // 3
//		"ghi", // 4
//		"jkl", // 5
//		"mno", // 6
//		"pqrs", // 7
//		"tuv", // 8
//		"wxyz", // 9
//	};
//};
//
//int main()
//{
//	return 0;
//}

////39. 组合总和
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int>tmp;
//	void _combinationSum(vector<int>& candidates, int target, int index, vector<vector<int>>& ret, int sum)
//	{
//		if (sum == target)
//		{
//			ret.push_back(tmp);
//			return;
//		}
//		else if (sum > target)
//			return;
//
//		for (int i = index; i < (int)candidates.size(); i++)
//		{
//			tmp.push_back(candidates[i]);
//			sum += candidates[i];
//			_combinationSum(candidates, target, i, ret, sum);
//			sum -= candidates[i];
//			tmp.pop_back();
//		}
//	}
//
//	vector<vector<int>> combinationSum(vector<int>& candidates, int target)
//	{
//		vector<vector<int>>ret;
//		int sum = 0;
//		_combinationSum(candidates, target, 0, ret, sum);
//		return ret;
//	}
//};
//int main()
//{
//	vector<int> candidates{ 2, 3, 6, 7 };
//	int target = 7;
//	vector<vector<int>>ret = Solution().combinationSum(candidates, target);
//	for (int i = 0; i < (int)ret.size(); i++)
//	{
//		for (int j = 0; j < (int)ret[i].size(); j++)
//			cout << ret[i][j] << " ";
//		cout << endl;
//	}
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
//	vector<int>tmp;
//	vector<int>flag;
//	void backtracking(vector<int>& candidates, int target, int index, int& sum, vector<vector<int>>&ret)
//	{
//		if (sum == target)
//		{
//			ret.push_back(tmp);
//			return;
//		}
//		for (int i = index; i < (int)candidates.size() && sum + candidates[i] <= target; i++)
//		{
//			//去重，去掉的是同一层重复的数
//			if (i > 0 && candidates[i] == candidates[i - 1] && flag[i - 1] == false)
//				continue;
//			tmp.push_back(candidates[i]);
//			sum += candidates[i];
//			flag[i] = true;
//			backtracking(candidates, target, i + 1, sum, ret);
//			sum -= candidates[i];
//			flag[i] = false;
//			tmp.pop_back();
//		}
//	}
//
//	vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
//	{
//		vector<vector<int>>ret;
//		int sum = 0;
//		flag.resize(candidates.size());
//
//		sort(candidates.begin(), candidates.end());
//		backtracking(candidates, target, 0, sum, ret);
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>candidates{ 10,1,2,7,6,1,5 };
//	int target = 8;
//	vector<vector<int>>ret = Solution().combinationSum2(candidates, target);
//	for (int i = 0; i < ret.size(); i++)
//	{
//		for (int j = 0; j < ret[i].size(); j++)
//			cout << ret[i][j] << " ";
//		cout << endl;
//	}
//	return 0;
//}

////131. 分割回文串
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class Solution
//{
//public:
//	bool isPalindrome(string s, int left, int right)
//	{
//		while (left < right)
//		{
//			if (s[left++] != s[right--])
//				return false;
//		}
//		return true;
//	}
//
//	vector<string>tmp;
//	void backtracking(string s, int index, vector<vector<string>>& ret)
//	{
//		if (s.size() == index)
//		{
//			ret.push_back(tmp);
//			return;
//		}
//
//		for (int i = index; i < (int)s.size(); i++)
//		{
//			if (isPalindrome(s, index, i))
//			{
//				//是回文
//				string str = s.substr(index, i - index + 1);
//				tmp.push_back(str);
//			}
//			else
//				continue;
//			backtracking(s, i + 1, ret);
//			tmp.pop_back();
//		}
//	}
//
//	vector<vector<string>> partition(string s)
//	{
//		vector<vector<string>>ret;
//		backtracking(s, 0, ret);
//		return ret;
//	}
//};
//int main()
//{
//	string s{ "aabc" };
//	vector<vector<string>>ret = Solution().partition(s);
//
//	for (int i = 0; i < ret.size(); i++)
//	{
//		for (int j = 0; j < ret[i].size(); j++)
//		{
//			cout << ret[i][j] << " ";
//		}
//		cout << endl;
//
//	}
//	return 0;
//}

//#include<stdio.h>
////int minSubArrayLen(int target, int* nums, int numsSize)
////{
////	int begin = 0, end = 0;
////	int sum = 0;
////	int minLeng = 0;
////	while (end <= numsSize)
////	{
////		if (sum >= target)
////		{
////			if (end - begin < minLeng || minLeng == 0)
////			{
////				minLeng = end - begin;
////			}
////			sum -= nums[begin++];
////		}
////		else
////		{
////			if (end == numsSize)
////				break;
////			sum += nums[end++];
////		}
////	}
////	return minLeng;
////}
//
//
//int minSubArrayLen(int target, int* nums, int numsSize)
//{
//	int begin = 0, end = 0;
//	int sum = 0;
//	int minlength = 0;
//	while (end < numsSize)
//	{
//		sum += nums[end];
//		while (sum >= target)
//		{
//			if (end - begin + 1 < minlength || minlength == 0)
//				minlength = end - begin + 1;
//			sum -= nums[begin++];
//		}
//		end++;
//	}
//	return minlength;
//}
//int main()
//{
//	int nums[] = { 2,3,1,2,4,3 };
//	int target = 7;
//	minSubArrayLen(target, nums, sizeof(nums) / sizeof(nums[0]));
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	bool isPalindrome(const string& s)
//	{
//		int left = 0, right = s.size() - 1;
//		while (left < right)
//		{
//			if (s[left] != s[right])
//				return false;
//			left++;
//			right--;
//		}
//		return true;
//	}
//
//	string firstPalindrome(vector<string>& words)
//	{
//		for (int i = 0; i < words.size(); i++)
//		{
//			if (isPalindrome(words[i]))
//				return words[i];
//		}
//		return {};
//	}
//};
//int main()
//{
//	vector<string>words{ {"abc"}, {"car"}, {"ada"}, {"racecar"}, {"cool"} };
//	cout << Solution().firstPalindrome(words) << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class Solution
//{
//public:
//	string addSpaces(string s, vector<int>& spaces)
//	{
//		int index = 1;
//		int flag = spaces[0];
//		string ret;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			if (i == flag)
//			{
//				ret.push_back(' ');
//				if (index < spaces.size())
//					flag = spaces[index++];
//			}
//			ret.push_back(s[i]);
//		}
//		return ret;
//	}
//};
//int main()
//{
//	string s{ "icodeinpython" };
//	vector<int>spaces{ 1,5,7,9 };
//	cout << Solution().addSpaces(s, spaces) << endl;
//	return  0;
//}


//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	string tmp;
//	vector<string> ret;
//	void Backtracking(const string& s, int index, int& count)
//	{
//		if (count == 3)
//		{
//			//需要判断当前组合是否满足条件
//			if (isValid(s, index, s.size() - 1))
//			{
//				for (int j = index; j <= s.size() - 1; j++)
//				{
//					tmp.push_back(s[j]);
//				}
//				ret.push_back(tmp);
//				for (int i = index; i < s.size(); i++)
//					tmp.pop_back();
//			}
//			return;
//		}
//
//		for (int i = index; i < s.size(); i++)
//		{
//			if (isValid(s, index, i))
//			{
//				for (int j = index; j <= i; j++)
//				{
//					tmp.push_back(s[j]);
//				}
//				tmp.push_back('.');
//				count++;
//			}
//			else
//			{
//				break;
//			}
//			Backtracking(s, i + 1, count);
//			for (int j = index; j <= i + 1; j++)
//			{
//				tmp.pop_back();
//			}
//			count--;
//		}
//
//	}
//
//	bool isValid(const string& s, int left, int right)
//	{
//		if (left > right)
//			return false;
//		if (right - left + 1 > 3)
//			return false;
//		if (s[left] == '0'&&left != right)
//			return false;
//
//		int sum = 0;
//		for (int i = left; i <= right; i++)
//		{
//			if (s[i]<'0' || s[i]>'9')
//				return false;
//			sum = sum * 10 + s[i] - '0';
//			if (sum > 255)
//				return false;
//		}
//		return true;
//	}
//	vector<string> restoreIpAddresses(string s)
//	{
//		if (s.size() > 12)
//			return{};
//		int count = 0;
//		Backtracking(s, 0, count);
//		return ret;
//	}
//};
//
//int main()
//{
//	string s{ "25525511135" };
//	Solution().restoreIpAddresses(s);
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution
//{
//public:
//	vector<int>tmp;
//	void Backtracking(const vector<int>&nums, int index, vector<vector<int>>& ret)
//	{
//		ret.push_back(tmp);
//
//		for (int i = index; i < (int)nums.size(); i++)
//		{
//			tmp.push_back(nums[i]);
//			Backtracking(nums, i + 1, ret);
//			tmp.pop_back();
//		}
//	}
//
//	vector<vector<int>> subsets(vector<int>& nums)
//	{
//		vector<vector<int>>ret;
//		Backtracking(nums, 0, ret);
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,2,3 };
//	vector<vector<int>>ret = Solution().subsets(nums);
//	for (int i = 0; i < ret.size(); i++)
//	{
//		for (int j = 0; j < ret[i].size(); j++)
//		{
//			cout << ret[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//	char s[200];
//	while (~scanf("%s", s))
//	{
//		int size = strlen(s);
//		for (int i = 0; i < size; i++)
//		{
//			if (s[i] == 'T')
//				s[i] = 'U';
//		}
//		printf("%s\n", s);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int prev = 1, cur = 2;
//		if (n == prev)
//		{
//			printf("%d\n", 1);
//			continue;
//		}
//		if (n == cur)
//		{
//			printf("%d\n", 2);
//			continue;
//
//		}
//
//		int tmp = 0;
//		int i = 2;
//		while (tmp < n)
//		{
//			tmp = cur + prev;
//			prev = cur;
//			cur = tmp;
//			i++;
//		}
//		if (tmp == n)
//			printf("%d\n", i);
//		else
//			printf("%d\n", 0);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int tmp = n;
//		int sum = 0;
//		while (tmp)
//		{
//			sum = sum * 10 + tmp % 10;
//			tmp /= 10;
//		}
//		sum += n;
//		printf("%d\n", sum);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x;
//	while (~scanf("%d", &x))
//	{
//		int count = x / 8;
//		for (int i = 0; i <= x / 38; i++)
//		{
//			for (int j = 0; j <= x / 18; j++)
//			{
//				for (int z = 0; z <= x / 8; z++)
//				{
//					int sum = i * 38 + j * 18 + z * 8;
//					int tmp = i + j + z;
//					if (sum > 68)
//						tmp += 1;
//					if (sum <= x && x - sum < 8)
//					{
//						if (count > tmp)
//							count = tmp;
//					}
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void getPrimenumber(int n, long long * arr)
//{
//	int flag[10000];
//	for (int i = 2; i < 10000; i++)
//	{
//		if (flag[i])
//		{
//			for (long long j = i * i; j < 10000; j += i)
//			{
//				flag[j] = false;
//			}
//		}
//	}
//	long long insert = 0;
//	int i = 0;
//	while (i < 10000)
//	{
//		if (flag[i])
//			arr[insert++] = i;
//		if (insert == n)
//			break;
//		i++;
//	}
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int a[30][30];
//		for (int i = 0; i < n; i++)
//		{
//			a[i][0] = 1;
//			a[i][i] = 1;
//		}
//
//		for (int i = 2; i < n; i++)
//		{
//			for (int j = 1; j < i; j++)
//			{
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			}
//		}
//		long long arr[500];
//		getPrimenumber(500, arr);
//		int index = 2;
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				a[i][j] = arr[index++];
//			}
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				printf("%d ", a[i][j]);
//			}
//			printf("\n");
//		}
//	}
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	char flag[] = { 'N','E','S','W' };
//	int n;
//	char s[100];
//	while (~scanf("%d", &n))
//	{
//		scanf("%s", s);
//		int cur = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (s[i] == 'L')
//			{
//				if (cur == 0)
//					cur = 3;
//				else
//					cur -= 1;
//			}
//			else
//			{
//				if (cur == 3)
//					cur = 0;
//				else
//					cur += 1;
//			}
//		}
//		printf("%c\n", flag[cur]);
//	}
//	return 0;
//}


#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
//class Solution
//{
//public:
//	vector<int>tmp;
//	void Backtracking(const vector<int>& num, int index, vector<bool>& used, vector<vector<int>>&ret)
//	{
//		ret.push_back(tmp);
//		for (int i = index; i < (int)num.size(); i++)
//		{
//			//同一层不可以重复，同一树枝可以重复
//			if (i > 0 && num[i] == num[i - 1] && used[i - 1] == false)
//				continue;
//			tmp.push_back(num[i]);
//			used[i] = true;
//			Backtracking(num, i + 1, used, ret);
//			tmp.pop_back();
//			used[i] = false;
//		}
//	}
//
//	vector<vector<int>> subsetsWithDup(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		vector<bool>used(nums.size());
//		vector<vector<int>>ret;
//		Backtracking(nums, 0, used,ret);
//		return ret;
//	}
//};

class Solution
{
public:
	vector<int>tmp;
	void Backtracking(const vector<int>&nums, int index, vector<vector<int>>&ret)
	{
		ret.push_back(tmp);
		unordered_set<int>flag;
		for (int i = index; i < nums.size(); i++)
		{
			if (flag.find(nums[i]) != flag.end())
			{
				continue;
			}
			flag.insert(nums[i]);
			tmp.push_back(nums[i]);
			Backtracking(nums, i + 1, ret);
			tmp.pop_back();
		}
	}

	vector<vector<int>> subsetsWithDup(vector<int>& nums)
	{
		vector<vector<int>>ret;
		Backtracking(nums, 0, ret);
		return ret;
	}
};
int main()
{
	vector<int>nums{ 1,2,2 };
	vector<vector<int>>ret = Solution().subsetsWithDup(nums);

	for (int i = 0; i < (int)ret.size(); i++)
	{
		for (int j = 0; j < (int)ret[i].size(); j++)
		{
			cout << ret[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}