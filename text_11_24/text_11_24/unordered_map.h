#pragma once
#include"hashTable.h"
namespace wkn2
{
	template<class K,class T,class Hash = _Hash<K>>
	class unordered_map
	{
		//template<class K,class T>
		struct KeyOfT
		{
			const K& operator()(const pair<K, T>&val)
			{
				return val.first;
			}
		};

	public:
		typedef typename openTable::HashTable<K, pair<K, T>, KeyOfT, Hash>::iterator iterator;

		pair<iterator,bool> insert(const pair<K, T>& val)
		{
			return _ht.insert(val);
		}

		iterator begin()
		{
			return _ht.begin();
		}

		iterator end()
		{
			return _ht.end();
		}

		T& operator[](const K& k)
		{
			pair<iterator, bool> ret = insert(make_pair(k, T()));
			return ret.first->second;
		}

		void clear()
		{
			_ht.clear();
		}
		
		iterator find(const K& val)
		{
			return _ht.find(val);
		}
	private:
		openTable::HashTable<K, pair<K, T>, KeyOfT, Hash>_ht;
	};
};