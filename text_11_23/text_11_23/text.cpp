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


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution
//{
//public:
//	int maxDistance(vector<int>& colors)
//	{
//		int n = colors.size();
//		int ret = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				if (colors[i] != colors[j])
//					ret = max(ret, j - i);
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>colors{ 1,1,1,6,1,1,1 };
//	cout << Solution().maxDistance(colors) << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//void Add(vector<int>& a1, vector<int>& a2, vector<int>& a1result)
//{
//	int sum = 0;
//	for (int i = 0; i < (int)a2.size(); i++)
//	{
//		sum = a2[i] + a1[i];
//		a1result.push_back(sum);
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>a1, a2;
//	vector<int>a1result;
//	a1.resize(n);
//	a2.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a1[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a2[i];
//	}
//	Add(a1, a2, a1result);
//	for (int i = 0; i < n; i++)
//		cout << a1result[i] << " ";
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//void compar(vector<int>& nums, vector<int>flag)
//{
//	for (int i = flag[2] - 1; i <= flag[3] - 1; i++)
//	{
//		int count = 0;
//		for (int j = flag[0] - 1; j <= flag[1] - 1; j++)
//		{
//			if (nums[i] >= nums[j])
//				count++;
//		} 
//		cout << count << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int> nums;
//	vector<vector<int> >flag;
//	nums.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> nums[i];
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		vector<int>tmp;
//		tmp.resize(4);
//		for (int j = 0; j < 4; j++)
//		{
//			cin >> tmp[j];
//		}
//		flag.push_back(tmp);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		compar(nums, flag[i]);
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//// 比较两个字符串是否相等，如果相等，返回0，如果不等，返回一个非零的值。
//int strcmp(char *a, char *b)
//{
//	if (strlen(a) != strlen(b))
//		return 1;
//	while (*a == *b&&*a != '\0')
//	{
//		a++;
//		b++;
//	}
//	if (*a == *b&&*a == '\0')
//		return 0;
//	return 1;
//}
//char a[10010], b[10010];
//
//int main()
//{
//	cin >> a >> b;
//	if (strcmp(a, b) == 0)
//		cout << "yes" << endl;
//	else
//		cout << "no" << endl;
//	return 0;
//}

////217. 存在重复元素
//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution
//{
//public:
//	bool containsDuplicate(vector<int>& nums)
//	{
//		unordered_set<int> flag;
//		for (auto e : nums)
//		{
//			if (flag.find(e) != flag.end())
//				return true;
//			flag.insert(e);
//		}
//		return false;
//	}
//};
//int main()
//{
//	vector<int>nums = { 1,1,1,3,3,4,3,2,4,2 };
//	cout << Solution().containsDuplicate(nums) << endl;
//	return 0;
//}


#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution
{
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k)
	{
		unordered_set<int> s;
		for (int i = 0; i < (int)nums.size(); i++)
		{
			if (s.find(nums[i]) != s.end())
				return true;
			s.insert(nums[i]);
			if ((int)s.size() > k)
			{
				//删除最早的一个
				s.erase(nums[i - k]);
			}
		}
		return false;
	}
};
int main()
{
	vector<int>nums = { 1,0,1,1 };
	int k = 1;
	cout << Solution().containsNearbyDuplicate(nums, k) << endl;
	return 0;
}