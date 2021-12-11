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


#include<iostream>
#include<unordered_map>
using namespace std;

class Solution
{
public:
	bool canConstruct(string ransomNote, string magazine)
	{
		unordered_map<char, int> flag;
		for (auto e : magazine)
		{
			flag[e]++;
		}

		for (auto e : ransomNote)
		{
			flag[e]--;
		}

		for (auto e : flag)
		{
			if (e.second < 0)
				return false;
		}
		return true;
	}
};

int main()
{
	string ransomNote("a");
	string ransomNote("b");
	cout << Solution().canConstruct(ransomNote, ransomNote) << endl;
	return 0;
}