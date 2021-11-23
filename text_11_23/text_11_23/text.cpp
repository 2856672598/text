//#include<iostream>
//#include<unordered_map>
//#include<unordered_set>
//#include<string>
//using namespace std;
//
//void text_unordered_map()
//{
//	////unorder_map不会进行排序
//	//unordered_map<int, int>m;
//	//m.insert(make_pair(1, 1));
//	//m.insert(make_pair(1, 1));
//	//m.insert(make_pair(4, 4));
//
//	//m.insert(make_pair(2, 2));
//	//m.insert(make_pair(3, 3));
//	//m.insert(make_pair(4, 4));
//	//for (auto e : m)
//	//{
//	//	cout << e.first << " " << e.second << endl;
//	//}
//
//	unordered_map<string, int>m;
//	string flag[] = { "草莓", "香蕉", "菠萝", "草莓" };
//	for (auto e : flag)
//	{
//		m[e]++;
//	}
//
//	for (auto e : m)
//	{
//		cout << e.first << " " << e.second << endl;
//	}
//}
//
//void text_unordered_set()
//{
//	unordered_set<int>t;
//	t.insert(1);
//	t.insert(1);
//	t.insert(3);
//	t.insert(1);
//	for (auto e : t)
//	{
//		cout << e << " ";
//	}
//	//查找
//	cout << endl << *t.find(1) << endl;
//}
//
//int main()
//{
//	text_unordered_map();
//	text_unordered_set();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//	int repeatedNTimes(vector<int>& nums)
//	{
//		unordered_map<int, int>m;
//		for (auto e : nums)
//		{
//			m[e]++;
//		}
//
//		for (auto e : m)
//		{
//			if (e.second == nums.size() / 2)
//				return e.first;
//		}
//		return 0;
//	}
//};
//
//int main()
//{
//	vector<int>nums = { 2,1,2,5,3,2 };
//	int ret = Solution().repeatedNTimes(nums);
//	cout << ret << endl;
//	return 0;
//}

//#include<iostream>
//#include<unordered_set>
//#include<unordered_map>
//#include<vector>
//using namespace std;
////class Solution {
////public:
////	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
////	{
////		//先将两个数组去重
////		unordered_set<int> s1, s2;
////		for (auto e : nums1)
////			s1.insert(e);
////		for (auto e : nums2)
////			s2.insert(e);
////		
////		unordered_map<int, int>m;
////		for (auto e : s1)
////			m[e]++;
////		for (auto e : s2)
////			m[e]++;
////		vector<int> ret;
////		for (auto e : m)
////		{
////			if (e.second > 1)
////				ret.push_back(e.first);
////		}
////		return ret;
////	}
////};
//
//class Solution {
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
//	{
//		//先将两个数组去重
//		unordered_set<int> s1, s2;
//		for (auto e : nums1)
//			s1.insert(e);
//		for (auto e : nums2)
//			s2.insert(e);
//		vector<int> ret;
//		for (auto e : s1)
//		{
//			if (s2.count(e))
//				ret.push_back(e);
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>nums1 = { 1,2,2,1 };
//	vector<int>nums2 = { 2,2 };
//	vector<int> ret = Solution().intersection(nums1, nums2);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}

//
//#include<iostream>
//#include<unordered_map>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
//	{
//		unordered_map<int, int>s1, s2;
//		for (auto e : nums1)
//			s1[e]++;
//		for (auto e : nums2)
//			s2[e]++;
//		vector<int> ret;
//		for (auto e : s1)
//		{
//			if (s2.count(e.first))
//			{
//				int min = s1[e.first] < s2[e.first] ? s1[e.first] : s2[e.first];
//				ret.resize(ret.size() + min, e.first);
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>nums1 = { 1,2,2,1 };
//	vector<int>nums2 = { 2,2 };
//	vector<int>ret = Solution().intersect(nums1, nums2);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}


////217. 存在重复元素
//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
//
////class Solution
////{
////public:
////	bool containsDuplicate(vector<int>& nums)
////	{
////		map<int, int>m;
////		for (auto e : nums)
////		{
////			m[e]++;
////		}
////
////		for (auto e : m)
////		{
////			if (e.second >= 2)
////				return true;
////		}
////		return false;
////	}
////};
//
//class Solution
//{
//public:
//	bool containsDuplicate(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		for (int i = 0; i < (int)nums.size() - 1; i++)
//		{
//			if (nums[i] == nums[i + 1])
//				return true;
//		}
//		return false;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,1,1,3,3,4,3,2,4,2 };
//	cout << Solution().containsDuplicate(nums) << endl;
//	return 0;
//}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
	int maxDistance(vector<int>& colors)
	{
		int n = colors.size();
		int ret = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (colors[i] != colors[j])
					ret = max(ret, j - i);
			}
		}
		return ret;
	}
};

int main()
{
	vector<int>colors{ 1,1,1,6,1,1,1 };
	cout << Solution().maxDistance(colors) << endl;
	return 0;
}