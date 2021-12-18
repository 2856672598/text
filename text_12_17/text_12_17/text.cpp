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

//131. 分割回文串
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution
{
public:
	bool isPalindrome(string s, int left, int right)
	{
		while (left < right)
		{
			if (s[left++] != s[right--])
				return false;
		}
		return true;
	}

	vector<string>tmp;
	void backtracking(string s, int index, vector<vector<string>>& ret)
	{
		if (s.size() == index)
		{
			ret.push_back(tmp);
			return;
		}

		for (int i = index; i < (int)s.size(); i++)
		{
			if (isPalindrome(s, index, i))
			{
				//是回文
				string str = s.substr(index, i - index + 1);
				tmp.push_back(str);
			}
			else
				continue;
			backtracking(s, i + 1, ret);
			tmp.pop_back();
		}
	}

	vector<vector<string>> partition(string s)
	{
		vector<vector<string>>ret;
		backtracking(s, 0, ret);
		return ret;
	}
};
int main()
{
	string s{ "aabc" };
	vector<vector<string>>ret = Solution().partition(s);

	for (int i = 0; i < ret.size(); i++)
	{
		for (int j = 0; j < ret[i].size(); j++)
		{
			cout << ret[i][j] << " ";
		}
		cout << endl;

	}
	return 0;
}