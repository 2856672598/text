#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
enum state
{
	DELETE,
	EMPTY,
	EXIST
};

template<class T>
struct hashNode
{
	state _state;
	T _val;
	hashNode(const T& val = 0)
		:_val(val)
		, _state(EMPTY)
	{}
};

template<class K, class T>
class HashTable
{
public:
	typedef hashNode<T> hashNode;

	bool Insert(const T& val)
	{
		if (_table.size() == 0 || _size * 1.0 / _table.size() > 0.7)
		{
			//扩容
			size_t newsize = _table.size() == 0 ? 10 : 2 * _table.size();
			vector<hashNode> newtable;
			newtable.resize(newsize);

			//进行拷贝
			for (int i = 0; i < (int)_table.size(); i++)
			{
				if (_table[i]._state == EXIST)
				{
					//说明此处存在
					size_t index = _table[i]._val % newsize;
					//找位置
					while (newtable[index]._state == EXIST)
					{
						index++;
						if (index == newsize)
							index = 0;
					}
					newtable[index]._val = _table[i]._val;
					newtable[index]._state = EXIST;
				}
			}
			swap(_table, newtable);
		}

		size_t index = val % _table.size();
		while (_table[index]._state == EXIST)
		{
			index++;
			if (index == _table.size())
				index = 0;
		}
		_table[index]._val = val;
		_table[index]._state = EXIST;
		_size++;
		return true;
	}
private:
	vector<hashNode> _table;
	size_t _size;//表中元素的个数
};

namespace openTable
{
	template<class T>
	struct hashNode
	{
		T _val;
		hashNode<T>* next;

		hashNode(const T& val)
			:_val(val)
			, next(nullptr)
		{};
	};

	template<class T>
	struct _Hash
	{
		const T& operator()(const T& val)
		{
			return val;
		}
	};

	//模板的特化
	template<>
	struct _Hash<string>
	{
		//字符串转数字算法-->
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

	template<class K, class T, class KeyofT, class Hash = _Hash<K>>
	class HashTable;

	template<class K, class T, class Keyoft, class Hash = _Hash<K>>
	struct HashIterator
	{
		typedef hashNode<T> Node;
		typedef HashTable<K, T, Keyoft, Hash> HT;//为了获取下一个哈希桶
		typedef HashIterator<K, T, Keyoft, Hash> Self;
		Node* _node;
		HT* _pht;

		HashIterator(Node* node, HashTable<K, T, Keyoft, Hash>* ht)
			:_node(node)
			, _pht(ht)
		{}

		Self& operator++()
		{
			Node* cur = _node;
			if (cur->next)
			{
				_node = cur->next;
				return *this;
			}
			else
			{
				Keyoft kot;
				Hash hash;
				size_t i = hash(kot(_node->_val)) % _pht->_table.size();
				++i;
				for (; i < _pht->_table.size(); i++)
				{
					cur = _pht->_table[i];
					if (cur)
					{
						_node = cur;
						return *this;
					}
				}
				_node = nullptr;
			}
			return *this;
		}

		bool operator!=(const Self& self)
		{
			return _node != self._node;
		}

		T& operator*()
		{
			return _node->_val;
		}
		T* operator->()
		{
			return &_node->_val;
		}
	};

	//template<class K, class T, class KeyofT, class Hash>

	template<class K, class T, class KeyofT, class Hash = _Hash<K>>
	class HashTable
	{
		friend 	struct HashIterator<K, T, KeyofT, Hash>;
	public:
		typedef hashNode<T> Node;
		typedef HashIterator<K, T, KeyofT, Hash> iterator;
		KeyofT kot;
		Hash hash;

		~HashTable()
		{
			clear();
			//内置类型自动调用析构函数
		}

		iterator begin()
		{
			for (size_t i = 0; i < _table.size(); i++)
			{
				if (_table[i])
				{
					return iterator(_table[i], this);
				}
			}
			return iterator(nullptr, this);
		}

		iterator end()
		{
			return iterator(nullptr,this);
		}

		const K& operator[](const K& k)
		{
			return insert(make_pair(k, T())).second;
		}

		pair<iterator, bool> insert(const T& val)
		{
			if (_size == _table.size())
			{
				//需要增容
				vector<Node*>newtable;
				size_t newsize = _table.size() == 0 ? 4 : 2 * _table.size();
				newtable.resize(newsize);
				//将原来表中的数据转移到新表
				int index = 0;
				for (int i = 0; i < (int)_table.size(); i++)
				{
					Node* cur = _table[i];
					while (cur)
					{
						Node* next = cur->next;
						index = hash(kot(cur->_val)) % newtable.size();
						cur->next = newtable[index];
						newtable[index] = cur;
						cur = next;
					}
				}
				swap(_table, newtable);
			}

			int index = hash(kot(val)) % _table.size();
			Node* newnode = new Node(val);
			Node* cur = _table[index];
			//查看val是否已经存在
			while (cur)
			{
				if (kot(cur->_val) == kot(val))
				{
					return make_pair(iterator(cur, this), false);
				}
				cur = cur->next;
			}
			newnode->next = _table[index];
			_table[index] = newnode;
			_size++;

			return make_pair(iterator(newnode,this), true);
		}

		iterator find(const K& val)
		{
			size_t index = hash(val) % _table.size();

			Node* cur = _table[index];
			while (cur)
			{
				if (hash(kot(cur->_val)) == hash(val))
					return iterator(cur, this);
				cur = cur->next;
			}
			return iterator(nullptr, this);
		}

		bool erase(const K& val)
		{
			size_t index = hash(kot(val)) % _table.size();
			Node* prev = nullptr;
			Node* cur = _table[index];
			while (cur)
			{
				if (hash(kot(cur->_val)) == hash(kot(val)))
				{
					if (prev == nullptr)
					{
						_table[index] = cur->next;
					}
					else
					{
						prev->next = cur->next;
					}
					delete cur;
					return true;
				}
				prev = cur;
				cur = cur->next;
			}
			return false;
		}

		void clear()
		{
			//删除每个桶上的节点
			for (size_t i = 0; i < _table.size(); i++)
			{
				Node* cur = _table[i];
				while (cur)
				{
					Node* next = cur->next;
					delete cur;
					cur = next;
				}
				_table[i] = nullptr;
			}
		}
	private:
		size_t _size;
		vector<Node*> _table;
	};
}