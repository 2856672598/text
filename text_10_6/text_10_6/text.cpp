
////2023. 连接后等于目标字符串的字符串对
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int numOfPairs(vector<string>& nums, string target) {
//		int count = 0;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			for (int j = 0; j < (int)nums.size(); j++)
//			{
//				if (i != j && nums[i] + nums[j] == target)
//				{
//					count++;
//				}
//			}
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	vector<string> nums{ "777","7","77","77" };
//	string target{ "7777" };
//	cout << Solution().numOfPairs(nums, target) << endl;
//	return 0;
//}

////1929. 数组串联
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> getConcatenation(vector<int>& nums) {
//
//		vector<int>ret(nums);
//		ret.resize(nums.size() * 2);
//		for (int i = (int)nums.size(); i < (int)(2 * nums.size()); i++)
//		{
//			ret[i] = nums[i - nums.size()];
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,2,1 };
//	vector<int>ret = Solution().getConcatenation(nums);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	bool isFlipedString(string s1, string s2) {
//
//		if (s1.size() != s2.size())
//			return false;
//		string flag = s1 + s1;
//		string::iterator it = search(flag.begin(), flag.end(), s2.begin(), s2.end());
//		if (it == flag.end() && flag.begin() != flag.end())
//			return false;
//		return true;
//	}
//};
//
//int main()
//{
//	string s1{ "abcd" };
//	string s2{ "bcda" };
//	cout << Solution().isFlipedString(s1, s2) << endl;
//	return 0;
//}


////面试题 05.07. 配对交换
//#include<iostream>
//#include<vector>
//using namespace std;
//
////class Solution {
////public:
////	int exchangeBits(int num) {
////		vector<int> flag;
////		int tmp = num;
////		while (tmp)
////		{
////			flag.push_back(tmp % 2);
////			tmp >>= 1;
////		}
////		if (flag.size() % 2 == 1)
////			flag.push_back(0);
////
////		int fast = 1, slow = 0;
////
////		while (fast < (int)flag.size())
////		{
////			swap(flag[fast], flag[slow]);
////			fast += 2;
////			slow += 2;
////		}
////		int sum = 0;
////		int base = 1;
////		for (int i = 0; i < (int)flag.size(); i++)
////		{
////			if (flag[i] == 1)
////				sum += base;
////			base <<= 1;
////		}
////		return sum;
////	}
////};
//
//
//class Solution {
//public:
//	int exchangeBits(int num) {
//		int even = 0x55555555;
//		int odd = 0xAAAAAAAA;
//		//提取出偶数的每位和奇数的每一位
//		//偶数位左移一位就到了奇数位
//		//最后加到一起就是换位后的数
//		return ((even&num) << 1) + ((odd&num) >> 1);
//	}
//};  
//
//int main()
//{
//	int num = 100;
//	cout << Solution().exchangeBits(num) << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
////414.第三大的数
////class Solution {
////public:
////	int thirdMax(vector<int>& nums) {
////		sort(nums.rbegin(), nums.rend());
////		int flag = 0;
//// 		for (int i = 1; i < (int)nums.size(); i++)
////		{
////			if (nums[i] != nums[i - 1])
////				flag++;
////			if (flag == 2)
////				return nums[i];
////		}
////		return nums[0];
////	}
////};
//
//class Solution {
//public:
//	int thirdMax(vector<int>& nums) {
//		priority_queue<int> q;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			q.push(nums[i]);
//		}
//		int count = 0;
//		int max = q.top();
//		int prev = max;
//		while (count < 2)
//		{
//			if (q.empty())
//				return max;
//			if (q.top() != prev)
//			{
//				prev = q.top();
//				count++;
//			}
//			q.pop();
//		}
//		return prev;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 2, 2 ,2 , 2 , 3, 1 };
//	cout << Solution().thirdMax(nums) << endl;
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//
////class Solution {
////public:
////	int reverseBits(int num) {
////		int prev = 0;//前一段长度
////		int cur = 0;//当前长度
////		int length = 0;//最大长度
////
////		//当 全为1时就不要在加1了
////		if (num == -1)
////			return 32;
////		unsigned int tmp = num;
////		while (tmp)
////		{
////			if ((tmp & 1) == 1)
////				cur++;
////			else
////			{
////				length = max(length, cur + prev + 1);
////				prev = cur;
////				cur = 0;
////			}
////			tmp >>= 1;
////		}
////		length = max(length, cur + prev + 1);
////		return length;
////	}
////};
//
//
////利用数组存储当前连续1个个数，如果连续则在同一位置累加，遇到了0数组指针加一
//class Solution {
//public:
//	int reverseBits(int num) {
//		if (num == -1)
//			return 32;
//		int arr[32] = { 0 };
//		int index = 0;
//		unsigned int tmp = num;
//		while (tmp)
//		{
//			if ((tmp & 1) == 1)
//				arr[index]++;
//			else
//				index++;
//			tmp >>= 1;
//		}
//		int longest = 0;
//		for (int i = 0; i < 32 - 1; i++)
//		{
//			longest = max(arr[i] + arr[i + 1] + 1, longest);
//		}
//		return longest;
//	}
//};
//
//int main()
//{
//	int num = -1;
//	cout << Solution().reverseBits(num) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	//定义虚函数不能被重写
//	virtual void Print() final
//	{
//		cout << "A" << endl;
//	}
//};
//
//class B:public A
//{
//public:
//	virtual void Print()
//	{
//		cout << "B" << endl;
//	}
//};
//
//void fun(A& a)
//{
//	a.Print();
//}
//int main()
//{
//	A a;
//	B b;
//	fun(a);
//	fun(b);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void Print()
//	{
//		cout << "A" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	//如果没有重写基类的Print函数 将会报错
//	virtual void Print() override
//	{
//		cout << "B" << endl;
//	}
//};


//#include<iostream>
//using namespace std;
//
////纯虚类
//class A
//{
//public:
//	//纯虚函数
//	virtual void Print() = 0;
//};
//
//class B :public A
//{
//public:
//	//必须重写纯虚函数
//	virtual void Print()
//	{
//		cout << "B" << endl;
//	}
//};
//
//int main()
//{
//	A a;//纯虚类不能被实例化
//	B b;
//	b.Print();
//	return 0;
//}

//剑指 Offer II 034. 外星语言是否排序
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
	bool isAlienSorted(vector<string>& words, string order) {
		vector<int> flag(26, 0);

		for (int i = 0; i < (int)order.size(); i++)
		{
			flag[order[i] - 'a'] = i;
		}

		for (int i = 0; i < (int)words.size() - 1; i++)
		{
			int j = i + 1;
			int size = words[i].size() > words[j].size()
				? words[j].size() : words[i].size();
			int z = 0;
			while (z < size)
			{
				if (flag[words[i][z] - 'a'] > flag[words[j][z] - 'a'])
					return false;
				else if (flag[words[i][z] - 'a'] < flag[words[j][z] - 'a'])
					break;
				z++;
			}
			if (z == size && words[i].size() > size)
				return false;
		}
		return true;
	}
};

int main()
{
	vector<string> words{ "hello","leetcode" };
	string order{ "hlabcdefgijkmnopqrstuvwxyz" };
	cout << Solution().isAlienSorted(words, order) << endl;
	return 0;
}