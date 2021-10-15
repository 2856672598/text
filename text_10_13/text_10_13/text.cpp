//#include<iostream>
//#include<vector>
//using namespace std;
//
////class Solution {
////public:
////	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
////		int insert = nums1.size() - 1;
////		int begin1 = m - 1, begin2 = n - 1;
////		while (begin1 >= 0 && begin2 >= 0)
////		{
////			if (nums1[begin1] > nums2[begin2])
////			{
////				nums1[insert--] = nums1[begin1--];
////			}
////			else
////				nums1[insert--] = nums2[begin2--];
////		}
////
////		while (begin2 >= 0)
////		{
////			nums1[insert--] = nums2[begin2--];
////		}
////	}
////};
//
//class Solution {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//		int insert = nums1.size() - 1;
//		int begin1 = m - 1, begin2 = n - 1;
//
//		while (insert >= 0)
//		{
//			if (begin1 < 0)
//			{
//				nums1[insert--] = nums2[begin2--];
//			}
//			else if (begin2 < 0)
//			{
//				//当nums2已经走完了，就可以跳出了
//				break;
//			}
//			else if (nums1[begin1] > nums2[begin2])
//			{
//				nums1[insert--] = nums1[begin1--];
//			}
//			else
//				nums1[insert--] = nums2[begin2--];
//		}
//	}
//};
//
//int main()
//{
//	vector<int> nums1{ 1,2,3,0,0,0 };
//	vector<int> nums2{ 2,5,6 };
//	int m = 3, n = 3;
//	Solution().merge(nums1, m, nums2, n);
//	for (auto e : nums1)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		int fast = 1, slow = 1;
//		//当数组为空时返回0
//		if (nums.size() == 0)
//			slow = 0;
//		while (fast < (int)nums.size())
//		{
//			if (nums[fast] != nums[slow - 1])
//			{
//				nums[slow++] = nums[fast++];
//			}
//			else
//				fast++;
//		}
//		return slow;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,1,2 };
//	int size = Solution().removeDuplicates(nums);
//	for (int i = 0; i < size; i++)
//	{
//		cout << nums[i] << " ";
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int removeElement(vector<int>& nums, int val) {
//		int fast = 0, slow = 0;
//
//		while (fast < (int)nums.size())
//		{
//			if (nums[fast] == val)
//				fast++;
//			else
//			{
//				nums[slow++] = nums[fast++];
//			}
//		}
//		return slow;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,2,2,2,2,5,1,8,9 };
//	int target = 2;
//	int size = Solution().removeElement(nums, target);
//	for (int i = 0; i < size; i++)
//	{
//		cout << nums[i] << " ";
//	}
//	return 0;
//}


////8. 字符串转换整数 (atoi)
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int myAtoi(string s) {
//
//		//读掉前导空格
//		int i = 0;
//		while (s[i] == ' ')
//		{
//			i++;
//		}
//		int flag = 1;
//		if (s[i] == '+')
//		{
//			flag = 1;
//			i++;
//		}
//		else if (s[i] == '-')
//		{
//			flag = -1;
//			i++;
//		}
//		long long sum = 0;
//		while (i < (int)s.size())
//		{
//			if (isdigit(s[i]))
//			{
//				sum = sum * 10 + (s[i] - '0')*flag;
//				//判断是否超出int的最大值
//				if (sum > INT_MAX)
//					return INT_MAX;
//				else if (sum < INT_MIN)
//					return INT_MIN;
//			}
//			else
//				break;
//			i++;
//		}
//		return (int)sum;
//	}
//};
//
//int main()
//{
//	string s("+-12");
//	cout << Solution().myAtoi(s) << endl;
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//int text()
//{
//	int count = 0;
//	for (int i = 1; i <= 2020; i++)
//	{
//		int tmp = i;
//		while (tmp)
//		{
//			if (tmp % 10 == 2)
//			{
//				count++;
//				break;
//			}
//			tmp >>= 1;
//		}
//	}
//	return count;
//}
//int main()
//{
//	cout << text() << endl;
//	return 0;
//}

//
//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int text(int n)
//{
//	int count = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		int flag = 1;
//		for (int j = 2; j <= (int)sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 2020;
//	cout << n - text(n) - 1 << endl;
//	return 0;
//}

////埃氏筛
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	bool prime[100];
//	//全部设为真
//	for (int i = 0; i < 100; i++)
//	{
//		prime[i] = 1;
//	}
//	prime[0] = prime[1] = 0;
//	int count = 0;
//	for (int i = 2; i < 100; i++)
//	{
//		if (prime[i])
//		{
//			//将素数的倍数全部置为假
//			for (int j = i + i; j < 100; j += i)
//			{
//				prime[j] = 0;
//			}
//		}
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		if (prime[i] == 1)
//		{
//			cout << i << " ";
//			count++;
//		}
//	}
//	cout << endl;
//	cout << "素数的个数为:" << count << endl;
//	return 0;
//}

////剑指 Offer II 070. 排序数组中只出现一次的数字
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int singleNonDuplicate(vector<int>& nums) {
//		int flag = 0;
//		for (int i = 0; i <(int) nums.size(); i++)
//		{
//			flag ^= nums[i];
//		}
//		return flag;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 3,3,7,7,10,11,11 };
//	cout << Solution().singleNonDuplicate(nums) << endl;
//	return 0;
//}

////643. 子数组最大平均数 I
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	double findMaxAverage(vector<int>& nums, int k) {
//		int i = 0;
//		int sum = 0, max = INT_MIN, prev = 0;
//		while (i < (int)nums.size())
//		{
//			if (i < k)
//			{
//				while (i < k&&i < (int)nums.size())
//				{
//					sum += nums[i++];
//				}
//			}
//			else
//			{
//				sum += nums[i];
//				sum -= nums[prev];
//				prev++;
//				i++;
//			}
//			if (sum > max)
//				max = sum;
//		}
//		return 1.0*max / k;
//	}
//};
//int main()
//{
//	vector<int>nums{ -1 };
//	int k = 1;
//	cout << Solution().findMaxAverage(nums, k) << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		if (nums.size() == 0)
//			return 0;
//		int left = 0, right = 0, cur = 0;
//		while (right < (int)nums.size())
//		{
//			if (nums[right] == nums[left])
//			{
//				right++;
//			}
//			else
//			{
//				nums[cur++] = nums[left];
//				left = right;
//				right++;
//			}
//		}
//		nums[cur++] = nums[left];
//		return  cur;
//	}
//};
//int main()
//{
//	vector<int>nums{ 0,0,1,1,1,2,2,3,3,4 };
//	cout << Solution().removeDuplicates(nums) << endl;
//	return 0;
//}

////剑指 Offer II 069. 山峰数组的顶部
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int peakIndexInMountainArray(vector<int>& arr) {
//		int prev = 0, cur = 1;
//		while (cur < (int)arr.size())
//		{
//			if (arr[cur] < arr[prev])
//				break;
//			cur++;
//			prev++;
//		}
//		return prev;
//	}
//};
//
//int main()
//{
//	vector<int> arr{ 1,2,3,4,5 };
//	cout << Solution().peakIndexInMountainArray(arr) << endl;
//	return 0;
//}


////412. Fizz Buzz
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	vector<string> fizzBuzz(int n) {
//		vector<string>ret;
//		for (int i = 1; i <= n; i++)
//		{
//			if (i % 3 == 0 && i % 5 == 0)
//			{
//				ret.push_back("FizzBuzz");
//			}
//			else if (i % 3 == 0)
//				ret.push_back("Fizz");
//			else if (i % 5 == 0)
//				ret.push_back("Buzz");
//			else
//				ret.push_back(to_string(i));
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	return 0;
//}

////1779. 找到最近的有相同 X 或 Y 坐标的点
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
//		int pos = -1;
//		int flag = INT_MAX;
//		for (int i = 0; i < (int)points.size(); i++)
//		{
//			if (points[i][0] == x || points[i][1] == y)
//			{
//				int tmp = abs(x - points[i][0]) + abs(y - points[i][1]);
//				if (flag > tmp)
//				{
//					flag = tmp;
//					pos = i;
//				}
//			}
//		}
//		return pos;
//	}
//};
//
//int main()
//{
//	int x = 3, y = 4;
//	vector<vector<int>>nums{ {1,2},{3,1},{2,4},{2,3},{4,4} };
//	cout << Solution().nearestValidPoint(x, y, nums) << endl;
//	return 0;
//}


////1780. 判断一个数字是否可以表示成三的幂的和
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	bool checkPowersOfThree(int n) {
//		while (n)
//		{
//			if (n % 3 >= 2)
//				return false;
//			n /= 3;
//			if (n == 1)
//				break;
//		}
//		if (n == 1 || n == 0)
//			return true;
//		else
//			return false;
//	}
//};
//
//int main()
//{
//	int n = 10;
//	cout << Solution().checkPowersOfThree(n) << endl;
//	return 0;
//}

//1897. 重新分配字符使所有字符串都相等
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	bool makeEqual(vector<string>& words) {
		vector<int>flag(26, 0);
		for (int i = 0; i < (int)words.size(); i++)
		{
			for (int j = 0; j < (int)words[i].size(); j++)
			{
				flag[words[i][j] - 'a'] += 1;
			}
		}

		for (int i = 0; i < (int)flag.size(); i++)
		{
			if (flag[i] % words.size() != 0)
				return false;
		}
		return true;
	}
};

int main()
{
	vector<string>nums{ "abc","aabc","bc" };
	cout << Solution().makeEqual(nums) << endl;
	return 0;
}

