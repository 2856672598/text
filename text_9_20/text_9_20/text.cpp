
////LCP 06. 拿硬币
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int minCount(vector<int>& coins)
//	{
//		int count = 0;
//		for (int i = 0; i < (int)coins.size(); i++)
//		{
//			count += coins[i] / 2;
//			if (coins[i] % 2 != 0)
//				count += 1;
//		}
//		return count;
//	}
//};
//
//
//int main()
//{
//	vector<int> nums{ 2,3,10 };
//	cout << Solution().minCount(nums) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	string replaceSpace(string s)
//	{
//		string ret;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			if (s[i] != ' ')
//				ret += s[i];
//			else
//				ret += "%20";
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	string s("We Are Happy");
//	cout << Solution().replaceSpace(s) << endl;
//	return 0;
//}

////剑指 Offer 11. 旋转数组的最小数字
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int minNumberInRotateArray(vector<int> rotateArray)
//	{
//		int left = 0, right = rotateArray.size() - 1;
//
//		while (left < right)
//		{
//			int mid = left + (right - left) / 2;
//
//			if (rotateArray[mid] > rotateArray[right])
//				//说明最小值一定在mid右侧
//				left = mid + 1;
//			else if (rotateArray[mid] < rotateArray[right])
//				//说明最小值一定在mid或者mid左侧
//				right = mid;
//			else
//				right--;
//		}
//		return rotateArray[left];
//	}
//};
//int main()
//{
//	vector<int> nums{ 3,3,3,1,2, };
//	cout << Solution().minNumberInRotateArray(nums) << endl;
//	return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	double Power(double base, int exponent)
//	{
//		double sum = 1;
//		while (exponent)
//		{
//			if (exponent % 2)
//			{
//				sum *= base;
//			}
//
//			base *= base;
//			exponent /= 2;
//		}
//		return sum;
//	}
//};
//
//int main()
//{
//	double base = 2;
//	int exponent = 5;
//	cout << Solution().Power(base, exponent) << endl;
//	return 0;
//}


////LCP 17. 速算机器人
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	int calculate(string s)
//	{
//		int x = 1, y = 0;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			if (s[i] == 'A')
//				x = 2 * x + y;
//			else if (s[i] == 'B')
//				y = 2 * y + x;
//		}
//		return x + y;
//	}
//};
//
//int main()
//{
//	string s("AB");
//	cout << Solution().calculate(s) << endl;
//	return 0;
//}


////NC22 合并两个有序的数组
//#include<iostream>
//using namespace std;
//
//class Solution
//{
//public:
//	void merge(int A[], int m, int B[], int n)
//	{
//		int begin1 = m - 1;
//		int begin2 = n - 1;
//		int insert = m + n - 1;
//
//		while (begin1 >= 0 && begin2 >= 0)
//		{
//			if (A[begin1] > B[begin2])
//			{
//				A[insert--] = A[begin1--];
//			}
//			else A[insert--] = B[begin2--];
//		}
//
//		while (begin1 >= 0)
//		{
//			A[insert--] = A[begin1--];
//		}
//
//		while (begin2 >= 0)
//		{
//			A[insert--] = B[begin2--];
//		}
//	}
//};
//int main()
//{
//	int A[6] = { 4,5,6 };
//	int B[3] = { 1,2,3 };
//
//	Solution().merge(A, 3, B, 3);
//
//	for (int i = 0; i < 6; i++)
//	{
//		cout << A[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}


////剑指 Offer 42. 连续子数组的最大和
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int maxSubArray(vector<int>& nums)
//	{
//		//当前缀和小于0时，在加就没有意义了，直接置为0
//		int summax = nums[0];
//		int sum = 0;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			sum += nums[i];
//			if (sum > summax)
//				summax = sum;
//			if (sum < 0)
//				sum = 0;
//		}
//		return summax;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };
//	cout << Solution().maxSubArray(nums) << endl;
//	return 0;
//}


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
//		int count = 0;
//		while (left <= right)
//		{
//			int mid = left + (right - left) / 2;
//			if (nums[mid] > target)
//				right = mid - 1;
//			else if (nums[mid] < target)
//				left = mid + 1;
//			else
//			{
//				left = mid - 1;
//				while (left >= 0)
//				{
//					if (nums[left] != target)
//						break;
//					else
//						count++;
//					left--;
//				}
//				right = mid;
//				while (right < (int)nums.size())
//				{
//					if (nums[right] != target)
//						break;
//					else
//						count++;
//					right++;
//				}
//
//				break;
//			}
//		}
//		return count;
//	}
//};
//
//
//int main()
//{
//	vector<int> nums{ 5,7,7,8,8,10 };
//	cout << Solution().search(nums, 8) << endl;
//	return 0;
//}


////剑指 Offer 11. 旋转数组的最小数字
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int minArray(vector<int>& numbers)
//	{
//		int left = 0, right = numbers.size() - 1;
//		int pos = 0;
//		while (numbers[left] >= numbers[right])
//		{
//			if (right - left == 1)
//			{
//				pos = right;
//				break;
//			}
//			int mid = left + (right - left) / 2;
//
//			if (numbers[left] == numbers[right] && numbers[mid] == numbers[left])
//			{
//				int min = numbers[left];
//				for (int i = left; i < right; i++)
//				{
//					if (numbers[i] < min)
//						min = numbers[i];
//				}
//				return min;
//			}
//
//			if (numbers[mid] >= numbers[left])
//			{
//				//说明最小值位于mid的右侧
//				left = mid;
//			}
//			else
//			{
//				//说明最小值位于mid的左侧
//				right = mid;
//			}
//		}
//		return numbers[pos];
//	}
//};
//
//int main()
//{
//	vector<int> v{ 2};
//	cout << Solution().minArray(v) << endl;
//	return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//////暴力求解
////class Solution
////{
////public:
////	bool search(vector<int>& nums, int target)
////	{
////		for (int i = 0; i < (int)nums.size(); i++)
////		{
////			if (nums[i] == target)
////				return true;
////		}
////		return false;
////	}
////};
//
//
//class Solution
//{
//public:
//	bool Find(const vector<int>& nums, int target, int left, int right)
//	{
//		while (left <= right)
//		{
//			int mid = left + (right - left) / 2;
//			if (nums[mid] > target)
//				right = mid - 1;
//			else if (nums[mid] < target)
//				left = mid + 1;
//			else
//				return true;
//		}
//		return false;
//	}
//
//	bool search(vector<int>& nums, int target)
//	{
//		int left = 0, right = nums.size() - 1;
//		int pos = 0;
//		//找最大值所在的位置
//		while (nums[left] >= nums[right])
//		{
//			if (right - left == 1)
//			{
//				pos = left;
//				break;
//			}
//			int mid = left + (right - left) / 2;
//			if (nums[left] == nums[right] && nums[left] == nums[mid])
//			{
//				int maxi = left;
//				for (int i = left; i < right; i++)
//				{
//					if (nums[maxi] < nums[i])
//						maxi = i;
//				}
//				pos = maxi;
//				break;
//			}
//			if (nums[mid] >= nums[left])
//				left = mid;
//			else
//				right = mid;
//		}
//		return Find(nums, target, 0, pos) || Find(nums, target, pos+1, nums.size() - 1);
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1 };
//	cout << Solution().search(nums, 2) << endl;
//	return 0;
//}


//超时
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution
{
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k)
	{
		vector<int> flag;
		int i = 1;
		if (nums.size() > k)
		{
			while (i <= k)
			{
				flag.push_back(nums[i]);
				i++;
			}
		}

		for (int i = 0; i < (int)nums.size(); i++)
		{
			if (find(flag.begin(), flag.end(), nums[i]) != flag.end())
			{
				return true;
			}
			flag.push_back(nums[i]);

			while ((int)flag.size() > k)
			{
				flag.erase(flag.begin());
			}
		}
		return false;
	}
};

int main()
{
	vector<int>nums{ 1,2,3,1,2,3 };
	int k = 2;
	cout << Solution().containsNearbyDuplicate(nums, k) << endl;
	return 0;
}

