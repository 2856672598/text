#include"bitset.h"
#include"BloomFilter.h"
void textBit()
{
	using namespace wkn;
	bitset b(100);
	b.set(45);
	b.set(40);
	b.set(0);
	b.set(99);

	for (size_t i = 0; i < b.size(); i++)
	{
		printf("[%d] = %d\n", i, b.test(i));
	}

	printf("位图中有%d个数据\n", b.count());
}

void text()
{
	Solution::BloomFilter<string> table(3);
	table.insert("left");
	table.insert("right");
	table.insert("apple");

	for (size_t i = 0; i < table.size(); i++)
	{
		printf("[%d] = %d\n", i, table.test(i));
	}
}

int main()
{
	textBit();
	text();
	return 0;
}