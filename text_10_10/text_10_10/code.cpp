////面试题 17.04. 消失的数字
//#include<iostream>
//#include<vector>
//using namespace std;
//
////class Solution {
////public:
////	int missingNumber(vector<int>& nums) {
////		int sum = 0;
////		for (int i = 0; i <= (int)nums.size(); i++)
////		{
////			sum += i;
////		}
////
////		for (int i = 0; i < (int)nums.size(); i++)
////		{
////			sum -= nums[i];
////		}
////		return sum;
////	}
////};
//
//
//class Solution {
//public:
//	int missingNumber(vector<int>& nums)
//	{
//		int flag = 0;
//		for (int i = 0; i <= (int)nums.size(); i++) {
//			flag ^= i;
//		}
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			flag ^= nums[i];
//		}
//		return flag;
//	}
//};
//int main()
//{
//	vector<int> nums{ 9,6,4,2,3,5,7,0,1 };
//	cout << Solution().missingNumber(nums) << endl;
//	return 0;
//}
//



////189. 旋转数组
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
////class Solution {
////public:
////	void rotate(vector<int>& nums, int k) {
////
////		k %= nums.size();
////		//暴力法
////		int count = 0;
////		for (int i = 0; i < k; i++)
////		{
////			int tmp = nums[nums.size() - 1];
////			for (int i = nums.size() - 2; i >= 0; i--)
////			{
////				nums[i + 1] = nums[i];
////				count++;
////			}
////			nums[0] = tmp;
////		}
////	}
////};
//
////class Solution {
////public:
////	void rotate(vector<int>& nums, int k) {
////		k %= nums.size();
////		reverse(nums.begin(), nums.begin() + nums.size() - k);
////		reverse(nums.begin() + nums.size() - k, nums.end());
////		reverse(nums.begin(), nums.end());
////	}
////};
//
//
////使用额外的空间
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		vector<int> ret(nums.size(), 0);
//		int i = 0;
//		k %= nums.size();
//
//		for (int j = (int)nums.size() - k; j < (int)nums.size(); j++)
//		{
//			ret[i] = nums[j];
//			i++;
//		}
//		for (int j = 0; j < (int)nums.size() - k; j++)
//		{
//			ret[i] = nums[j];
//			i++;
//		}
//		nums.assign(ret.begin(), ret.end());
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,2,3,4,5,6,7 };
//	int k = 3;
//	Solution().rotate(nums, k);
//	for (auto e : nums)
//		cout << e << " ";
//	return 0;
//}

////剑指 Offer 56 - I. 数组中数字出现的次数
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> singleNumbers(vector<int>& nums) {
//		int tmp = 0;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			tmp ^= nums[i];
//		}
//
//		//找出不相同的第一位
//		int flag = 1;
//		while (tmp)
//		{
//			if (tmp&flag)
//				break;
//			flag <<= 1;
//		}
//		int ret1 = 0, ret2 = 0;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			if (nums[i] & flag)
//			{
//				ret1 ^= nums[i];
//			}
//			else
//				ret2 ^= nums[i];
//		}
//		vector<int> ret;
//		ret.push_back(ret1);
//		ret.push_back(ret2);
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,2,10,4,1,4,3,3 };
//	vector<int> ret = Solution().singleNumbers(nums);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	virtual void Fun()
//	{
//		cout << "Fun()" << endl;
//	}
//	int _a;
//};
//
//class B :public A
//{
//public:
//	virtual void Fun()
//	{
//		cout << "Fun()" << endl;
//	}
//
//	virtual void Print()
//	{
//		cout << "Print()" << endl;
//	}
//	int _b;
//};
//
//int main()
//{
//	A a;
//	B b;
//	cout << sizeof(a) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "成人票" << endl;
//	}
//};
//
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "学生票" << endl;
//	}
//};
//
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person a;
//	Student b;
//	Func(a);
//	Func(b);
//	return 0;
//}

////441. 排列硬币
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int arrangeCoins(int n) {
//		long long sum = 1;
//		int i = 2;
//		while (sum <= n)
//		{
//			sum += i;
//			if (sum > n)
//				break;
//			i++;
//		}
//		return i - 1;
//	}
//};
//
//int main()
//{
//	cout << Solution().arrangeCoins(5) << endl;
//	return 0;
//}


//5894. 至少在两个数组中出现的值
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void Traverse(vector<vector<int>>& nums, int pos, vector<int>& arr)
	{
		for (int i = 0; i < (int)arr.size(); i++)
		{
			nums[pos][arr[i]] = 1;
		}
	}
	vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
		vector<vector<int>> flag(3);
		flag[0].resize(101);
		flag[1].resize(101);
		flag[2].resize(101);

		Traverse(flag, 0, nums1);
		Traverse(flag, 1, nums2);
		Traverse(flag, 2, nums3);

		vector<int> ret;
		for (int i = 0; i <= 100; i++)
		{
			if (flag[0][i] + flag[1][i] + flag[2][i] >= 2)
				ret.push_back(i);
		}
		return ret;
	}
};

int main()
{
	vector<int>nums1{ 2,3 };
	vector<int>nums2{ 3,1 };
	vector<int>nums3{ 1,2 };

	vector<int> ret = Solution().twoOutOfThree(nums1, nums2, nums3);
	for (auto e : ret)
	{
		cout << e << " ";
	}
	return 0;
}