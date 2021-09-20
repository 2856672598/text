//#include<iostream>
//
//namespace Solution
//{
//	template<class T>
//	struct _list_Node
//	{
//		_list_Node<T>* _next;
//		_list_Node<T>* _prev;
//		T _date;
//
//		//节点的构造函数
//		_list_Node(const T& x = T())
//			:_next(nullptr)
//			, _prev(nullptr)
//			, _date(x)
//		{}
//	};
//
//	//迭代器
//	template<class T>
//	struct _list_iterator
//	{
//		typedef _list_Node<T>  Node;
//		Node* _node;
//
//		_list_iterator(Node* node)
//			:_node(node)
//		{}
//
//		T& operator*()
//		{
//			return _node->_date;
//		}
//
//		_list_iterator<T>& operator++()
//		{
//			_node = _node->_next;
//			return *this;
//		}
//
//		//后置++
//		_list_iterator<T> operator++(int)
//		{
//			_list_iterator<T> tmp(*this);
//			_node = _node->_next;
//			return tmp;
//		}
//
//		_list_iterator<T>& operator--()
//		{
//			_node = _node->_prev;
//			return *this;
//		}
//
//		//it != lt.end();
//		bool operator!=(_list_iterator<T> it)
//		{
//			return  _node != it._node;
//		}
//
//		T* operator->()
//		{
//			return &_node->_date;
//		}
//	};
//
//	template<class T>
//	class list
//	{
//	public:
//		typedef _list_Node<T> Node;
//		typedef _list_iterator<T> iterator;
//
//		list()
//			:_head(new Node)
//		{
//			_head->_next = _head;
//			_head->_prev = _head;
//		}
//
//		~list()
//		{
//
//		}
//
//		//void push_back(const T x)
//		//{
//		//	Node* tail = _head->_prev;
//		//	Node* node = new Node(x);
//		//	node->_date = x;
//		//	tail->_next = node;
//		//	node->_prev = tail;
//		//	node->_next = _head;
//		//	_head->_prev = node;
//		//}
//
//		void push_back(const T x)
//		{
//			insert(_head, x);
//		}
//
//		iterator begin()
//		{
//			return iterator(_head->_next);
//		}
//
//		iterator end()
//		{
//			return iterator(_head);
//		}
//
//		//void push_front(const T x)
//		//{
//		//	Node* node = new Node(x);
//
//		//	Node* next = _head->_next;
//		//	node->_next = next;
//		//	node->_prev = _head;
//		//	_head->_next = node;
//		//	next->_prev = node;
//		//}
//
//		void push_front(const T x)
//		{
//			insert(begin(), x);
//		}
//
//		//void pop_back()
//		//{
//		//	Node* tail = _head->_prev;
//		//	tail->_prev->_next = _head;
//		//	_head->_prev = tail->_prev;
//		//	delete tail;
//		//}
//
//		void pop_back()
//		{
//			erase(_head->_prev);
//		}
//
//
//		//void pop_front()
//		//{
//		//	Node* first = _head->_next;
//		//	first->_next->_prev = _head;
//		//	_head->_next = first->_next;
//		//	delete first;
//		//}
//
//		void pop_front()
//		{
//			erase(_head->_next);
//		}
//
//		iterator erase(const iterator pos)
//		{
//			Node* cur = pos._node;
//			Node* next = cur->_next;
//			Node* prev = cur->_prev;
//
//			prev->_next = next;
//			next->_prev = prev;
//
//			delete cur;
//			return next;
//		}
//
//		void insert(iterator pos, const T x)
//		{
//			Node* cur = pos._node;
//			Node* prev = cur->_prev;
//			Node* newnode = new Node(x);
//			newnode->_prev = prev;
//			newnode->_next = cur;
//			cur->_prev = newnode;
//			prev->_next = newnode;
//		}
//
//	private:
//		Node* _head;
//	};
//
//	void text_list1()
//	{
//		list<int> lt;
//		lt.push_back(1);
//		lt.push_back(2);
//		lt.push_back(3);
//
//		list<int>::iterator it = lt.begin();
//		while (it != lt.end())
//		{
//			std::cout << *it << " ";
//			++it;
//		}
//		std::cout << std::endl;
//	}
//	
//	void text_list2()
//	{
//		class Date
//		{
//		public:
//			Date(int year = 0, int month = 1, int day = 1)
//			{
//				_year = year;
//				_month = month;
//				_day = day;
//			}
//
//			int _year;
//			int _month;
//			int _day;
//		};
//
//		list<Date> lt;
//		lt.push_back(Date());
//		lt.push_back(Date());
//
//		list<Date>::iterator it = lt.begin();
//		while (it != lt.end())
//		{
//			std::cout << it->_year << "-" << it->_month << "-" << it->_year << std::endl;
//			it++;
//		}
//	}
//
//	void text_list3()
//	{
//		list<int> lt;
//		lt.push_back(10);
//		lt.push_back(20);
//		lt.push_front(5);
//		lt.insert(lt.begin(), 999);
//
//		lt.erase(++lt.begin());
//
//		list<int>::iterator it = lt.begin();
//		while (it != lt.end())
//		{
//			std::cout << *it << " ";
//			it++;
//		}
//		std::cout << std::endl;
//	}
//
//	void text_list4()
//	{
//		list<int>lt;
//		lt.push_back(10);
//		lt.push_back(20);
//		lt.push_front(5);
//		lt.push_back(30);
//
//		lt.pop_back();
//		lt.pop_front();
//
//		for (auto e : lt)
//		{
//			cout << e << " ";
//		}
//		cout << endl;
//	}
//}


#include<assert.h>
namespace Solution
{
	template<class T>
	struct _list_Node
	{
		_list_Node* _prev;
		_list_Node* _next;
		T _date;

		_list_Node(const T x = T())
		{
			_prev = nullptr;
			_next = nullptr;
			_date = x;
		}
	};


	template<class T, class Ref, class Ptr>
	struct __list_iterator
	{
		typedef _list_Node<T>* Node;
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;

		typedef __list_iterator<T, Ref, Ptr> Self;

		Node _node;

		__list_iterator(Node node)
			:_node(node)
		{}

		__list_iterator(const Self& l)
			:_node(l._node)
		{}


		Ref operator*()
		{
			return _node->_date;
		}

		Ptr operator->()
		{
			return _node->_date;
		}

		Self operator++()
		{
			_node = _node->_next;
			return *this;
		}

		Self operator++(int)
		{
			Self tmp = *this;
			_node = _node->_next;
			return tmp;
		}

		Self operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		Self operator--(int)
		{
			Self tmp = *this;
			_node = _node->_prev;
			return tmp;
		}

		bool operator!=(const Self& l)
		{
			return _node != l._node;
		}
	};

	template<class T>
	class list
	{
	public:
		typedef  _list_Node<T>  Node;
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;


		list()
			:_head(new Node)
		{
			_head->_next = _head;
			_head->_prev = _head;
		}

		list(const list<T>& lt)
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;

			const_iterator it = lt.begin();
			while (it != lt.end())
			{
				push_back(*it);
				it++;
			}
		}

		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		//list<T>& operator=(const list<T>& lt)
		//{
		//	if (this != &lt)
		//	{
		//		clear();
		//		for (auto e : lt)
		//		{
		//			push_back(e);
		//		}
		//	}
		//	return *this;
		//}

		list<T>& operator= (list<T> lt)
		{
			swap(_head, lt._head);
			return *this;
		}

		iterator begin()
		{
			return iterator(_head->_next);
		}

		iterator end()
		{
			return iterator(_head);
		}

		const_iterator begin()const
		{
			return const_iterator(_head->_next);
		}

		const_iterator end()const
		{
			return const_iterator(_head);
		}
		
		iterator insert(iterator pos, const T& val)
		{
			Node* newnode = new Node(val);

			Node* cur = pos._node;
			Node* prev = cur->_prev;

			prev->_next = newnode;
			newnode->_next = cur;
			cur->_prev = newnode;
			newnode->_prev = prev;

			return iterator(newnode);

		}

		iterator erase(iterator pos)
		{
			assert(pos != end());

			Node* cur = pos._node;
			Node* next = cur->_next;
			Node* prev = cur->_prev;
			prev->_next = next;
			next->_prev = prev;

			delete pos._node;
			return iterator(next);
		}

		void push_back(const T& x)
		{
			insert(_head, x);
		}

		void push_front(const T& x)
		{
			insert(_head->_next, x);
		}

		void pop_back()
		{
			//erase(_head->_prev);
			erase(--end());
		}

		void pop_front()
		{
			//erase(_head->_next);
			erase(begin());
		}

		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				erase(it++);
			}
		}
	private:
		Node* _head;
	};

	void print_list(const list<int>& l)
	{
		list<int>::const_iterator it = l.begin();
		while (it != l.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}

	void text_list1()
	{
		list<int>lt;
		lt.push_back(10);
		lt.push_back(20);
		lt.push_back(30);

		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}

	void text_list2()
	{
		list<int>lt;
		lt.push_back(10);
		lt.push_back(20);
		lt.push_back(30);

		lt.push_front(-10);

		lt.pop_back();
		lt.pop_front();
		print_list(lt);
	}

	void text_list3()
	{
		//删除偶数
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			if (*it % 2 == 0)
			{
				lt.erase(it++);
			}
			else
				it++;
		}
		print_list(lt);

		list<int> lt2(lt);

		print_list(lt2);
	}

	void text_list4()
	{
		list<int>lt;
		lt.push_back(10);
		lt.push_back(20);
		lt.push_back(30);
		print_list(lt);

		list<int> lt1(lt);

		print_list(lt1);

		lt1.clear();

		lt1 = lt;
		print_list(lt1);
	}
}