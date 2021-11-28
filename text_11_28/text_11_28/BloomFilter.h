#pragma once
#include<iostream>
#include"bitset.h"
using namespace std;

namespace Solution
{
	struct keyToInt1
	{
		size_t operator()(const string& key)
		{
			size_t count = 0;
			for (size_t i = 0; i < key.size(); i++)
			{
				count = count * 131 + key[i];
			}
			return count;
		}
	};

	struct keyToInt2
	{
		size_t operator()(const string& key)
		{
			size_t count = 0;
			for (size_t i = 0; i < key.size(); i++)
			{
				count = 65599 * count + key[i];
			}
			return count;
		}
	};

	struct keyToInt3
	{
		size_t operator()(const string& key)
		{
			size_t count = 0;
			size_t magic = 63689;
			for (size_t i = 0; i < key.size(); i++)
			{
				count = count * magic + key[i];
				magic *= 378551;
			}
			return count;
		}
	};
	template<class K,class KtoInt1=keyToInt1, class KtoInt2 = keyToInt2,
		class KtoInt3 = keyToInt3>
	class BloomFilter
	{
	public:
		BloomFilter(size_t size = 0)
			:_bmp(5 * size)
			,_size(0)
		{}

		void insert(const K& key)
		{
			size_t index1 = KtoInt1()(key) % _bmp.size();
			size_t index2 = KtoInt2()(key) % _bmp.size();
			size_t index3 = KtoInt3()(key) % _bmp.size();

			_bmp.set(index1);
			_bmp.set(index2);
			_bmp.set(index3);
			_size++;
		}
		size_t size()
		{
			return _bmp.size();
		}

		bool test(const size_t pos)
		{
			return _bmp.test(pos);
		}
	private:
		wkn::bitset _bmp;
		size_t _size;
	};
}