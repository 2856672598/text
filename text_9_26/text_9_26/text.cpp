//#include<iostream>
//#include<deque>
//#include"Stack.h"
//#include"Queue.h"
//using namespace Solution;
//using std::cout;
//using std::endl;
//void text1()
//{
//	stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(4);
//
//	while (!st.empty())
//	{
//		cout << st.front() << " ";
//		st.pop();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	queue<int, std::deque<int>> q;
//	q.push(1);
//	q.push(2);
//	q.push(4);
//	q.pop();
//	while (!q.empty())
//	{
//		cout << q.front() << " ";
//		q.pop();
//	}
//	cout << endl;
//
//	text1();
//	return 0;
//}


////优先级队列
//#include<iostream>
//#include<queue>
//#include<vector>
//using std::cout;
//using std::endl;
//#include"priority_queue.h"
////using namespace std;
//
////仿函数
//class compare
//{
//public:
//	bool operator()(int x, int y)
//	{
//		return x < y;
//	}
//};
//
//void text_priority_queue()
//{
//	Solution::priority_queue<int> pq;
//	pq.push(9);
//	pq.push(5);
//	pq.push(2);
//	pq.push(10);
//	pq.push(0);
//
//
//	while (!pq.empty())
//	{
//		std::cout << pq.top() << " ";
//		pq.pop();
//	}
//	std::cout << std::endl;
//}
//
//int main()
//{
//	text_priority_queue();
//
//	compare A;
//	cout << A(3, 4) << endl;
//	return 0;
//}


////215. 数组中的第K个最大元素
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//
////class Solution
////{
////public:
////	int findKthLargest(vector<int>& nums, int k)
////	{
////		sort(nums.rbegin(), nums.rend());
////		return nums[k - 1];
////	}
////};
//
////class Solution
////{
////public:
////	int findKthLargest(vector<int>& nums, int k)
////	{
////		priority_queue<int> p(nums.begin(), nums.end());
////		for (int i = 1; i < k; i++)
////		{
////			p.pop();
////		}
////		return p.top();
////	}
////};
//
////只建立大小为K的堆
//class Solution
//{
//public:
//	int findKthLargest(vector<int>& nums, int k)
//	{
//		priority_queue<int ,vector<int>,greater<int> >p(nums.begin(), nums.begin() + k);
//
//		for (int i = k; i < (int)nums.size(); i++)
//		{
//			if (nums[i] > p.top())
//			{
//				p.pop();
//				p.push(nums[i]);
//			}
//		}
//		return p.top();//堆顶即为第k大 的元素
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 3,2,3,1,2,4,5,5,6 };
//	int k = 4;
//	cout << Solution().findKthLargest(nums, k) << endl;
//	return 0;
//}


////2016. 增量元素之间的最大差值
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution {
////public:
////	int maximumDifference(vector<int>& nums) {
////		int max = -1, sum = 0;
////		int fast = 1, slow = 0;
////		for (int i = 0; i < (int)nums.size() - 1; i++)
////		{
////			int cur = i + 1;
////			while (cur < (int)nums.size())
////			{
////				if (nums[cur] > nums[i])
////				{
////					sum = nums[cur] - nums[i];
////					if (sum > max)
////						max = sum;
////				}
////				cur++;
////			}
////		}
////		return max;
////	}
////};
//
////实际是在最大数前找最小数
//class Solution {
//public:
//	int maximumDifference(vector<int>& nums)
//	{
//		int minNum = nums[0], ret = -1;
//		for (int i = 1; i < (int)nums.size(); i++)
//		{
//			if (nums[i] > minNum)
//			{
//				ret = max(ret, (nums[i] - minNum));
//			}
//			else
//				minNum = min(minNum, nums[i]);
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 7,1,5,4 };
//	cout << Solution().maximumDifference(nums) << endl;
//	return  0;
//}


////500. 键盘行
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	vector<string> findWords(vector<string>& words)
//	{
//		vector<string>flag{ "qwertyuiop","asdfghjkl","zxcvbnm" };
//		vector<string>ret;
//		for (int i = 0; i < (int)words.size(); i++)
//		{
//
//			int tmp = 0;
//			//需要转化大小写
//			if (find(flag[0].begin(), flag[0].end(), tolower(words[i][0])) != flag[0].end())
//			{
//				for (int j = 1; j < (int)words[i].size(); j++)
//				{
//					if (find(flag[0].begin(), flag[0].end(), tolower(words[i][j])) == flag[0].end())
//					{
//						tmp = 1;
//						break;
//					}
//				}
//			}
//			else if (find(flag[1].begin(), flag[1].end(), tolower(words[i][0])) != flag[1].end())
//			{
//				for (int j = 1; j < (int)words[i].size(); j++)
//				{
//					if (find(flag[1].begin(), flag[1].end(), tolower(words[i][j])) == flag[1].end())
//					{
//						tmp = 1;
//						break;
//					}
//				}
//			}
//			else
//			{
//				for (int j = 1; j < (int)words[i].size(); j++)
//				{
//					if (find(flag[2].begin(), flag[2].end(), tolower(words[i][j])) == flag[2].end())
//					{
//						tmp = 1;
//						break;
//					}
//				}
//			}
//			if (tmp == 0)
//				ret.push_back(words[i]);
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<string> words{ "Alaska" };
//	Solution().findWords(words);
//	return 0;
//}


