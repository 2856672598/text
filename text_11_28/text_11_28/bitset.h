#pragma once
#include<iostream>
#include<vector>
using namespace std;

namespace wkn
{
	class bitset
	{
	public:
		bitset(const size_t num = 0)
			:_table(num / sizeof(int) + 1, 0)
			,_count(num)
		{}

		void set(const size_t val)
		{
			size_t index = val / 32;
			size_t pos = val % 32;
			//将下标为index，的第pos个位设置为1
			_table[index] |= (1 << (32 - pos));
		}

		void reset(const size_t val)
		{
			size_t index = val / 32;
			size_t pos = val % 32;
			//将下标为index，的第pos个位设置为0
			_table[index] &= ~(1 << (32 - pos));
		}

		bool test(const size_t val)
		{
			if (val > _count)
				return false;
			size_t index = val / 32;
			size_t pos = val % 32;
			return _table[index] & (1 << (32 - pos));
		}

		size_t count()
		{
			//int count = 0;
			//for (size_t i = 0; i < _count; i++)
			//{
			//	if (test(i))
			//		count++;
			//}
			//return count;

			int count = 0;
			size_t size = _count;
			int indext = _count / sizeof(int) + 1;
			for (int i = 0; i < indext; i++)
			{
				int tmp = _table[i];
				while (tmp)
				{
					tmp &= (tmp - 1);
					count++;
				}
			}
			return count;
		}

		size_t size()
		{
			return _count;
		}
	private:
		vector<int> _table;
		size_t _count;
	};
}