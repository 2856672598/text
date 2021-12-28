////剑指 Offer II 080. 含有 k 个元素的组合
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int>path;
//	vector<vector<int>>ret;
//	void Backtracking(int n, int k, int index)
//	{
//		if (path.size() == k)
//		{
//			ret.push_back(path);
//			return;
//		}
//		for (int i = index; i <= n; i++)
//		{
//			path.push_back(i);
//			Backtracking(n, k, i + 1);
//			path.pop_back();
//		}
//	}
//
//	vector<vector<int>> combine(int n, int k)
//	{
//		Backtracking(n, k, 1);
//		return ret;
//	}
//};
//
//int main()
//{
//	int n = 4, k = 2;
//	vector<vector<int>>ret = Solution().combine(n, k);
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

////剑指 Offer II 082. 含有重复元素集合的组合
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>>ret;
//	vector<int>path;
//	void Backtracking(const vector<int>&candidates, int target, vector<bool>&used, int sum, int index)
//	{
//		if (sum >= target)
//		{
//			if (sum == target)
//				ret.push_back(path);
//			return;
//		}
//
//		for (int i = index; i < (int)candidates.size(); i++)
//		{
//			if (i > 0 && candidates[i] == candidates[i - 1] && used[i - 1] == false)
//				continue;
//			if (used[i] == false)
//			{
//				used[i] = true;
//				path.push_back(candidates[i]);
//				Backtracking(candidates, target, used, sum + candidates[i], i + 1);
//				path.pop_back();
//				used[i] = false;
//			}
//		}
//	}
//
//	vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
//	{
//		vector<bool>used(candidates.size(), false);
//		int sum = 0;
//		sort(candidates.begin(), candidates.end());
//		Backtracking(candidates, target, used, sum, 0);
//		return ret;
//	}
//};
//int main()
//{
//	return 0;
//}

////1980. 找出不同的二进制字符串
//#include<iostream>
//#include<string>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//	string ret;
//	void Backtracking(const unordered_set<string>&flag, int index, string path)
//	{
//		if (flag.find(path) == flag.end())
//		{
//			ret = path;
//			return;
//		}
//		for (int i = index; i < (int)path.size(); i++)
//		{
//			path[i] = '1';
//			Backtracking(flag, i + 1, path);
//			path[i] = '0';
//		}
//	}
//
//	string findDifferentBinaryString(vector<string>& nums)
//	{
//		string path(nums.size(), '0');
//		unordered_set<string> flag;
//		for (auto e : nums)
//			flag.insert(e);
//		Backtracking(flag, 0, path);
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<string>nums{ "01","00" };
//	cout << Solution().findDifferentBinaryString(nums) << endl;
//	return 0;
//}

////剑指 Offer II 102. 加减的目标值
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int count = 0;
//	void Backtracking(const vector<int>&nums, int target, int sum, int index)
//	{
//		if (index == nums.size())
//		{
//			if (sum == target)
//				count++;
//			return;
//		}
//		else
//		{
//			Backtracking(nums, target, sum + nums[index], index + 1);
//			Backtracking(nums, target, sum - nums[index], index + 1);
//		}
//	}
//
//	int findTargetSumWays(vector<int>& nums, int target)
//	{
//		int sum = 0;
//		Backtracking(nums, target, sum, 0);
//		return count;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,1,1,1,1 };
//	int target = 3;
//	cout << Solution().findTargetSumWays(nums, target);
//	return 0;
//}

////1238. 循环码排列
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> circularPermutation(int n, int start)
//	{
//		vector<int>ret;
//		for (int i = 0; i < (1 << n); i++)
//		{
//			ret.push_back((i ^ (i >> 1)));
//		}
//		auto it = find(ret.begin(), ret.end(), start);
//		for (auto e : ret)
//			cout << e << " ";
//		cout << endl;
//		reverse(ret.begin(), it);
//		reverse(it, ret.end());
//		reverse(ret.begin(), ret.end());
//		return ret;
//	}
//};
//int main()
//{
//	int n = 3, start = 2;
//	vector<int>ret = Solution().circularPermutation(n, start);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}


//1286. 字母组合迭代器
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class CombinationIterator {
public:
	vector<string> ret;
	string path;
	void BackTracking(const string& characters, int n, int index)
	{
		if (path.size() == n)
		{
			ret.push_back(path);
			return;
		}

		for (int i = index; i < (int)characters.size(); i++)
		{
			path.push_back(characters[i]);
			BackTracking(characters, n, i + 1);
			path.pop_back();
		}
	}

	CombinationIterator(string characters, int combinationLength)
	{
		BackTracking(characters, combinationLength, 0);
	}

	string next()
	{
		string tmp = ret[0];
		ret.erase(ret.begin(), ret.begin() + 1);
		return tmp;
	}

	bool hasNext()
	{
		return ret.size() == 0 ? false : true;
	}
};

int main()
{
	return 0;
}