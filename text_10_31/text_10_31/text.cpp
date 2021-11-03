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


//
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> nums{ 1,2,2,3,3,4,5,5,6 };
//	int fast = 1, slow = 0;
//	while (fast < (int)nums.size())
//	{
//		if (nums[fast] != nums[slow])
//		{
//			nums[++slow] = nums[fast];
//		}
//		fast++;
//	}
//	//
//	if (fast != slow)
//		slow++;
//
//	for (int i = 0; i < slow; i++)
//	{
//		cout << nums[i] << " ";
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	long long sum = 0;
//	long long cur = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		cur *= i;
//		sum += cur;
//	}
//	cout << sum << endl;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	int arr[4] = { 0 };
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z')
//			arr[0]++;
//		else if (ch >= '0'&&ch <= '9')
//			arr[1]++;
//		else if (ch == ' ')
//			arr[2]++;
//		else
//			arr[3]++;
//	}
//	printf("%d\n%d\n%d\n%d\n", arr[0], arr[2], arr[1], arr[3]);
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int max = 0;
//	int maxi, maxj;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			if (abs(tmp) > max)
//			{
//				maxi = i;
//				maxj = j;
//				max = abs(tmp);
//			}
//		}
//	}
//	cout << max << " " << maxi + 1 << " " << maxj + 1 << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int sum = 1;
//	for (int i = 1; i < n; i++)
//	{
//		sum = (sum + 1) * 2;
//	}
//	cout << sum << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	vector<int> nums;
//	for (int i = 0; i < 10; i++)
//	{
//		int tmp = 0;
//		cin >> tmp;
//		nums.push_back(tmp);
//	}
//	sort(nums.begin(), nums.end());
//	for (auto e : nums)
//		cout << e << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<vector<int>>nums;
//	for (int i = 0; i < 3; i++)
//	{
//		vector<int> flag;
//		for (int j = 0; j < 3; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			flag.push_back(tmp);
//		}
//		nums.push_back(flag);
//	}
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (i == j)
//			{
//				sum1 += nums[i][j];
//			}
//		}
//	}
//	sum2 = nums[0][2] + nums[1][1] + nums[2][0];
//	cout << sum1 << " " << sum2 << endl;
//	return 0;
//}


//#include<iostream>
//#include<set>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	set<int> s;
//	int m = 0;
//	cin >> m;
//	vector<int> v;
//	for (int i = 0; i < m; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		v.push_back(tmp);
//	}
//	for (auto e : v)
//	{
//		s.insert(e);
//	}
//	cout << s.size() << endl;
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}



//#include<iostream>
//
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	return 0;
//}


//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	const int n = 15;
//	const int m = 2 * n - 1;
//	int arr[n + 1][m] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		arr[i][n - i - 1] = 1;
//		arr[i][n + i - 1] = 1;
//
//	}
//	for (int i = 2; i < n; i++)
//	{
//		for (int j = n - i + 1; j < n - 2 + i; j = j + 2)
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int year, month, day;
//
//	while ((scanf("%d/%d/%d", &year, &month, &day)) != EOF)
//	{
//		//判断闰年
//		int flag = 0;
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			year = 1;
//		}
//		int arr[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//		int count = 0;
//		for (int i = 1; i < month; i++)
//		{
//			if (flag == 1 && i == 2)
//			{
//				count += 29;
//			}
//			else
//				count += arr[i];
//		}
//		count += day;
//		cout << count << endl;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int max = 0;
//		int small = 1000;
//		double sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			int tmp = 0;
//			scanf("%d", &tmp);
//			sum += tmp;
//			if (tmp > max)
//				max = tmp;
//			if (tmp < small)
//				small = tmp;
//		}
//		sum = sum - max - small;
//		printf("%.2lf\n", sum / (n - 2));
//	}
//	return 0;
//}

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> nums;
	for (int i = 0; i < 10; i++)
	{
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				int tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
			}
		}
	}
	for (auto e : nums)
	{
		cout << e << " ";
	}
	return 0;
}