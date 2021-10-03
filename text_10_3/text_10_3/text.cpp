//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void  BuyTicket()
//	{
//		cout << "购买全票" << endl;
//	}
//};
//
//class B:public A
//{
//public:
//	void virtual BuyTicket()
//	{
//		cout << "购买半票" << endl;
//	}
//};
//
//void Fun(A& a)
//{
//	a.BuyTicket();
//}
//
//int main()
//{
//	A a;
//	B b;
//	Fun(a);
//	Fun(b);
//	return 0;
//}

////协变--->函数返回值可以不同
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual A& BuyTicket()
//	{
//		cout << "成人票" << endl;
//		return *this;
//	}
//};
//
//class B :public A
//{
//public:
//	virtual B& BuyTicket()
//	{
//		cout << "儿童票" << endl;
//		return *this;
//	}
//};
//
//void Fun(A& a)
//{
//	a.BuyTicket();
//}
//
//int main()
//{
//	A a;
//	B b;
//	Fun(a);
//	Fun(b);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual ~A()
//	{
//		cout << "~A" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	virtual ~B()
//	{
//		cout << "~B" << endl;
//	}
//};
//
//int main()
//{
//	A* a = new A;
//	A* b = new B;
//
//	delete a;
//	delete b;
//
//	return 0;
//}

////5871. 将一维数组转变成二维数组
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
//
//		vector<vector<int>>ret;
//		if (m*n != original.size())
//			return ret;
//		int i = 0;
//		while (i < m*n)
//		{
//			vector<int> tmp;
//			for (int j = 0; j < n; j++)
//			{
//				tmp.push_back(original[i++]);
//			}
//			ret.push_back(tmp);
//		}
//		return ret;
//	}
//};
//int main()
//{
//	vector<int> original{ 1,2,3};
//	int m = 1, n = 3;
//	vector<vector<int>>ret = Solution().construct2DArray(original, m, n);
//	if (ret.size() != 0)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << ret[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//}


////5890. 转换字符串的最少操作次数
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	int minimumMoves(string s) {
//		int count = 0;
//		for (int i = 0; i < (int)s.size(); )
//		{
//			if (s[i] == 'X')
//			{
//				count++;
//				for (int j = 0; j < 3 && i < (int)s.size(); j++)
//				{
//					s[i] = '0';
//					i++;
//				}
//			}
//			else
//				i++;
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	string s{ "XXOX" };
//	cout << Solution().minimumMoves(s) << endl;
//	return 0;
//}
//

////5891. 找出缺失的观测数据
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
//
//		vector<int> ret;
//		int size = rolls.size();
//		int sum = 0;
//		for (int i = 0; i < size; i++)
//		{
//			sum += rolls[i];
//		}
//		int diff = mean * (n + size) - sum;
//
//		//不满足条件跳出
//		if (diff / (n*1.0) > 6 || diff / (n*1.0) < 1)
//			return ret;
//
//		for (int i = 0; i < n; i++)
//		{
//			ret.push_back(diff / n);
//		}
//		if (diff%n != 0)
//		{
//			for (int i = 0; i < diff - (diff / n)*n;)
//			{
//				if (ret[i] + 1 <= 6)
//				{
//					ret[i] ++;
//					i++;
//				}
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> roalls{ 4,5,6,2,3,6,5,4,6,4,5,1,6,3,1,4,5,5,3,2,3,5,3,2,1,5,4,3,5,1,5 };
//	int mean = 4;
//	int n = 40;
//	vector<int> ret = Solution().missingRolls(roalls, mean, n);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
////class Solution {
////public:
////	int hammingWeight(uint32_t n) {
////		int count = 0;
////		while (n)
////		{
////			count += n & 1;
////			n >>= 1;
////		}
////		return count;
////	}
////};
//
//class Solution {
//public:
//	int hammingWeight(uint32_t n) {
//		int count = 0;
//		//每次去掉一个1
//		while (n)
//		{
//			count++;
//			n &= (n - 1);
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	unsigned int n = 10;
//	cout << Solution().hammingWeight(n) << endl;
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
//		int fast = 1, slow = 0;
//		while (fast < (int)nums.size())
//		{
//			if (nums[slow] != nums[fast])
//			{
//				nums[++slow] = nums[fast++];
//			}
//			else
//				fast++;
//		}
//		return slow + 1;
//	}
//};
//int main()
//{
//	vector<int> nums{ 1,1,2,3,4,4,5,6,6,7 };
//	int count = Solution().removeDuplicates(nums);
//	for (int i = 0; i < count; i++)
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
//	int minArray(vector<int>& numbers) {
//		int left = 0, right = numbers.size() - 1;
//		while (numbers[left] >= numbers[right])
//		{
//			int mid = left + (right - left) / 2;
//
//			//如果left right mid 三数相等
//
//			if (numbers[left] == numbers[right] && numbers[mid] == numbers[right])
//			{
//				int mini = left;
//				for (int i = left; i <= right; i++)
//				{
//					if (numbers[mini] > numbers[i])
//						mini = i;
//				}
//				return numbers[mini];
//			}
//
//			if (numbers[left] <= numbers[mid])
//			{
//				left = mid;
//			}
//			else
//			{
//				//最小数在left—mid之间
//				right = mid;
//			}
//
//			if (right - left == 1)
//				return numbers[right];
//		}
//		return numbers[left];
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,3,5 };
//	cout << Solution().minArray(nums) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	double myPow(double x, int n) {
//		double ret = 1;
//		int tmp = abs(n);
//		while (tmp)
//		{
//			if (tmp & 1)
//				ret *= x;
//			x *= x;
//			tmp /= 2;
//		}
//		if (n < 0)
//			ret = 1.0 / ret;
//		return ret;
//	}
//};
//
//int main()
//{
//	double x = 2;
//	int n = -2;
//	cout << Solution().myPow(x, n) << endl;
//	return 0;
//}

//
////剑指 Offer II 006. 排序数组中两个数字之和
//#include<iostream>
//#include<vector>
//using namespace std;
//
//////超时
////class Solution {
////public:
////	vector<int> twoSum(vector<int>& numbers, int target) {
////		vector<int> ret;
////		for (int i = 0; i < (int)numbers.size(); i++)
////		{
////			for (int j = i + 1; j < (int)numbers.size(); j++)
////			{
////				if (numbers[i] + numbers[j] == target)
////				{
////					ret.push_back(i);
////					ret.push_back(j);
////					return ret;
////				}
////				else if (numbers[i] + numbers[j] > target)
////					break;
////			}
////		}
////		return ret;
////	}
////};
//
//
//class Solution {
//public:
//	//找到返回下标，找不到返回-1
//	int Find(vector<int>& numbers, int target, int left, int right)
//	{
//		while (left <= right)
//		{
//			int mid = left + ((right - left) >> 1);
//			if (numbers[mid] > target)
//				right = mid - 1;
//			else if (numbers[mid] < target)
//				left = mid + 1;
//			else
//				return mid;
//		}
//		return -1;
//	}
//
//	vector<int> twoSum(vector<int>& numbers, int target) {
//		vector<int> ret;
//		for (int i = 0; i < (int)numbers.size() - 1; i++)
//		{
//			int left = i + 1, right = numbers.size() - 1;
//			int flag = Find(numbers, target - numbers[i], left, right);
//			if (flag != -1)
//			{
//				ret.push_back(i);
//				ret.push_back(flag);
//				break;
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 1,2,4,6,10};
//	int target = 8;
//	vector<int> ret = Solution().twoSum(nums, target);
//	for (int i = 0; i < (int)ret.size(); i++)
//	{
//		cout << ret[i] << " ";
//	}
//	return 0;
//} 


//20. 有效的括号
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
	char pairs(char a)
	{
		if (a == '{')
			return '}';
		else if (a == '(')
			return ')';
		else
			return']';
	}

	bool isValid(string s) {
		stack<char> st;
		for (int i = 0; i < (int)s.size(); i++)
		{
			if (s[i] == '{' || s[i] == '(' || s[i] == '[')
				st.push(s[i]);
			else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
			{
				if (st.empty())
					return false;
				else if (s[i] != pairs(st.top()))
					return false;
				st.pop();
			}
		}
		if (st.empty())
			return true;
		else
			return false;
	}
};

int main()
{
	string s{ "()" };
	cout << Solution().isValid(s) << endl;
	return 0;
}