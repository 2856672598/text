#include"rbtree.h"
#include"map.h"
#include"set.h"

void text1()
{
	Solution::map<int, int> m;
	m.insert(make_pair(10, 30));
	m.insert(make_pair(3, 4));
	m.insert(make_pair(5, 6));
	m.insert(make_pair(1, 2));

	Solution::map<int, int>::iterator it = m.begin();
	while (it != m.end())
	{
		cout << (*it).first << " " << (*it).second << endl;
		++it;
	}
}
void text2()
{
	Solution::set<int> s;
	s.insert(10);
	s.insert(3);
	s.insert(5);
	s.insert(9);
	s.insert(1);

	Solution::set<int>::iterator it = s.begin();
	while (it != s.end())
	{
		cout << *it << " ";
		++it;
	}
}

void text3()
{
	Solution::map<string, int>flag;
	string strs[] = { "Ïã½¶","³È×Ó","éÙ×Ó","Ïã½¶" };
	for (auto kv : strs)
	{
		flag[kv]++;
	}
	for (auto e : flag)
	{
		cout << e.first << ":" << e.second;
	}

	auto it = flag.find("Ïã½¶");
	cout << "²éÕÒ" << (*it).first << ":" << (*it).second << endl;
}

int main()
{
	//text1();
	//text2();

	text3();
	return 0;
}