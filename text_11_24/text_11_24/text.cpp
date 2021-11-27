#include"hashTable.h"
#include"unordered_map.h"
#include"unordered_set.h"
void text1()
{
	HashTable<int, int> h;
	h.Insert(100);
	h.Insert(1);
	h.Insert(13);
	h.Insert(16);
	h.Insert(51);
	h.Insert(48);
	h.Insert(234);
	h.Insert(90);
	h.Insert(12);
	h.Insert(12);

}

template<class T>
struct Keyoft
{
	const T& operator()(const T& val)
	{
		return val;
	}
};
void text2()
{
	openTable::HashTable<int, int, Keyoft<int>> table;
	table.insert(1);
	table.insert(14);
	table.insert(19);
	table.insert(46);
	table.insert(569);
	table.insert(599);
	table.insert(59);
	table.insert(589);

	//cout << table.find(589)->_val << endl;
	cout << table.find(589)._node << endl;
	table.erase(569);
	table.clear();

}

template<class T, class V>
struct MapKeyoft
{
	const T& operator()(const pair<T, V>& val)
	{
		return val.first;
	}
};

void text3()
{
	openTable::HashTable<int, pair<int, string>, MapKeyoft<int, string>> table;
	table.insert(make_pair(1, "hello"));
	table.insert(make_pair(2, "wordle"));
	table.clear();
}

void text4()
{
	openTable::HashTable<string, string, Keyoft<string>> table;
	table.insert("hello");
	table.insert("hellq");
	table.insert("abc");
	table.clear();

}

template<class V>
struct _Hash
{
	size_t operator()(const V val)
	{
		return val;
	}
};

//模板特化
template<>
struct _Hash<string>
{
	size_t operator()(const string& val)
	{
		size_t count = 0;
		for (int i = 0; i < (int)val.size(); i++)
		{
			count += val[i];
		}
		return count;
	}
};

void text5()
{
	wkn1::unordered_set<int>ht;
	ht.insert(10);
	ht.insert(19);
	ht.insert(1021);

}

void text6_map()
{
	wkn2::unordered_map<string, string>ht;
	ht.insert(make_pair("sort", "排序"));
	ht.insert(make_pair("left", "左面"));
	ht.insert(make_pair("right", "右面"));

	ht["apple"] = "苹果";
	auto it = ht.begin();
	while (it != ht.end())
	{
		cout << (*it).first << ":" << (*it).second << endl;

		++it;
	}
	cout << ht.find("right")._node->_val.second << endl;
	ht.clear();

}

int main()
{
	//text1();
	//text2();
	//text3();
	//text4();

	//text5();
	text6_map();
	return 0;
}