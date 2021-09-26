//#include<iostream>
//#include<queue>
//#include<stack>
//using namespace std;
//
//void text1()
//{
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//
//	while (!q.empty())
//	{
//		cout << q.front() << " ";
//		q.pop();
//	}
//	cout << endl;
//}
//
//void text2()
//{
//	stack<int> s;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//
//	while (!s.empty())
//	{
//		cout << s.top() << " ";
//		s.pop();
//	}
//}
//
//int main()
//{
//	//text1();
//
//	text2();
//	return 0;
//}


////剑指 Offer 56 - I. 数组中数字出现的次数
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int> singleNumbers(vector<int>& nums)
//	{
//		size_t size = nums.size();
//		int tmp = 0;
//		for (int i = 0; i < (int)size; i++)
//		{
//			tmp ^= nums[i];
//		}
//		unsigned int flag = 1;
//		while (tmp)
//		{
//			if (tmp & flag)
//				break;
//			flag <<= 1;
//		}
//
//		vector<int> ret{ 0,0 };
//
//		for (int i = 0; i < (int)size; i++)
//		{
//			if (nums[i] & flag)
//				ret[0] ^= nums[i];
//			else
//				ret[1] ^= nums[i];
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 4,1,4,6 };
//	vector<int> ret = Solution().singleNumbers(nums);
//	for (auto e : ret)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}

////155. 最小栈
//#include<iostream>
//#include<stack>
//using namespace std;
//class MinStack
//{
//public:
//	MinStack()
//	{
//		//自定义类型会调用它的构造函数
//	}
//
//	void push(int val)
//	{
//		if (min_st.empty() || val <= min_st.top())
//		{
//			min_st.push(val);
//		}
//		st.push(val);
//	}
//
//	void pop()
//	{
//		if (st.top() == min_st.top())
//			min_st.pop();
//		st.pop();
//	}
//
//	int top()
//	{
//		return st.top();
//	}
//
//	int getMin()
//	{
//		return min_st.top();
//	}
//private:
//	stack<int> st;
//	stack<int> min_st;
//};


////JZ21 栈的压入、弹出序列
//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
//class Solution
//{
//public:
//	bool IsPopOrder(vector<int> pushV, vector<int> popV)
//	{
//		int pushi = 0, popi = 0;
//		stack<int> cur;
//		//[1,2,3,4,5],[4,5,3,2,1]
//		while (pushi < (int)pushV.size())
//		{
//			cur.push(pushV[pushi++]);
//			//判断pop数组和栈中数据判断是否相等
//			while (!cur.empty() && cur.top() == popV[popi])
//			{
//				cur.pop();
//				popi++;
//			}
//		}
//
//		if (!cur.empty())
//			return false;
//		return true;
//	}
//};
//
//int main()
//{
//	vector<int>push{ 1,2,3,4,5 };
//	vector<int>pop{ 4,5,3,2,1 };
//	cout << Solution().IsPopOrder(push, pop) << endl;
//	return 0;
//}

////150. 逆波兰表达式求值
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	int evalRPN(vector<string>& tokens)
//	{
//		stack<int> ret;
//		for (int i = 0; i < (int)tokens.size(); i++)
//		{
//			string token = tokens[i];
//			if (isNumber(token))
//			{
//				ret.push(stoi(token));
//			}
//			else
//			{
//				int x = ret.top();//右操作数
//				ret.pop();
//				int y = ret.top();//左操作数
//				ret.pop();
//				switch (token[0])
//				{
//				case '+':
//						ret.push(x + y);
//						break;
//				case '-':
//					ret.push(y - x);
//					break;
//				case '*':
//					ret.push(x*y);
//					break;
//				case '/':
//					ret.push(y / x);
//					break;
//				}
//			}
//		}
//		return ret.top();
//	}
//	bool isNumber(string token)
//	{
//		return !(token == "+" || token == "-" || token == "*" || token == "/");
//	}
//};
//
//int main()
//{
//	vector<string> tokens{ "2","1","+","3","*" };
//	cout << Solution().evalRPN(tokens) << endl;
//	return 0;
//}


////232. 用栈实现队列
//#include<iostream>
//#include<stack>
//using namespace std;
//
//class MyQueue
//{
//public:
//	MyQueue()
//	{
//
//	}
//
//	void push(int x)
//	{
//		st1.push(x);
//	}
//
//	int pop()
//	{
//		if (st2.empty())
//		{
//			while (!st1.empty())
//			{
//				st2.push(st1.top());
//				st1.pop();
//			}
//		}
//		int tmp = st2.top();
//		st2.pop();
//		return tmp;
//	}
//
//	int peek()
//	{
//		if (st2.empty())
//		{
//			while (!st1.empty())
//			{
//				st2.push(st1.top());
//				st1.pop();
//			}
//		}
//		return st2.top();
//	}
//
//	bool empty()
//	{
//		return(st1.empty() && st2.empty());
//	}
//private:
//	stack<int> st1;
//	stack<int> st2;
//};

////1365. 有多少小于当前数字的数字
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution
//{
//public:
//	vector<int> smallerNumbersThanCurrent(vector<int>& nums)
//	{
//		vector<int>order(nums);
//		sort(order.begin(), order.end());
//
//		vector<int>::iterator it = order.begin();
//		vector<int> ret;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			ret.push_back(find(order.begin(), order.end(), nums[i]) - it);
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 8,1,2,2,3 };
//
//	vector<int> ret = Solution().smallerNumbersThanCurrent(nums);
//	for (auto e : ret)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}


////剑指 Offer II 003. 前 n 个数字二进制中 1 的个数
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int> countBits(int n)
//	{
//		vector<int> ret;
//		int count = 0;
//		for (int i = 0; i <= n; i++)
//		{
//			count = 0;
//			unsigned tmp = i;
//			while (tmp)
//			{
//				if (tmp & 1)
//					count++;
//				tmp >>= 1;
//			}
//			ret.push_back(count);
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	int n = 10;
//	vector<int>ret = Solution().countBits(n);
//	for (auto e : ret)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}

////剑指 Offer II 004. 只出现一次的数字 
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int singleNumber(vector<int>& nums)
//	{
//		int arr[32] = { 0 };
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			unsigned int tmp = nums[i];
//			int j = 0;
//			while (tmp)
//			{
//				if (tmp & 1)
//					arr[j]++;
//				tmp >>= 1;
//				j++;
//			}
//		}
//		int ret = 0;
//		for (int i = 0; i < 32; i++)
//		{
//			if (arr[i] % 3 != 0)
//				ret += 1<< i;
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 0,1,0,1,0,1,100,100,100,98 };
//	cout << Solution().singleNumber(nums) << endl;
//	return 0;
//}


////102. 二叉树的层序遍历
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
//class Solution
//{
//public:
//	vector<vector<int>> levelOrder(TreeNode* root)
//	{
//		vector<vector<int>>vv;
//
//		queue<TreeNode*> q;
//		int size = 0;
//		if (root)
//		{
//			q.push(root);
//			size = 1;
//		}
//		while (!q.empty())
//		{
//			vector<int>v;
//			for (int i = 0; i < size; i++)
//			{
//				TreeNode* cur = q.front();
//				v.push_back(cur->val);
//				q.pop();
//
//				if (cur->left)
//					q.push(cur->left);
//				if (cur->right)
//					q.push(cur->right);
//			}
//			//当上一层的数据全部出队列后，队列中的数据就是下一层的数据个数
//			size = q.size();
//			vv.push_back(v);
//		}
//		return vv;
//	}
//};


