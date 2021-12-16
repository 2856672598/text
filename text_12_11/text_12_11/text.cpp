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



//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> fourSum(vector<int>& nums, int target)
//	{
//		sort(nums.begin(), nums.end());
//		vector<vector<int>>ret;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (i > 0 && nums[i] == nums[i - 1])
//				continue;
//			for (int j = i + 1; j < nums.size(); j++)
//			{
//				if (j > i + 1 && nums[j] == nums[j - 1])
//					continue;
//				int left = j + 1, right = nums.size() - 1;
//				while (left < right)
//				{
//					//会溢出
//					//if (nums[left] + nums[right] + nums[i] + nums[j] > target)
//					if (target - nums[left] - nums[right] < nums[i] + nums[j])
//						right--;
//					else if (target - nums[left] - nums[right] > nums[i] + nums[j])
//						left++;
//					else
//					{
//						vector<int>tmp{ nums[left],nums[right],nums[i],nums[j] };
//						ret.push_back(tmp);
//						while (left + 1 < right&&nums[left] == nums[left + 1])
//							left++;
//						left++;
//						right--;
//					}
//				}
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 2,2,2,2 };
//	int target = 8;
//	vector<vector<int>> ret = Solution().fourSum(nums, target);
//	for(int i = 0; i < ret.size(); i++)
//	{
//		for (int j = 0; j < ret[i].size(); j++)
//			cout << ret[i][j] << " ";
//		cout << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	int distributeCandies(vector<int>& candyType)
//	{
//		map<int, int>flag;
//		for (auto e:candyType)
//		{
//			flag[e]++;
//		}
//
//		int mid = candyType.size() / 2;
//		return flag.size() > mid ? mid : flag.size();
//	}
//};
//
//int main()
//{
//	vector<int>candyType{ 1,1,2,2,3,3 };
//	cout << Solution().distributeCandies(candyType) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class Solution
//{
//public:
//	int longestPalindrome(string s)
//	{
//		unordered_map<int, int> nums;
//		for (auto e : s)
//		{
//			nums[e]++;
//		}
//		int count = 0;
//		int flag = 0;
//		for (auto e : nums)
//		{
//			if (e.second % 2 == 0)
//				count += e.second;
//			else
//			{
//				count += e.second - 1;
//				flag = 1;
//			}
//		}
//		
//		return count + flag;
//	}
//};
//int main()
//{
//	string s = "abccccdd";
//	cout << Solution().longestPalindrome(s) << endl;
//	return 0;
//}


////819. 最常见的单词
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<unordered_set>
//#include<map>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	string mostCommonWord(string paragraph, vector<string>& banned)
//	{
//		unordered_map<string, int>flag;
//		//先将paragraph转成小写字母
//		for (int i = 0; i < paragraph.size(); i++)
//		{
//			paragraph[i] = towlower(paragraph[i]);
//		}
//		string tmp;
//		for (int i = 0; i < paragraph.size(); i++)
//		{
//			tmp.resize(0);
//			while (paragraph[i] >= 'a'&&paragraph[i] <= 'z'&&i < paragraph.size())
//			{
//				tmp += paragraph[i++];
//			}
//			if (tmp != "")
//			flag[tmp] ++;
//		}
//		unordered_set<string>ban;
//		for (auto e : banned)
//		{
//			ban.insert(e);
//		}
//		multimap<int, string> sortList;
//		for (auto e : flag)
//		{
//			sortList.insert(make_pair(e.second, e.first));
//		}
//		auto it = sortList.rbegin();
//		while (it != sortList.rend())
//		{
//			if (ban.find((*it).second) == ban.end())
//			{
//				return { (*it).second };
//			}
//			it++;
//		}
//		return {};
//	}
//};
//int main()
//{
//	string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
//	vector<string> banned = { "hit" };
//	cout << Solution().mostCommonWord(paragraph, banned) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//vector<int> getNext(const string& s)
//{
//	vector<int> next;
//	next.resize(s.size());
//
//	int j = 0;
//	for (int i = 1; i < s.size(); i++)
//	{
//		//如果前后缀不相同则需要回退
//		while (s[i] != s[j] && j > 0)
//		{
//			j = next[j - 1];
//		}
//
//		//相等都进行+1
//		if (s[i] == s[j])
//		{
//			j++;
//		}
//		//更新next
//		next[i] = j;
//	}
//	return next;
//}
//int main()
//{
//	string s = "aabaaf";
//	vector<int>next = getNext(s);
//	for (auto e : next)
//		cout << e << " ";
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//class Solution
//{
//public:
//
//	vector<int>getNext(const string& s)
//	{
//		vector<int>next;
//		next.resize(s.size());
//		int j = 0;
//		for (int i = 1; i < (int)s.size(); i++)
//		{
//			//如果未匹配成功需要回退
//			while (s[i] != s[j] && j > 0)
//				j = next[j - 1];
//
//			if (s[i] == s[j])
//				j++;
//			next[i] = j;
//		}
//		return next;
//	}
//
//	bool repeatedSubstringPattern(string s)
//	{
//		vector<int>next = getNext(s);
//		if (s.size() == 0)
//			return false;
//		if (next[s.size() - 1] == 0)
//			return false;
//
//		if (s.size() % (s.size() - next[s.size() - 1]) == 0)
//			return true;
//		return false;
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
//class Solution
//{
//public:
//	vector<int> getNext(const string& needle)
//	{
//		vector<int>next;
//		next.resize(needle.size());
//		int j = 0;
//		for (int i = 1; i < needle.size(); i++)
//		{
//			while (j > 0 && needle[i] != needle[j])
//			{
//				j = next[j - 1];
//			}
//
//			if (needle[i] == needle[j])
//				j++;
//			next[i] = j;
//		}
//		return next;
//	}
//
//	int strStr(string haystack, string needle)
//	{
//		if (needle.size() == 0)
//			return 0;
//		vector<int>next = getNext(needle);
//		int j = 0;
//		for (int i = 0; i < (int)haystack.size(); i++)
//		{
//			while (haystack[i] != needle[j] && j > 0)
//			{
//				j = next[j - 1];
//			}
//			if (haystack[i] == needle[j])
//				j++;
//			if (j == needle.size())
//				return i - next.size() + 1;
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	string haystack = "a";
//	string needle = "";
//	cout << Solution().strStr(haystack, needle);
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//int Inversenumber(vector<int>& nums)
//{
//	int count = 0;
//	for (int i = 0; i < (int)nums.size() - 1; i++)
//	{
//		for (int j = 0; j < (int)nums.size() - i - 1; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				swap(nums[j], nums[j + 1]);
//				count++;
//			}
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int>nums;
//		nums.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> nums[i];
//		}
//		int count = Inversenumber(nums);
//		if (count % 2 == 0)
//			cout << "even" << endl;
//		else
//			cout << "odd" << endl;
//
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//void _Mergesort(vector<int>&nums, int left, int right, int& count)
//{
//	//一个数默认就有序了
//	if (left >= right)
//		return;
//	int mid = left + (right - left) / 2;
//	_Mergesort(nums, left, mid, count);
//	_Mergesort(nums, mid + 1, right, count);
//
//	//开始归并
//	vector<int>flag;
//	flag.resize(nums.size());
//	int left1 = left, right1 = mid;
//	int left2 = mid + 1, right2 = right;
//	int index = left1;
//	while (left1 <= right1 && left2 <= right2)
//	{
//		if (nums[left1] > nums[left2])
//		{
//			flag[index++] = nums[left2++];
//			count += mid - left1 + 1;
//		}
//		else
//		{
//			flag[index++] = nums[left1++];
//		}
//	}
//
//	while (left1 <= right1)
//	{
//		flag[index++] = nums[left1++];
//	}
//	while (left2 <= right2)
//	{
//		flag[index++] = nums[left2++];
//	}
//
//	//拷贝回原来的数组
//	for (int i = left; i <= right; i++)
//	{
//		nums[i] = flag[i];
//	}
//}
//
//void Mergesort(vector<int>&nums)
//{
//	int count = 0;
//	_Mergesort(nums, 0, nums.size() - 1, count);
//	if (count % 2 == 0)
//		cout << "even" << endl;
//	else
//		cout << "odd" << endl;
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		vector<int>nums;
//		nums.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &nums[i]);
//		}
//		Mergesort(nums);
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
//	void setZeroes(vector<vector<int>>& matrix)
//	{
//		int rowSize = matrix.size();
//		int colSize = matrix[0].size();
//		vector<int>row(rowSize), col(colSize);
//		for (int i = 0; i < rowSize; i++)
//		{
//			for (int j = 0; j < colSize; j++)
//			{
//				if (matrix[i][j] == 0)
//				{
//					row[i] = col[j] = 1;
//				}
//			}
//		}
//		
//		for (int i = 0; i < rowSize; i++)
//		{
//			for (int j = 0; j < colSize; j++)
//			{
//				if (row[i] || col[j])
//				{
//					matrix[i][j] = 0;
//				}
//			}
//		}
//	}
//};
//int main()
//{
//	vector<vector<int>>matrix{ {0,1,2,0},{3,4,5,2},{1,3,1,5} };
//	Solution().setZeroes(matrix);
//	int rowSize = matrix.size();
//	int colSize = matrix[0].size();
//	for (int i = 0; i < rowSize; i++)
//	{
//		for (int j = 0; j < colSize; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class WordsFrequency {
//public:
//	WordsFrequency(vector<string>& book)
//	{
//		for (auto e : book)
//		{
//			nums[e]++;
//		}
//	}
//
//	int get(string word)
//	{
//		auto it = nums.find(word);
//		if (it == nums.end())
//			return 0;
//		else
//			return (*it).second;
//	}
//private:
//	unordered_map<string, int>nums;
//};
//
//int main()
//{
//	vector<string>book{ "i", "have", "an"};
//	WordsFrequency tmp(book);
//
//	cout << tmp.get("i") << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> partitionLabels(string s)
//	{
//		int hash[26] = { 0 };
//		//找到每个字符最后一个所在的位置
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			hash[s[i] - 'a'] = i;
//		}
//		vector<int>ret;
//		int left = 0, right = 0;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			right = max(right, hash[s[i] - 'a']);
//			if (i == right)
//			{
//				ret.push_back(right - left + 1);
//				left = right + 1;
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	string s{ "ababcbacadefegdehijhklij" };
//	vector<int>ret = Solution().partitionLabels(s);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}


