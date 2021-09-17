
////27. 移除元素
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int removeElement(vector<int>& nums, int val)
//	{
//		vector<int>::iterator it = nums.begin();
//		while (it != nums.end())
//		{
//			if (*it == val)
//			{
//				it = nums.erase(it);
//			}
//			else
//				it++;
//		}
//		return nums.size();
//	}
//};
//
//int main()
//{
//	vector<int> v{ 3,2,2,3 };
//	int val = 3;
//	cout << Solution().removeElement(v, val) << endl;
//	return 0;
//}


////35. 搜索插入位置
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int searchInsert(vector<int>& nums, int target)
//	{
//		int left = 0, right = nums.size() - 1;
//		int mid = 0;
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//
//			if (nums[mid] > target)
//			{
//				right = mid - 1;
//			}
//			else if (nums[mid] < target)
//			{
//				left = mid + 1;
//			}
//			else
//				return mid;
//		}
//		return left;
//	}
//};
//
//
//int main()
//{
//	vector<int>v{ 1,3,5,7 };
//	int target = 6;
//	cout << Solution().searchInsert(v, target) << endl;
//	return 0;
//}


////66. 加一
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int> plusOne(vector<int>& digits)
//	{
//		int sz = digits.size() - 1;
//		digits[sz] += 1;
//		while (sz > 0 && digits[sz] >= 10)
//		{
//			digits[sz - 1] += 1;
//			digits[sz] -= 10;
//			sz--;
//		}
//		if (digits[sz] >= 10)
//		{
//			digits[sz] -= 10;
//			digits.insert(digits.begin(), 1);
//		}
//
//		return digits;
//	}
//};
//
//int main()
//{
//	vector<int> v{ 9 };
//	Solution().plusOne(v);
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	return 0;
//}


////53. 最大子序和
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	int maxSubArray(vector<int>& nums)
//	{
//		int maxsum = nums[0], sum = nums[0];
//		size_t size = nums.size();
//		for (size_t i = 1; i < size; i++)
//		{
//			if (sum > 0)
//				sum += nums[i];
//			else
//			{
//				if (sum < nums[i])
//					sum = nums[i];
//			}
//			if (sum > maxsum)
//				maxsum = sum;
//		}
//		return maxsum;
//	}
//};
//
//
////class Solution
////{
////public:
////	int maxSubArray(vector<int>& nums)
////	{
////		size_t sz = nums.size();
////		int maxsum = nums[0], sum = 0;
////		int begin = 0;
////		for (size_t i = 0; i < sz; i++)
////		{
////			sum = max(sum + nums[i], nums[i]);
////			maxsum = max(maxsum, sum);
////		}
////		return maxsum;
////	}
////};
//
//int main()
//{
//	vector<int> v{ -2,1,-3,4,-1,2,1,-5,4 };
//	cout << Solution().maxSubArray(v) << endl;
//	return 0;
//}


////217. 存在重复元素
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	bool containsDuplicate(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		size_t sz = nums.size();
//		size_t fast = 1, slow = 0;
//
//		while (fast < sz)
//		{
//			if (nums[fast] == nums[slow])
//				return true;
//			fast++;
//			slow++;
//		}
//		return false;
//	}
//};
//
//
//int main()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	cout << Solution().containsDuplicate(v) << endl;
//	return 0;
//}

////88. 合并两个有序数组
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution
////{
////public:
////	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
////	{
////		for (int i = 0; i < n; i++)
////		{
////			nums1[m + i] = nums2[i];
////		}
////		sort(nums1.begin(), nums1.end());
////	}
////};
//
//class Solution
//{
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
//	{
//		int* nums = new int[m + n];
//		int cur = 0, begin1 = 0, begin2 = 0;
//		while (begin1 < m || begin2 < n)
//		{
//			if (begin1 == m)
//			{
//				nums[cur++] = nums2[begin2++];
//			}
//			else if (begin2 == n)
//			{
//				nums[cur++] = nums1[begin1++];
//			}
//			else if (nums1[begin1] < nums2[begin2])
//			{
//				nums[cur++] = nums1[begin1++];
//			}
//			else
//				nums[cur++] = nums2[begin2++];
//		}
//
//		for (size_t i = 0; i < nums1.size(); i++)
//		{
//			nums1[i] = nums[i];
//		}
//	}
//};
//
//int main()
//{
//	vector<int> nums1{ 1,2,3,0,0,0 };
//	vector<int> nums2{ 2,5,6 };
//	Solution().merge(nums1, 3, nums2, 3);
//
//	for (auto e : nums1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}


////268. 丢失的数字
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution
////{
////public:
////	int missingNumber(vector<int>& nums)
////	{
////		size_t sz = nums.size();
////		int sum = (1 + sz)*sz / 2;
////		for (size_t i = 0; i < sz; i++)
////		{
////			sum -= nums[i];
////		}
////		return sum;
////	}
////};
//
//
//class Solution
//{
//public:
//	int missingNumber(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		size_t sz = nums.size();
//		for (size_t i = 0; i < sz; i++)
//		{
//			if (nums[i] != i)
//				return i;
//		}
//		if (nums[sz - 1] != sz)
//			return sz;
//
//		return -1;
//	}
//};
//
//int main()
//{
//	vector<int> v{ 3,4,1,5,2 };
//	cout << Solution().missingNumber(v) << endl;
//	return 0;
//}


////204. 计数质数
//#include<iostream>
//#include<vector>
//#include<math.h>
//using namespace std;
//
////class Solution
////{
////public:
////	bool isPrimes(int n)
////	{
////		for (int i = 2; i <= (int)sqrt(n); i += 2)
////		{
////			if (n%i == 0)
////				return false;
////		}
////		return true;
////	}
////	int countPrimes(int n)
////	{
////		int count = 0;
////		for (int i = 2; i < n; i++)
////		{
////			if (i % 2 != 0 && isPrimes(i))
////				count++;
////		}
////		return count;
////	}
////};
//
////埃氏筛
//class Solution
//{
//public:
//	int countPrimes(int n)
//	{
//		vector<int> ret(n, 1);
//		for (int i = 2; i <= (int)sqrt(n); i++)
//		{
//			if (ret[i] == 1)
//			{
//				for (int j = i + i; j < n; j += i)
//				{
//					ret[j] = false;
//				}
//			}
//		}
//
//		int count = 0;
//		for (size_t i = 2; i < ret.size(); i++)
//		{
//			if (ret[i] != 0)
//				count++;
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	cout << Solution().countPrimes(n) << endl;
//	return 0;
//}



////389. 找不同
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	char findTheDifference(string s, string t)
//	{
//		sort(s.begin(), s.end());
//		sort(t.begin(), t.end());
//		size_t sz = s.size();
//		for (size_t i = 0; i < sz; i++)
//		{
//			if (s[i] != t[i])
//				return t[i];
//		}
//		return t[sz];
//	}
//};
//
//int main()
//{
//	string s1("abcd");
//	string s2("abcde");
//	cout << Solution().findTheDifference(s1, s2) << endl;
//	return 0;
//}


////709. 转换成小写字母
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	string toLowerCase(string s)
//	{
//		size_t size = s.size();
//		for (size_t i = 0; i < size; i++)
//		{
//			if (s[i] >= 'A'&&s[i] <= 'Z')
//				s[i] += 32;
//		}
//		return s;
//	}
//};
//
//int main()
//{
//	string s1("HELLO");
//	cout << Solution().toLowerCase(s1) << endl;
//	return 0;
//}


////392. 判断子序列
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	bool isSubsequence(string s, string t)
//	{
//		string::iterator it = t.begin();
//		string::iterator is = s.begin();
//		while (it != t.end())
//		{
//			if (*it == *is)
//			{
//				is++;
//			}
//			it++;
//		}
//		if (is == s.end())
//			return true;
//		return false;
//	}
//};
//
//int main()
//{
//	string s1("abc");
//	string s2("ahbgdc");
//	cout << Solution().isSubsequence(s1, s2) << endl;
//	return 0;
//}


////520. 检测大写字母
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	bool detectCapitalUse(string word)
//	{
//		size_t sz = word.size();
//		int count = 0;//大写字母个数
//		int flag = 0;
//		for (size_t i = 0; i < sz; i++)
//		{
//			if (word[i] >= 'A'&&word[i] <= 'Z')
//			{
//				if (i == 0)
//					flag = 1;
//				count++;
//			}
//		}
//		if (count == sz || (count == 1 && flag == 1) || count == 0)
//			return true;
//		return false;
//	}
//};
//int main()
//{
//	string word("ffffffG");
//	cout << Solution().detectCapitalUse(word) << endl;
//	return 0;
//}


////796. 旋转字符串
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
////class Solution
////{
////public:
////	bool rotateString(string s, string goal)
////	{
////		if (s.size() != goal.size())
////			return false;
////		s.append(s);
////		if (s.find(goal) != string::npos)
////			return true;
////		return false;
////	}
////};
//
//class Solution
//{
//public:
//	bool rotateString(string s, string goal)
//	{
//		if (s.size() != goal.size())
//			return false;
//		s += s;
//		string::iterator is = s.begin();
//		string::iterator ig = goal.begin();
//		string::iterator p = s.begin();
//		while (p != s.end())
//		{
//			is = p;
//			while (*is == *ig)
//			{
//				is++;
//				ig++;
//			}
//			if (ig == goal.end())
//				return true;
//
//			ig = goal.begin();
//			p++;
//		}
//		return false;
//	}
//};
//
//int main()
//{
//	string s1("abcde");
//	string s2("abced");
//	cout << Solution().rotateString(s1, s2) << endl;
//	return 0;
//}


////453. 最小操作次数使数组元素相等
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution
////{
////public:
////	int minMoves(vector<int>& nums)
////	{
////		sort(nums.begin(), nums.end());
////		size_t size = nums.size();
////		int count = 0;
////		while (true)
////		{
////			int diff = nums[0] - nums[size - 1];
////			count += diff;
////			if (diff == 0)
////				return count;
////			for (size_t i = 0; i < size; i++)
////			{
////				if (i != size - 1)
////				nums[i] += diff;
////			}
////			sort(nums.begin(), nums.end());
////		}
////	}
////};
//
//class Solution
//{
//public:
//	int minMoves(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		size_t count = 0;
//		for (int i = nums.size() - 1; i >= 0; i--)
//		{
//			count += nums[i] - nums[0];
//		}
//		return count;
//	}
//};
//int main()
//{
//	vector<int>nums{ 1,2,3 };
//	cout << Solution().minMoves(nums) << endl;
//	return  0;
//}


////14. 最长公共前缀
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//
//class Solution
//{
//public:
//	string longestCommonPrefix(vector<string>& strs)
//	{
//		string ret;
//		size_t sz = strs.size();
//
//		size_t min = strs[0].size();
//		for (size_t i = 0; i < strs.size(); i++)
//		{
//			if (min > strs[i].size())
//			{
//				min = strs[i].size();
//			}
//		}
//
//		int count = 0;
//
//		for (size_t i = 0; i < min; i++)
//		{
//			count = 0;
//			for (size_t j = 0; j < strs.size() - 1; j++)
//			{
//				if (strs[j][i] == strs[j + 1][i])
//					count++;
//				else
//					return ret;
//			}
//			if (count == strs.size() - 1)
//				ret.push_back(strs[0][i]);
//		}
//
//		return ret;
//	}
//};
//int main()
//{
//	vector<string> str{ "flower","flow","flight" };
//	cout << Solution().longestCommonPrefix(str) << endl;
//	return 0;
//}

////412. Fizz Buzz
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<string> fizzBuzz(int n)
//	{
//		vector<string> ret;
//		for (int i = 1; i <= n; i++)
//		{
//			if (i % 3 == 0 && i % 5 == 0)
//				ret.push_back("FizzBuzz");
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
//	int n = 0;
//	cin >> n;
//	vector <string> ret = Solution().fizzBuzz(n);
//	vector<string>::iterator it = ret.begin();
//	while (it != ret.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	return 0;
//}



//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//////冒泡--->超时
////class Solution
////{
////public:
////	vector<int> sortArray(vector<int>& nums)
////	{
////		size_t size = nums.size();
////		for (size_t i = 0; i < size; i++)
////		{
////			for (size_t j = 0; j < size - 1 - i; j++)
////			{
////				if (nums[j] > nums[j + 1])
////				{
////					swap(nums[j], nums[j + 1]);
////				}
////			}
////		}
////		return nums;
////	}
////};
//
//////插入排序---->超时
////class Solution
////{
////public:
////	vector<int> sortArray(vector<int>& nums)
////	{
////		size_t size = nums.size();
////		for (size_t i = 0; i < size - 1; i++)
////		{
////			int end = i, flag = nums[i + 1];
////			while (end >= 0)
////			{
////				if (nums[end] > flag)
////				{
////					nums[end + 1] = nums[end];
////					end--;
////				}
////				else
////					break;
////			}
////			nums[end + 1] = flag;
////		}
////		return nums;
////	}
////};
//
////希尔排序
//class Solution
//{
//public:
//	vector<int> sortArray(vector<int>& nums)
//	{
//		size_t size = nums.size();
//		int gap = size;
//		//gap>1为预排序 gap==1为插入排序
//		while (gap > 1)
//		{
//			gap = gap / 3 + 1;//加一保证最后一次为1
//			for (size_t  i = 0; i < size - gap; i++)
//			{
//				int flag = nums[i + gap], mid = i;
//				while (mid >= 0)
//				{
//					if (nums[mid] > flag)
//					{
//						nums[mid + gap] = nums[mid];
//						mid -= gap;
//					}
//					else
//						break;
//				}
//				nums[mid + gap] = flag;
//			}
//		}
//		return nums;
//	}
//};
//
//int main()
//{
//	vector<int> v{ 1,90,3,7,2,9,35 };
//	Solution().sortArray(v);
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}


////219. 存在重复元素 II
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////超时
//class Solution
//{
//public:
//	bool containsNearbyDuplicate(vector<int>& nums, int k)
//	{
//		size_t size = nums.size();
//		for (size_t i = 0; i < size; i++)
//		{
//			vector<int>::iterator it = find(nums.begin() + i + 1, nums.end(), nums[i]);
//			if (it != nums.end())
//			{
//				if ((it - (nums.begin() + i)) <= k)
//					return true;
//			}
//		}
//		return false;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 1,2,3,1,2,3 };
//	int k = 2;
//	cout << Solution().containsNearbyDuplicate(nums, k) << endl;
//	return 0;
//}


////4. 寻找两个正序数组的中位数
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
//	{
//		vector<int> merge;
//		size_t size1 = nums1.size(), size2 = nums2.size();
//
//		for (size_t i = 0; i < size1; i++)
//		{
//			merge.push_back(nums1[i]);
//		}
//		for (size_t i = 0; i < size2; i++)
//		{
//			merge.push_back(nums2[i]);
//		}
//
//		sort(merge.begin(), merge.end());
//
//		size_t size = merge.size();
//		size_t pos = size / 2;
//
//		if (size % 2 == 0)
//		{
//			return (merge[pos] + merge[pos - 1]) / 2.0;
//		}
//		else
//			return merge[pos] * 1.0;
//
//		return -1;
//	}
//};
//
//
//int main()
//{
//	vector<int> nums1{ 1 };
//	vector<int> nums2{ };
//	cout << Solution().findMedianSortedArrays(nums1, nums2) << endl;
//	return 0;
//}


////27. 移除元素
//#include<iostream>
//#include<vector>
//using namespace std;
//
////双指针
//class Solution
//{
//public:
//	int removeElement(vector<int>& nums, int val)
//	{
//		size_t slow = 0;
//		for (size_t fast = 0; fast < nums.size(); fast++)
//		{
//			if (nums[fast] != val)
//			{
//				nums[slow++] = nums[fast];
//			}
//		}
//		return slow;
//	}
//};
//
//int main()
//{
//	int val = 3;
//	vector<int> nums{ 3, 2, 2, 3 };
//	cout << Solution().removeElement(nums, val) << endl;
//	return 0;
//}


////704. 二分查找
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int search(vector<int>& nums, int target)
//	{
//		int left = 0, right = nums.size() - 1;
//		while (left <= right)
//		{
//			int mid = left + (right - left) / 2;
//
//			if (nums[mid] > target)
//				right = mid - 1;
//			else if (nums[mid] < target)
//				left = mid + 1;
//			else
//				return mid;
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 9 };
//	int val = -9;
//	cout << Solution().search(nums, val) << endl;
//	return 0;
//}


////283. 移动零
//#include<iostream>
//#include<vector>
//using namespace std;
//
////class Solution
////{
////public:
////	void moveZeroes(vector<int>& nums)
////	{
////		size_t fast = 0, slow = 0;
////		size_t size = nums.size();
////		while (fast < size)
////		{
////			if (nums[fast] != 0)
////			{
////				nums[slow++] = nums[fast++];
////			}
////			else
////				fast++;
////		}
////
////		while (slow < size)
////		{
////			nums[slow++] = 0;
////		}
////	}
////};
//
//class Solution
//{
//public:
//	void moveZeroes(vector<int>& nums)
//	{
//		int fast = 0, slow = 0;
//		int size = nums.size();
//		while (fast < size)
//		{
//			if (nums[fast] != 0)
//			{
//				swap(nums[fast], nums[slow]);
//				fast++;
//				slow++;
//			}
//			else
//				fast++;
//		}
//	}
//};
//
//
//int main()
//{
//	vector<int> nums{ 0,1,0,3,12 };
//	Solution().moveZeroes(nums);
//
//	for (auto e : nums)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}


////977. 有序数组的平方
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution
////{
////public:
////	vector<int> sortedSquares(vector<int>& nums)
////	{
////		vector<int> ret;
////		size_t size = nums.size();
////		for (size_t i = 0; i < size; i++)
////		{
////			ret.push_back(nums[i] * nums[i]);
////		}
////		sort(ret.begin(), ret.end());
////		return ret;
////	}
////};
//
////class Solution
////{
////public:
////	vector<int> sortedSquares(vector<int>& nums)
////	{
////		vector<int>ret;
////		size_t size = nums.size();
////		ret.resize(size);
////
////		int left = 0, right = size - 1;
////
////		int pos = size - 1;
////		while (left <= right)
////		{
////			if (nums[left] * nums[left] > nums[right] * nums[right])
////			{
////				ret[pos--] = nums[left] * nums[left];
////				left++;
////			}
////			else
////			{
////				ret[pos--] = nums[right] * nums[right];
////				right--;
////			}
////		}
////		return ret;
////	}
////};
//
//
////归并思想
//class Solution
//{
//public:
//	vector<int> sortedSquares(vector<int>& nums)
//	{
//		size_t size = nums.size();
//		int flag = 0;
//		for (size_t i = 0; i < size; i++)
//		{
//			if (nums[i] <= 0)
//				flag = i;
//			else
//				break;
//		}
//
//		vector<int>ret;
//
//		int i = flag, j = flag + 1;
//
//		while (i >= 0 || j < (int)size)
//		{
//			if (i < 0)
//			{
//				ret.push_back(nums[j] * nums[j]);
//				j++;
//			}
//			else if (j >= (int)size)
//			{
//				ret.push_back(nums[i] * nums[i]);
//				i--;
//			}
//			else if (nums[i] * nums[i] < nums[j] * nums[j])
//			{
//				ret.push_back(nums[i] * nums[i]);
//				i--;
//			}
//			else
//			{
//				ret.push_back(nums[j] * nums[j]);
//				j++;
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 4 };
//	vector<int> ret = Solution().sortedSquares(nums);
//
//	for (auto tmp : ret)
//	{
//		cout << tmp << " ";
//	}
//	cout << endl;
//	return 0;
//}



////209. 长度最小的子数组
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int minSubArrayLen(int target, vector<int>& nums)
//	{
//		size_t left = 0, right = 0;
//
//		size_t size = nums.size();
//		int sum = 0, count = 0;
//		int min = INT_MAX;
//		while (right < size)
//		{
//			sum += nums[right];
//
//			while (sum >= target)
//			{
//				sum -= nums[left];
//				count = right - left + 1;
//
//				if (count < min)
//				{
//					min = count;
//				}
//				left++;
//			}
//
//			right++;
//		}
//		if (min == INT_MAX)
//			min = 0;
//		return min;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 2,3,1,2,4,3 };
//	int target = 7;
//	cout << Solution().minSubArrayLen(target, nums) << endl;
//	return 0;
//}


//59. 螺旋矩阵 II
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	vector<vector<int>> generateMatrix(int n)
	{
		vector<vector<int>> ret(n, vector<int>(n));

		int startX = 0, startY = 0;
		int loop = n / 2;//圈数
		int offert = 1;
		int count = 1;
		while (loop--)
		{
			int i = startX;
			int j = startY;
			//上面
			for (j; j < startY + n - offert; j++)
			{
				ret[startX][j] = count++;

			}
			//右面

			for (i; i < startX + n - offert; i++)
			{
				ret[i][j] = count++;
			}

			//下面

			for (j; j > startY; j--)
			{
				ret[i][j] = count++;
			}

			//左边
			for (i; i > startX; i--)
			{
				ret[i][j] = count++;
			}

			startX++;
			startY++;
			offert += 2;
		}

		if (n % 2 != 0)
		{
			ret[n / 2][n / 2] = count;
		}
		return ret;
	}
};


int main()
{
	size_t n = 3;
	vector<vector<int>> ret = Solution().generateMatrix(n);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << ret[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}