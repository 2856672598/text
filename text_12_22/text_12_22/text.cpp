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


#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
	vector<int>path;
	void Backtracking(const vector<int>&nums, vector<vector<int>>&ret, unordered_set<int>&flag)
	{
		if (path.size() == nums.size())
		{
			ret.push_back(path);
			return;
		}
		for (int i = 0; i < (int)nums.size(); i++)
		{
			if (flag.find(nums[i]) != flag.end())
				continue;
			flag.insert(nums[i]);
			path.push_back(nums[i]);
			Backtracking(nums, ret, flag);
			path.pop_back();
			flag.erase(nums[i]);
		}
	}

	vector<vector<int>> permute(vector<int>& nums)
	{
		vector<vector<int>>ret;
		unordered_set<int>flag;
		Backtracking(nums, ret, flag);
		return ret;
	}
};

int main()
{
	vector<int>nums{ 1,2,3 };
	vector<vector<int>>ret = Solution().permute(nums);
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