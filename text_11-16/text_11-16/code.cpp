//#include<iostream>
//#include<stack>
//#include<vector>
//#include<ctime>
//using namespace std;
//void QuickSort(vector<int>& nums)
//{
//	stack<pair<int,int>> s;
//	s.push(make_pair(0, nums.size() - 1));
//	int left, right;
//	while (!s.empty())
//	{
//		left = s.top().first;
//		right = s.top().second;
//		s.pop();
//
//		int prev = left - 1;
//		int cur = left;
//		int key = nums[left];
//		while (cur <= right)
//		{
//			if (key > nums[cur])
//			{
//				prev++;
//				swap(nums[cur], nums[prev]);
//			}
//			cur++;
//		}
//		nums[++prev] = key;
//		if (left < prev - 1)
//		{
//			s.push(make_pair(left, prev - 1));
//		}
//
//		if (prev + 1 < right)
//		{
//			s.push(make_pair(prev + 1, right));
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	vector<int> nums{ 10,6,3,9,1,3,7,2 };
//	int n = 100000;
//	for (int i = 0; i < n; i++)
//	{
//		nums.push_back(rand());
//	}
//	QuickSort(nums);
//	for (auto e : nums)
//		cout << e << " ";
//	return 0;
//}