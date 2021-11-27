#pragma once
#include"hashTable.h"

namespace wkn1
{

	template<class K,class Hash = _Hash<K>>
	class unordered_set
	{
		template<class K>
		struct KeyofT
		{
			const K& operator()(const K& val)
			{
				return val;
			}
		};

	public:
		typedef typename openTable::HashTable<K, K, KeyofT<K>, Hash>::iterator iterator;
		pair<iterator,bool> insert(const K& val)
		{
			return _ht.insert(val);
		}
	private:
		openTable::HashTable<K, K, KeyofT<K>, Hash>_ht;
	};
}