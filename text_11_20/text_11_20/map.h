#pragma once
#include"rbtree.h"

namespace Solution
{
	template<class K, class V>
	class map
	{
		struct MapKeyOfT
		{
			const K& operator()(const pair<const K, V>& kv)
			{
				return kv.first;
			}
		};

	public:
		typedef typename RBTree<K, pair<K, V>, MapKeyOfT>::iterator iterator;

		pair<iterator, bool> insert(const pair<K, V>& val)
		{
			return _m.Insert(val);
		}

		iterator begin()
		{
			return _m.begin();
		}

		iterator end()
		{
			return _m.end();
		}

		V& operator[](const K&key)
		{
			pair<iterator, bool> flag = _m.Insert(make_pair(key, V()));
			return flag.first->second;
		}
		iterator find(const K& key)
		{
			return _m.find(key);
		}
	private:
		RBTree<K, pair<K, V>, MapKeyOfT> _m;
	};
}