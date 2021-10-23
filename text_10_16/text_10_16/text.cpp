//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void Print()
//	{
//		cout << "class A Print" << endl;
//	}
//	int _a = 1;
//
//};
//void text1()
//{
//	A a1;
//}
//
//void text2()
//{
//	A a2;
//}
//
//void Fun()
//{
//	int* p1 = new int;
//	const char* p2 = "hello";//常量字符串
//	A a;
//	printf("虚函数表地址%p\n", *(int*)&a);
//	printf("栈变量地址%p\n", &a);
//	printf("堆变量地址%p\n", p1);
//	printf("代码段常量地址%p\n", p2);
//	printf("虚函数地址%p\n", &A::Print);
//	printf("普通函数地址%p\n", text1);
//}
//int main()
//{
//	//text1();
//	//text2();
//
//	Fun();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void fun1()
//	{
//		cout << "fun1()" << endl;
//	}
//	virtual void fun2()
//	{
//		cout << "fun2()" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	virtual void fun2()
//	{
//		cout << "class b fun2(）" << endl;
//	}
//
//	virtual void fun3()
//	{
//		cout << "class b fun3()" << endl;
//	}
//	virtual void fun4()
//	{
//		cout << "class b fun4()" << endl;
//	}
//};
//typedef void(*VFTable)();
//
//void Print(VFTable* p)
//{
//	for (int i = 0; p[i] != NULL; i++)
//	{
//		printf("p[%d]%p->", i, p[i]);
//		VFTable tmp = p[i];
//		tmp();
//	}
//}
//
//void fun()
//{
//	A a;
//	B b;
//	printf("A\n");
//	Print((VFTable*)*(int*)&a);
//	printf("B\n");
//	Print((VFTable*)*(int*)&b);
//}
//
//int main()
//{
//	fun();
//	return 0;
//}


////多继承打印虚函数表
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void fun1()
//	{
//		cout << "class A fun1()" << endl;
//	}
//};
//
//class B
//{
//public:
//	virtual void fun2()
//	{
//		cout << "class B fun2()" << endl;
//	}
//};
//
//class C :public A, public B
//{
//public:
//	virtual void fun3()
//	{
//		cout << "class C fun3()" << endl;
//	}
//	virtual void fun4()
//	{
//		cout << "class C fun4()" << endl;
//	}
//};
//
//
//typedef void(*VF)();
//
//void PrintVFTable(VF* p)
//{
//	for (int i = 0; p[i] != NULL; i++)
//	{
//		printf("p[%d]:%p", i, p[i]);
//		VF tmp = p[i];
//		tmp();
//	}
//}
//
//void text1()
//{
//	class C c;
//	//class A a;
//	//PrintVFTable((VF*)*(int*)&a);
//	printf("A\n");
//	PrintVFTable((VF*)*(int*)&c);
//	printf("B\n");
//	PrintVFTable((VF*)*(int*)((char*)&c + sizeof(A)));
//}
//int main()
//{
//	text1();
//	return 0;
//}


//#include<iostream>
//using  namespace std;
//class A
//{
//public:
//	virtual void fun1()
//	{
//		cout << "A fun1()" << endl;
//	}
//};
//
//class B:public A
//{
//public:
//	//virtual void fun1()
//	//{
//	//	cout << "B fun1()" << endl;
//	//}
//};
//
//void text()
//{
//	A a;
//	B b;
//}
//int main()
//{
//	text();
//	return 0;
//}


////1672. 最富有客户的资产总量
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int maximumWealth(vector<vector<int>>& accounts) {
//		int max = 0, sum = 0;
//		for (int i = 0; i < (int)accounts.size(); i++)
//		{
//			sum = 0;
//			for (int j = 0; j < (int)accounts[i].size(); j++)
//			{
//				sum += accounts[i][j];
//			}
//			if (sum > max)
//				max = sum;
//		}
//		return max;
//	}
//};
//
//int main()
//{
//	vector<vector<int>>nums{ {1,2,3},{3,2,1} };
//	cout << Solution().maximumWealth(nums) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void fun(int a = 1)
//	{
//		cout << "A a = " << a << endl;
//	}
//};
//
//class B:public virtual A
//{
//public:
//	virtual void fun(int a = 2)
//	{
//		cout << "B a = " << a << endl;
//	}
//};
//
//int main()
//{
//	A a;
//	a.fun();
//	A* c = new B;
//	c->fun();
//	return 0;
//}


////5902. 检查句子中的数字是否递增
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class Solution {
//public:
//	bool areNumbersAscending(string s) {
//		vector<int> arr;
//		int sum = 0, flag = 0;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			if (s[i] >= '0' && s[i] <= '9')
//			{
//				sum = sum * 10 + s[i] - '0';
//				flag = 1;
//			}
//			else
//			{
//				if (flag == 1)
//				{
//					arr.push_back(sum);
//					sum = 0;
//					flag = 0;
//				}
//			}
//		}
//		if (flag == 1)
//			arr.push_back(sum);
//
//		for (int i = 0; i < (int)arr.size() - 1; i++)
//		{
//			if (arr[i] >= arr[i + 1])
//				return false;
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	string s("hello world 5 x 5");
//	cout << Solution().areNumbersAscending(s) << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int sumOfBeauties(vector<int>& nums) {
//		int size = nums.size();
//		vector<int> max(nums);
//		vector<int>min(nums);
//		for (int i = 1; i < (int)nums.size(); i++)
//		{
//			if (max[i] < max[i - 1])
//				max[i] = max[i - 1];
//		}
//
//		for (int i = nums.size() - 2; i >= 0; i--)
//		{
//			if (min[i] > min[i + 1])
//				min[i] = min[i + 1];
//		}
//
//		int sum = 0;
//		for (int i = 1; i < (int)nums.size() - 1; i++)
//		{
//			if (nums[i] > max[i - 1] && nums[i] < min[i + 1])
//				sum += 2;
//			else if (nums[i] > nums[i - 1] && nums[i + 1] > nums[i])
//				sum += 1;
//		}
//		return sum;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 6,7,7,9,3,9,3,4,4,1 };
//	cout << Solution().sumOfBeauties(nums) << endl;
//	return 0;
//}


////453. 最小操作次数使数组元素相等
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int minMoves(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		int count = 0;
//		for (int i = 1; i < (int)nums.size(); i++)
//		{
//			count += nums[i] - nums[0];
//		}
//		return count;
//	}
//};
//int main()
//{
//	vector<int> nums{ 1,2,3 };
//	cout << Solution().minMoves(nums) << endl;
//	return 0;
//}

////剑指 Offer 64. 求1+2+…+n
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Count
//{
//public:
//	Count()
//	{
//		_n += 1;
//		_sum += _n;
//	}
//	int GetSum()
//	{
//		return _sum;
//	}
//	void SumInit()
//	{
//		_sum = 0;
//		_n = 0;
//	}
//private:
//	static unsigned _sum;
//	static unsigned _n;
//};
//
//unsigned Count::_n = 0;
//unsigned Count::_sum = 0;
//
//
//class Solution {
//public:
//	int sumNums(int n) {
//
//		Count* p = new Count[n];
//		int sum = p->GetSum();
//		p->SumInit();
//		return sum;
//	}
//};
//
//int main()
//{
//	int n = 2;
//	cout << Solution().sumNums(n) << endl;
//}


////面试题 17.01. 不用加号的加法
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int add(int a, int b)
//	{
//		int sum = 0, carry = 0;
//		do
//		{
//			//相加不进位
//			sum = a ^ b;
//			//求进位
//			carry = (unsigned)(a & b) << 1;
//			//相加--》也就是继续循环
//			a = sum;
//			b = carry;
//		} while (b);
//		return sum;
//	}
//};
//
//int main()
//{
//	int a = -10, b = 20;
//	cout << Solution().add(a, b) << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums)
//	{
//		int sum = 0;
//		int max = nums[0];
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			sum += nums[i];
//			if (sum > max)
//				max = sum;
//			if (sum < 0)
//				sum = 0;
//		}
//		return max;
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
//using namespace std;
//
//int  main()
//{
//	int n = -1;
//	int count = 0;
//	while (n)
//	{
//		n &= (n - 1);
//		count++;
//	}
//	cout << count << endl;
//	return 0;
//}


//#include <iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	string nums;
//	cin >> nums;
//	vector<int>flag(26, 0);
//	int i = 0;
//	for (i = 0; i < (int)nums.size(); i++)
//	{
//		flag[nums[i] - 'a']++;
//	}
//
//	int maxi = 0;
//	for (i = 0; i < (int)flag.size(); i++)
//	{
//		if (flag[maxi] < flag[i])
//		{
//			maxi = i;
//		}
//	}
//	printf("%c\n%d", 'a' + maxi, flag[maxi]);
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string nums("abcdefghijklmno");
//	reverse(nums.begin(), nums.end());
//	for (int i = 0; i < nums.size(); i++)
//	{
//		for (int j = 0; j < nums.size() - i - 1; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				char tmp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j + 1] = tmp;
//			}
//		}
//	}
//	cout << nums << endl;
//	return 0;
//}

//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string nums;
//	cin >> nums;
//	int count = 0;
//	for (int i = 0; i < (int)nums.size() - 1; i++)
//	{
//		for (int j = 0; j < (int)nums.size() - 1 - i; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				char tmp = nums[j + 1];
//				nums[j + 1] = nums[j];
//				nums[j] = tmp;
//				count++;
//			}
//		}
//	}
//	cout << count << endl;
//	cout << nums << endl;
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> majorityElement(vector<int>& nums)
//	{
//		vector<int> ret;
//		sort(nums.begin(), nums.end());
//		int left = 0, right = 0;
//		while (right < (int)nums.size())
//		{
//			if (nums[left] == nums[right])
//				right++;
//			else
//			{
//				if ((right - left) > (int)nums.size() / 3)
//					ret.push_back(nums[left]);
//				left = right;
//				right++;
//			}
//		}
//		if ((right - left) > (int)nums.size() / 3)
//			ret.push_back(nums[left]);
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 3,2,3 };
//	vector<int> ret = Solution().majorityElement(nums);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}


////66. 加一
//#include<iostream>
//#include<vector>
//using namespace std;
//
////class Solution {
////public:
////	vector<int> plusOne(vector<int>& digits)
////	{
////		int sum = 0;
////		for (int i = 0; i < (int)digits.size(); i++)
////		{
////			sum = sum * 10 + digits[i];
////		}
////		sum += 1;
////		vector<int> ret;
////		while (sum)
////		{
////			ret.push_back(sum % 10);
////			sum /= 10;
////		}
////		reverse(ret.begin(), ret.end());
////		return ret;
////	}
////};
//
//
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits)
//	{
//		vector<int> ret;
//		int cur = digits.size() - 1;
//		int flag = 0;//进位
//		digits[cur] += 1;
//		while (cur >= 0)
//		{
//			int sum = digits[cur] + flag;
//			if (sum > 9)
//			{
//				ret.push_back(sum - 10);
//				flag = 1;
//			}
//			else
//			{
//				ret.push_back(sum);
//				flag = 0;
//			}
//			cur--;
//		}
//		if (flag == 1)
//			ret.push_back(1);
//		reverse(ret.begin(), ret.end());
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,2,3 };
//	vector<int> ret = Solution().plusOne(nums);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}


//476. 数字的补数
#include<iostream>

using namespace std;

class Solution {
public:
	int findComplement(int num)
	{
		int count = 0;
		int tmp = num;
		while (tmp)
		{
			count++;
			tmp >>= 1;
		}
		int flag = 0;
		for (int i = 0; i < count; i++)
		{
			flag <<= 1;
			flag += 1;
		}
		return (~num)&flag;
	}
};
int main()
{
	int nums = 20;
	cout << Solution().findComplement(nums) << endl;
	return 0;
}