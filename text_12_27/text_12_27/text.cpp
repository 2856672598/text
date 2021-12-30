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


////1286. 字母组合迭代器
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class CombinationIterator {
//public:
//	vector<string> ret;
//	string path;
//	void BackTracking(const string& characters, int n, int index)
//	{
//		if (path.size() == n)
//		{
//			ret.push_back(path);
//			return;
//		}
//
//		for (int i = index; i < (int)characters.size(); i++)
//		{
//			path.push_back(characters[i]);
//			BackTracking(characters, n, i + 1);
//			path.pop_back();
//		}
//	}
//
//	CombinationIterator(string characters, int combinationLength)
//	{
//		BackTracking(characters, combinationLength, 0);
//	}
//
//	string next()
//	{
//		string tmp = ret[0];
//		ret.erase(ret.begin(), ret.begin() + 1);
//		return tmp;
//	}
//
//	bool hasNext()
//	{
//		return ret.size() == 0 ? false : true;
//	}
//};
//
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int wanshu(int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (n%i == 0)
//			sum += i;
//	}
//	return sum == n ? 1 : 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (wanshu(n))
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int CountDown(int year, int month, int day)
//{
//	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int count = 0;
//	if (month == 7)
//	{
//		count = 27 - day;
//	}
//	else
//	{
//		int i = month + 1;
//		count = arr[month] - day + 27 + 1;
//		for (i; i < 7; i++)
//		{
//			count += arr[i];
//		}
//	}
//	return count;
//}
//int main()
//{
//	int year, month, day;
//	scanf("%d %d %d", &year, &month, &day);
//	if (year != 2012 || month < 0 || month>7 || day >= 27)
//		printf("ERROR!");
//	else
//		printf("%d", CountDown(year, month, day));
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int  huiwen(char *p, int size)
//{
//	int left = 0, right = size - 1;
//	while (left < right)
//	{
//		if (p[left] != p[right])
//			return 0;
//		left++;
//		right--;
//	}
//	return 1;
//}
//int main()
//{
//	char arr[100];
//	scanf("%s", arr);
//	if (huiwen(arr, strlen(arr)))
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

//#include<stdio.h>
//void mystr(char c, int n, char *p)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		p[i] = c;
//	}
//}
//
//int main()
//{
//	char ch;
//	char arr[50] = "\0";
//	int n;
//	scanf("%c %d", &ch, &n);
//	mystr(ch, n, arr);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>
//int fib(int n)
//{
//	if (n < 3)
//		return 1;
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
// 
//class Solution
//{
//public:
//	vector<vector<int>>ret;
//	vector<int>path;
//	void Backtracking(TreeNode*root, int target, int sum)
//	{
//		if (root == NULL)
//			return;
//		sum += root->val;
//		path.push_back(root->val);
//		if (sum == target && root->left == root->right&&root->left == NULL)
//		{
//			ret.push_back(path);
//		}
//		Backtracking(root->left, target, sum);
//		Backtracking(root->right, target, sum);
//		path.pop_back();
//	}
//
//	vector<vector<int>> pathSum(TreeNode* root, int target)
//	{
//		Backtracking(root, target, 0);
//		return ret;
//	}
//};
//int main()
//{
//	return 0;
//}

////455. 分发饼干
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int findContentChildren(vector<int>& g, vector<int>& s)
//	{
//		sort(g.begin(), g.end());
//		sort(s.begin(), s.end());
//		int index = 0;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			if (index < g.size() && g[index] <= s[i])
//				index++;
//		}
//		return index;
//	}
//};
//
//int main()
//{
//	vector<int>g{ 1,2,3 }, s{ 1,1 };
//	cout << Solution().findContentChildren(g, s) << endl;
//	return 0;
//}


//376. 摆动序列
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	int wiggleMaxLength(vector<int>& nums)
	{
		int prevDiff = 0, curDiff;
		int result = 1;
		for (int i = 0; i < (int)nums.size() - 1; i++)
		{
			curDiff = nums[i] - nums[i + 1];
			if (curDiff > 0 && prevDiff <= 0 || curDiff < 0 && prevDiff >= 0)
			{
				result++;
				prevDiff = curDiff;
			}
		}
		return result;
	}
};

int main()
{
	vector<int>nums{ 1,7,4,9,2,5 };
	cout << Solution().wiggleMaxLength(nums) << endl;
	return 0;
}