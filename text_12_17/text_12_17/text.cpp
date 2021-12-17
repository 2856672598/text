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

//39. 组合总和
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
	vector<int>tmp;
	void _combinationSum(vector<int>& candidates, int target, int index, vector<vector<int>>& ret, int sum)
	{
		if (sum == target)
		{
			ret.push_back(tmp);
			return;
		}
		else if (sum > target)
			return;

		for (int i = index; i < (int)candidates.size(); i++)
		{
			tmp.push_back(candidates[i]);
			sum += candidates[i];
			_combinationSum(candidates, target, i, ret, sum);
			sum -= candidates[i];
			tmp.pop_back();
		}
	}

	vector<vector<int>> combinationSum(vector<int>& candidates, int target)
	{
		vector<vector<int>>ret;
		int sum = 0;
		_combinationSum(candidates, target, 0, ret, sum);
		return ret;
	}
};
int main()
{
	vector<int> candidates{ 2, 3, 6, 7 };
	int target = 7;
	vector<vector<int>>ret = Solution().combinationSum(candidates, target);
	for (int i = 0; i < (int)ret.size(); i++)
	{
		for (int j = 0; j < (int)ret[i].size(); j++)
			cout << ret[i][j] << " ";
		cout << endl;
	}
	return 0;
}