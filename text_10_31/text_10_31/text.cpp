//#include<iostream>
//#include<string>
//#include<set>
//#include<map>
//#include<vector>
//using namespace std;
//void text_set()
//{
//	set<int> s;
//	s.insert(1);
//	s.insert(2);
//	s.insert(2);
//	s.insert(4);
//
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
////方法一：
//void text_map()
//{
//	map<string, int> m;
//	vector<string> flag = { "西瓜","香蕉","樱桃","苹果","西瓜","香蕉" };
//	for (auto e : flag)
//	{
//		map<string, int>::iterator pos = m.find(e);
//		if (pos != m.end())
//		{
//			//树中存在
//			pos->second++;
//		}
//		else
//		{
//			//加入树中
//			//m.insert(pair<string, int>(e, 1));
//			m.insert(make_pair(e, 1));
//		}
//	}
//
//	for (auto e : m)
//		cout << e.first << " " << e.second << endl;
//}
//
////方法二：
//void text_map1()
//{
//	map<string, int>m;
//	vector<string> flag = { "西瓜","香蕉","樱桃","苹果","西瓜","香蕉" };
//
//	for (auto e : flag)
//	{
//		//如果树中存在e，则会返回e的引用，否则添加到树中并返回e的引用
//		m[e]++;
//	}
//
//	for (auto e : m)
//	{
//		cout << e.first << " " << e.second << endl;
//	}
//}
//void text_map3()
//{
//	map<string, string> m;
//	m.insert(make_pair("string", "字符串"));
//	m.insert(make_pair("sort", "排序"));
//
//	m["张三"];//插入数据
//	m["王五"] = "wangwu";//插入并修改数据
//	m["张三"] = "王者";//修改数据
//	for (auto e : m)
//	{
//		cout << e.first << " " << e.second << endl;
//	}
//}
//void text_multiset()
//{
//	multiset<int>mu;
//	mu.insert(1);
//	mu.insert(3);
//	mu.insert(2);
//	mu.insert(3);
//	mu.insert(1);
//
//	for (auto e : mu)
//	{
//		cout << e << " ";
//	}
//}
//
//int main()
//{
//	//text_set();
//	//text_map();
//
//	//text_map1();
//	//text_map3();
//
//	text_multiset();
//	return 0;
//}
//


////692. 前K个高频单词
//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<string> topKFrequent(vector<string>& words, int k)
//	{
//		map<string, int>m;
//		//先将word入到map中进行计数和去重
//		for (auto e : words)
//		{
//			m[e]++;
//		}
//
//		//在通过multimapmap 对计数和去重后的数据 按照m的second进行排序
//		multimap<int, string, greater<int>> mm;
//
//		for (auto e : m)
//		{
//			mm.insert(make_pair(e.second, e.first));
//		}
//
//		multimap<int, string>::iterator it = mm.begin();
//		vector<string> ret;
//		while (it != mm.end())
//		{
//			if (k == 0)
//				break;
//			ret.push_back(it->second);
//			k--;
//			it++;
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	return 0;
//}

//
////2053. 数组中第 K 个独一无二的字符串
//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	string kthDistinct(vector<string>& arr, int k)
//	{
//		map<string, int> m;
//		for (auto e : arr)
//		{
//			m[e]++;
//		}
//		vector<string> flag;
//		for (auto e : arr)
//		{
//			//map中[]返回e的second对象，
//			if (m[e] == 1)
//				flag.push_back(e);
//		}
//		if (flag.size() < k)
//			return "";
//		return flag[k - 1];
//	}
//};
//
//int main()
//{
//	vector<string> arr{ "d","b","c","b","c","a" };
//	int k = 2;
//	string ret = Solution().kthDistinct(arr, k);
//	cout << ret << endl;
//	return 0;
//}



#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> nums{ 1,2,2,3,3,4,5,5,6 };
	int fast = 1, slow = 0;
	while (fast < (int)nums.size())
	{
		if (nums[fast] != nums[slow])
		{
			nums[++slow] = nums[fast];
		}
		fast++;
	}
	//
	if (fast != slow)
		slow++;

	for (int i = 0; i < slow; i++)
	{
		cout << nums[i] << " ";
	}
	return 0;
}