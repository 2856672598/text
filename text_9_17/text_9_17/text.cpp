//
//#include<iostream>
//#include<list>
//#include<algorithm>
//using namespace std;
//
//void print_list(const list<int> lt)
//{
//	list<int>::const_iterator it = lt.begin();
//	while (it != lt.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//}
//
//void text_list1()
//{
//	list<int> lt1;
//	lt1.push_back(1);
//	lt1.push_back(2);
//	lt1.push_back(3);
//	lt1.push_back(4);
//
//	//遍历方式
//	list<int>::iterator it = lt1.begin();
//	while (it != lt1.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//	list<int> lt2(lt1);
//
//	//范围for
//	for (auto e : lt2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//void text_list2()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//
//	//在20的前面插入40；
//	list<int>::iterator pos = find(lt.begin(), lt.end(), 20);
//	if (pos != lt.end())
//	{
//		lt.insert(pos, 40);
//		print_list(lt);
//	}
//}
//
//void text_list3()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//
//}
//
//int main()
//{
//	//text_list1();
//
//	text_list2();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution 
//{
//public:
//	int finalValueAfterOperations(vector<string>& operations)
//	{
//		int x = 0;
//		size_t size = operations.size();
//		vector<string>::iterator it = operations.begin();
//		for (size_t i = 0; i < size; i++)
//		{
//			if (find(operations[i].begin(), operations[i].end(), '+') != operations[i].end())
//			{
//				x++;
//			}
//			else
//				x--;
//		}
//		return x;
//	}
//};


////5876. 数组美丽值求和
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int sumOfBeauties(vector<int>& nums)
//	{
//		vector<int> max = nums;
//		vector<int> min = nums;
//		for (int i = 1; i < (int)nums.size(); i++)
//		{
//			if (max[i] < max[i - 1])
//				max[i] = max[i - 1];
//		}
//
//		for (int i = nums.size() - 2; i >= 0; i--)
//		{
//			if (min[i] > min[i + 1])
//			{
//				min[i] = min[i + 1];
//			}
//		}
//
//		int sum = 0;
//		for (int i = 1; i < (int)nums.size() - 1; i++)
//		{
//			if (nums[i] > max[i - 1] && nums[i] < min[i + 1])
//				sum += 2;
//			else if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1])
//				sum += 1;
//		}
//		return sum;
//	}
//};
//
//
//int main()
//{
//	vector<int> nums{ 2,4,6,4 };
//	cout << Solution().sumOfBeauties(nums) << endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//#include"list.h"
//
//int main()
//{
//	//Solution::text_list1();
//	//Solution::text_list2();
//
//	//Solution::text_list3();
//
//	Solution::text_list4();
//	return 0;
//}




#include<iostream>
using namespace std;
#include"list.h"

int main()
{
	//Solution::text_list1();

	//Solution::text_list2();

	//Solution::text_list3();

	Solution::text_list4();
	return 0;
}