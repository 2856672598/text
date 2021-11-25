#include"hashTable.h"

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

	cout << table.find(589)->_val << endl;
	table.erase(569);

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

}
int main()
{
	//text1();
	//text2();
	text3();
	return 0;
}