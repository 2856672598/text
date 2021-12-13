//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//	void print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//	void set()
//	{
//		cout << "输入年月日" << endl;
//		cin >> _year >> _month >> _day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	d.set();
//	d.print();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//class Solution
//{
//public:
//	vector<int> twoSum(vector<int>& nums, int target)
//	{
//		unordered_map<int, int> m;
//
//		for (int i = 0; i < nums.size(); i++)
//		{
//			int tmp = target - nums[i];
//			auto it = m.find(tmp);
//			if (it != m.end())
//			{
//				return  { (*it).second,i };
//			}
//			m.insert(make_pair(nums[i], i));
//		}
//		return {};
//	}
//};
//
//
//int main()
//{
//	vector<int>nums{ 2,7,11,15 };
//	int target = 9;
//	vector<int>ret = Solution().twoSum(nums, target);
//	cout << ret[0] << " " << ret[1] << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//class Solution
//{
//public:
//	int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4)
//	{
//		unordered_map<int, int> flag;
//		for (auto e1 : nums1)
//		{
//			for (auto e2 : nums2)
//			{
//				flag[e1 + e2]++;
//			}
//		}
//
//		int count = 0;
//		for (auto e3 : nums3)
//		{
//			for (auto e4 : nums4)
//			{
//				if (flag.find(0 - e3 - e4) != flag.end())
//				{
//					count += (*flag.find(0 - e3 - e4)).second;
//				}
//			}
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	vector<int>nums1{ 1,2 }, nums2{ -2,-1 }, nums3{ -1,2 }, nums4{ 0,2 };
//	cout << Solution().fourSumCount(nums1, nums2, nums3, nums4) << endl;
//	return 0;
//}


//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution
//{
//public:
//	bool canConstruct(string ransomNote, string magazine)
//	{
//		unordered_map<char, int> flag;
//		for (auto e : magazine)
//		{
//			flag[e]++;
//		}
//
//		for (auto e : ransomNote)
//		{
//			flag[e]--;
//		}
//
//		for (auto e : flag)
//		{
//			if (e.second < 0)
//				return false;
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	string ransomNote("a");
//	string ransomNote("b");
//	cout << Solution().canConstruct(ransomNote, ransomNote) << endl;
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	unsigned int sum = 0;
//	for (int i = 1; i <= 2019; i++)
//	{
//		int tmp = i;
//		int flag = 0;//用于标记数位中是否出现2,0,1,9
//		while (tmp)
//		{
//			if (tmp % 10 == 2 || tmp % 10 == 0 || tmp % 10 == 1 || tmp % 10 == 9)
//			{
//				flag = 1;
//				break;
//			}
//			tmp /= 10;
//		}
//		if (flag == 1)
//			sum += i * i;
//	}
//
//	printf("%u", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 123;
//	int ret = 0;
//	while (n)
//	{
//		ret *= 10;
//		ret += n % 10;
//		n /= 10;
//	}
//	printf("%d", ret);
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
//	vector<vector<int>> threeSum(vector<int>& nums)
//	{
//		if (nums.size() < 3)
//			return {};
//		vector<vector<int>> ret;
//		sort(nums.begin(), nums.end());
//		for (int i = 0; i < nums.size() - 2; i++)
//		{
//			int left = i + 1, right = nums.size() - 1;
//
//			//需要去重
//			if (i > 0 && nums[i] == nums[i - 1])
//				continue;
//
//			while (left < right)
//			{
//				if (nums[left] + nums[i] + nums[right] > 0)
//					right--;
//				else if (nums[left] + nums[i] + nums[right] < 0)
//					left++;
//				else
//				{
//					vector<int>tmp;
//					tmp.push_back(nums[left]);
//					tmp.push_back(nums[right]);
//					tmp.push_back(nums[i]);
//					ret.push_back(tmp);
//					//需要去重
//					while (left + 1 < right&&nums[left] == nums[left + 1])
//						left++;
//
//					left++;
//					right--;
//
//				}
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int missingNumber(int* nums, int numsSize)
//{
//	int sum = (1 + numsSize)*numsSize / 2;//等差数列
//	for (int i = 0; i < numsSize; i++)
//	{
//		sum -= nums[i];
//	}
//	return sum;
//}
//int main()
//{
//	int nums[] = { 1,0,3 };
//	missingNumber(nums, sizeof(nums) / sizeof(nums[0]));
//	return 0;
//}

//#include<iostream>
//int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
//{
//	int left = 0, right = numsSize - 1;
//
//	while (left < right)
//	{
//		//左边找奇数
//		while (left < right)
//		{
//			if (nums[left] % 2 != 0)
//				break;
//			left++;
//		}
//
//		//右面找偶数
//		while (left < right)
//		{
//			if (nums[right] % 2 == 0)
//				break;
//			right--;
//		}
//
//		//判断是否满足交换条件
//		if (left < right)
//		{
//			int tmp = nums[left];
//			nums[left] = nums[right];
//			nums[right] = tmp;
//		}
//	}
//	*returnSize = numsSize;
//	return nums;
//}
//
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////int findRepeatNumber(int* nums, int numsSize)
////{
////	for (int i = 0; i < numsSize - 1; i++)
////	{
////		for (int j = 0; j < numsSize - i - 1; j++)
////		{
////			if (nums[j] > nums[j + 1])
////			{
////				int tmp = nums[j];
////				nums[j] = nums[j + 1];
////				nums[j + 1] = tmp;
////			}
////		}
////	}
////
////	int cur = 1, prev = 0;
////	while (cur < numsSize - 1)
////	{
////		if (nums[cur] == nums[prev])
////			break;
////		cur++;
////		prev++;
////	}
////	return nums[cur];
////}
//
//int findRepeatNumber(int* nums, int numsSize)
//{
//	int* flag = (int*)malloc(sizeof(int)*numsSize);
//	memset(flag, 1, sizeof(int)*numsSize);
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		flag[nums[i]]++;
//		if (flag[nums[i]] > 1)
//			break;
//	}
//	return nums[i];
//}
//
//int main()
//{
//	int nums[] = { 2, 3, 1, 0, 2, 5, 3 };
//	printf("%d", findRepeatNumber(nums, sizeof(nums) / sizeof(nums[0])));
//	return 0;
//}



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target)
	{
		sort(nums.begin(), nums.end());
		vector<vector<int>>ret;
		for (int i = 0; i < nums.size(); i++)
		{
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (j > i + 1 && nums[j] == nums[j - 1])
					continue;
				int left = j + 1, right = nums.size() - 1;
				while (left < right)
				{
					//会溢出
					//if (nums[left] + nums[right] + nums[i] + nums[j] > target)
					if (target - nums[left] - nums[right] < nums[i] + nums[j])
						right--;
					else if (target - nums[left] - nums[right] > nums[i] + nums[j])
						left++;
					else
					{
						vector<int>tmp{ nums[left],nums[right],nums[i],nums[j] };
						ret.push_back(tmp);
						while (left + 1 < right&&nums[left] == nums[left + 1])
							left++;
						left++;
						right--;
					}
				}
			}
		}
		return ret;
	}
};
int main()
{
	vector<int>nums{ 2,2,2,2 };
	int target = 8;
	vector<vector<int>> ret = Solution().fourSum(nums, target);
	for(int i = 0; i < ret.size(); i++)
	{
		for (int j = 0; j < ret[i].size(); j++)
			cout << ret[i][j] << " ";
		cout << endl;
	}
	return 0;
}