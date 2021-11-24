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
	table.insert(569);
	table.insert(569);
	table.insert(569);

}
int main()
{
	text1();
	text2();
	return 0;
}