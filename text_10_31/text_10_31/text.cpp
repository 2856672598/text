#include<iostream>
#include<string>
#include<set>
#include<map>
#include<vector>
using namespace std;
void text_set()
{
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(2);
	s.insert(4);

	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;
}

//方法一：
void text_map()
{
	map<string, int> m;
	vector<string> flag = { "西瓜","香蕉","樱桃","苹果","西瓜","香蕉" };
	for (auto e : flag)
	{
		map<string, int>::iterator pos = m.find(e);
		if (pos != m.end())
		{
			//树中存在
			pos->second++;
		}
		else
		{
			//加入树中
			//m.insert(pair<string, int>(e, 1));
			m.insert(make_pair(e, 1));
		}
	}

	for (auto e : m)
		cout << e.first << " " << e.second << endl;
}

//方法二：
void text_map1()
{
	map<string, int>m;
	vector<string> flag = { "西瓜","香蕉","樱桃","苹果","西瓜","香蕉" };

	for (auto e : flag)
	{
		//如果树中存在e，则会返回e的引用，否则添加到树中并返回e的引用
		m[e]++;
	}

	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void text_map3()
{
	map<string, string> m;
	m.insert(make_pair("string", "字符串"));
	m.insert(make_pair("sort", "排序"));

	m["张三"];//插入数据
	m["王五"] = "wangwu";//插入并修改数据
	m["张三"] = "王者";//修改数据
	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void text_multiset()
{
	multiset<int>mu;
	mu.insert(1);
	mu.insert(3);
	mu.insert(2);
	mu.insert(3);
	mu.insert(1);

	for (auto e : mu)
	{
		cout << e << " ";
	}
}

int main()
{
	//text_set();
	//text_map();

	//text_map1();
	//text_map3();

	text_multiset();
	return 0;
}

