#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void QuickSort(vector<int>& nums)
{
	stack<int> s;
	s.push(0);
	s.push(nums.size() - 1);
	int left, right;
	while (!s.empty())
	{
		right = s.top();
		s.pop();
		left = s.top();
		s.pop();
		int prev = left - 1;
		int cur = left;
		int key = nums[left];
		while (cur<=right)
		{
			if (key > nums[cur])
			{
				prev++;
				swap(nums[cur], nums[prev]);
			}
			cur++;
		}
		nums[++prev] = key;
		if (left < prev - 1)
		{
			s.push(left);
			s.push(prev - 1);
		}

		if (prev + 1 < right)
		{
			s.push(prev + 1);
			s.push(right);
		}
	}
}

int main()
{
	vector<int> nums{ 10,6,3,9,1,3,7,2 };
	QuickSort(nums);
	for (auto e : nums)
		cout << e << " ";
	return 0;
}