#pragma once
#include"rbtree.h"

namespace Solution
{
	template<class K>
	class set
	{
		struct SetKeyOfT
		{
			const K& operator()(const K&k)
			{
				return k;
			}
		};
	public:
		typedef typename RBTree<K, K, SetKeyOfT>::iterator iterator;
		pair<iterator, bool> insert(const K& k)
		{
			return _s.Insert(k);
		}     

		iterator begin()
		{
			return _s.begin();
		}

		iterator end()
		{
			return _s.end();
		}
	private:
		RBTree<K, K, SetKeyOfT> _s;
	};
}