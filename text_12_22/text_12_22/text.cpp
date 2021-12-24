//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int> sortedSquares(vector<int>& nums)
//	{
//		int left = 0, right = nums.size() - 1;
//		vector<int> ret(nums.size(), 0);
//		int index = nums.size() - 1;
//		while (left < right)
//		{
//			if (nums[left] * nums[left] > nums[right] * nums[right])
//			{
//				ret[index--] = nums[left] * nums[left];
//				left++;
//			}
//			else
//			{
//				ret[index--] = nums[right] * nums[right];
//				right--;
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
//	vector<int>nums{ -4,-1,0,3,10 };
//	vector<int>ret = Solution().sortedSquares(nums);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<string>>ret;
//	bool isValid(int row, int col, int n, vector<string>&path)
//	{
//		//45度对角线
//		for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
//		{
//			if (path[i][j] == 'Q')
//				return false;
//		}
//
//		//135度角
//		for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
//		{
//			if (path[i][j] == 'Q')
//				return false;
//		}
//
//		//列
//		for (int i = col, j = 0; j < row; j++)
//		{
//			if (path[j][i] == 'Q')
//				return false;
//		}
//		return true;
//	}
//
//	void Backtracking(int row, int n, vector<string>&path)
//	{
//		if (row == n)
//		{
//			ret.push_back(path);
//			return;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (!isValid(row, i, n, path))
//				continue;
//			path[row][i] = 'Q';
//			Backtracking(row + 1, n, path);
//			path[row][i] = '.';
//		}
//	}
//
//	vector<vector<string>> solveNQueens(int n)
//	{
//		vector<string> path(n, string(n, '.'));
//		Backtracking(0, n, path);
//		return ret;
//	}
//};
//
//int main()
//{
//	int n = 4;
//	Solution().solveNQueens(n);
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
//	void change(char& ch)
//	{
//		if (ch >= 'a'&&ch <= 'z')
//			ch -= 32;
//		else
//			ch += 32;
//	}
//
//	void Backtracking(string& s, int index, vector<string>&ret)
//	{
//		if (index > s.size())
//			return;
//		ret.push_back(s);
//		for (int i = index; i < s.size(); i++)
//		{
//			if (isdigit(s[i]))
//				continue;
//			change(s[i]);
//			Backtracking(s, i + 1, ret);
//			change(s[i]);
//		}
//	}
//
//	vector<string> letterCasePermutation(string s)
//	{
//		vector<string>ret;
//		Backtracking(s, 0, ret);
//		return ret;
//	}
//};
//
//int main()
//{
//	string s = "a1b2";
//	Solution().letterCasePermutation(s);
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//	vector<int>path;
//	void Backtracking(const vector<int>&nums, vector<vector<int>>&ret, unordered_set<int>&flag)
//	{
//		if (path.size() == nums.size())
//		{
//			ret.push_back(path);
//			return;
//		}
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			if (flag.find(nums[i]) != flag.end())
//				continue;
//			flag.insert(nums[i]);
//			path.push_back(nums[i]);
//			Backtracking(nums, ret, flag);
//			path.pop_back();
//			flag.erase(nums[i]);
//		}
//	}
//
//	vector<vector<int>> permute(vector<int>& nums)
//	{
//		vector<vector<int>>ret;
//		unordered_set<int>flag;
//		Backtracking(nums, ret, flag);
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 1,2,3 };
//	vector<vector<int>>ret = Solution().permute(nums);
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


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int>path;
//	void Backtracking(const vector<int>&nums, vector<vector<int>>&ret, vector<bool>&used)
//	{
//		if (nums.size() == path.size())
//		{
//			ret.push_back(path);
//			return;
//		}
//
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (used[i] == true)
//				continue;
//			path.push_back(nums[i]);
//			used[i] = true;
//			Backtracking(nums, ret, used);
//			used[i] = false;
//			path.pop_back();
//		}
//	}
//
//	vector<vector<int>> permute(vector<int>& nums)
//	{
//		vector<vector<int>>ret;
//		vector<bool>used(nums.size(), false);
//		Backtracking(nums, ret, used);
//		return ret;
//	}
//};
//
//int main()
//{
//	return 0;
//}

////22. 括号生成
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	string path;
//	void Backtracking(int n, vector<string>& ret, int left, int right)
//	{
//		if (left < right || left > n)
//			return;
//		if (path.size() == 2 * n)
//		{
//			if (left == right)
//				ret.push_back(path);
//			return;
//		}
//		//左括号++
//		path.push_back('(');
//		Backtracking(n, ret, left + 1, right);
//		path.pop_back();
//		path.push_back(')');
//		Backtracking(n, ret, left, right + 1);
//		path.pop_back();
//	}
//
//	vector<string> generateParenthesis(int n)
//	{
//		vector<string>ret;
//		Backtracking(n, ret, 0, 0);
//		return ret;
//	}
//};
//int main()
//{
//	int n = 2;
//	vector<string>ret = Solution().generateParenthesis(n);
//	for (int i = 0; i < ret.size(); i++)
//	{
//		cout << ret[i] << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class Solution
//{
//	struct TreeNode
//	{
//		int val;
//		TreeNode *left;
//		TreeNode *right;
//		TreeNode() : val(0), left(nullptr), right(nullptr) {}
//		TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//		TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//	};
//public:
//	vector<int>path;
//	vector<vector<int>>ret;
//	void Backtracking(TreeNode*root, int targetSum)
//	{
//		if (root == NULL)
//			return;
//		path.push_back(root->val);
//		targetSum -= root->val;
//		if (targetSum == 0 && root->left == NULL && root->right == NULL)
//		{
//			ret.push_back(path);
//		}
//		Backtracking(root->left, targetSum);
//		Backtracking(root->right, targetSum);
//		path.pop_back();
//	}
//
//	vector<vector<int>> pathSum(TreeNode* root, int targetSum)
//	{
//		Backtracking(root, targetSum);
//		return ret;
//	}
//};
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int>path;
//	void Backtracking(const vector<int>&nums, vector<vector<int>>&ret, int index)
//	{
//		ret.push_back(path);
//		if (index == nums.size())
//			return;
//		for (int i = index; i < nums.size(); i++)
//		{
//			path.push_back(nums[i]);
//			Backtracking(nums, ret, i + 1);
//			path.pop_back();
//		}
//	}
//
//	vector<vector<int>> subsets(vector<int>& nums)
//	{
//		vector<vector<int>>ret;
//		Backtracking(nums, ret, 0);
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 1,2,3 };
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


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int>path;
//	int sum = 0;
//	void Backtracking(vector<int>&candidates, int target, int index, vector<vector<int>>&ret)
//	{
//		if (sum > target)
//			return;
//		if (sum == target)
//		{
//			ret.push_back(path);
//			return;
//		}
//		for (int i = index; i < candidates.size(); i++)
//		{
//			path.push_back(candidates[i]);
//			sum += candidates[i];
//			Backtracking(candidates, target, i, ret);
//			path.pop_back();
//			sum -= candidates[i];
//		}
//	}
//
//	vector<vector<int>> combinationSum(vector<int>& candidates, int target)
//	{
//		vector<vector<int>>ret;
//		Backtracking(candidates, target, 0, ret);
//		return ret;
//	}
//};

//#include<iostream>
//#include<vector>
//using namespace std;
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
//
//	}
//
//	int findTargetSumWays(vector<int>& nums, int target)
//	{
//		int count = 0;
//		Backtracking(nums, target, count, 0);
//		return count;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 1,1,1,1,1 };
//	int target = 3;
//	cout << Solution().findTargetSumWays(nums, target) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<unordered_set>
//using namespace std;
//
//class Solution
//{
//public:
//	int count = 0;
//	string path;
//	unordered_set<string>ret;
//	void Backtracking(const string& tiles, vector<bool>&used)
//	{
//		if (path.size())
//		{
//			ret.insert(path);
//		}
//		for (int i = 0; i < (int)tiles.size(); i++)
//		{
//			if (used[i] == true)
//				continue;
//			used[i] = true;
//			path.push_back(tiles[i]);
//			Backtracking(tiles, used);
//			used[i] = false;
//			path.pop_back();
//		}
//	}
//
//	int numTilePossibilities(string tiles)
//	{
//		vector<bool>used(tiles.size(), false);
//		Backtracking(tiles, used);
//		return ret.size();
//	}
//};
//
//int main()
//{
//	string nums{ "AAB" };
//	cout << Solution().numTilePossibilities(nums) << endl;
//	return 0;
//}


#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	vector<int>path;
	void Backtracking(int n, int& count, vector<bool>&used)
	{
		if (path.size() == n)
		{
			//判断是否合法
			if (isLegal(path))
				count++;
			return;
		}
		//先生成它的全部排列
		for (int i = 1; i <= n; i++)
		{
			if (used[i] == true)
				continue;
			path.push_back(i);
			used[i] = true;
			Backtracking(n, count, used);
			path.pop_back();
			used[i] = false;
		}
	}

	bool isLegal(const vector<int>& nums)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] % (i + 1) && (i + 1) % nums[i])
				return false;
		}
		return true;
	}

	int countArrangement(int n)
	{
		int count = 0;
		vector<bool>used(n + 1, false);
		Backtracking(n, count, used);
		return count;
	}
};
int main()
{
	int n = 3;
	cout << Solution().countArrangement(n) << endl;
	return 0;
}