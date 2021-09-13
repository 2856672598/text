#include<iostream>
#include<assert.h>
namespace Solution
{
	template <class T>
	class vector
	{
	public:
		typedef T* iterator;
		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _end_of_storage(nullptr)
		{}

		~vector()
		{
			delete[] _start;
			_start = _finish = _end_of_storage = nullptr;
		}

		vector(const vector<T>& v)
		{
			_start = new T[v.capacity()];
			_finish = _start;
			_end_of_storage = _start + v.capacity();

			for (size_t i = 0; i < v.size(); i++)
			{
				*_finish = v[i];
				_finish++;
			}
		}

		size_t capacity()const
		{
			return _end_of_storage - _start;
		}

		size_t size()const
		{
			return _finish - _start;
		}

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		//void reserve(const size_t n)
		//{
		//	if (n > capacity())
		//	{
		//		size_t sz = size();
		//		iterator tmp = new T[n];
		//		if (_start != NULL)
		//			memcpy(tmp, _start, sizeof(T)*size());
		//		delete[] _start;
		//		_start = tmp;
		//		_end_of_storage = _start + n;
		//		_finish = _start + sz;
		//	}
		//}

		void reserve(const size_t n)
		{
			if (n > capacity())
			{
				size_t sz = size();
				iterator tmp = new T[n];
				if (_start != nullptr)
				{
					//不能使用memcap---》浅拷贝导致多次对同一块空间释放
					for (size_t i = 0; i < size(); i++)
					{
						tmp[i] = _start[i];
					}
				}
				delete[] _start;
				_start = tmp;
				_finish = _start + sz;
				_end_of_storage = _start + n;
			}
		}


		T& operator[](const size_t pos)
		{
			assert(pos < size());
			return _start[pos];
		}

		T& operator[](const size_t pos)const
		{
			assert(pos < size());
			return _start[pos];
		}

		void insert(iterator pos, const T& val)
		{
			assert(pos <= _finish);
			if (_finish >= _end_of_storage)
			{
				//扩容
				size_t sz = pos - _start;
				size_t newcapacity = capacity() == 0 ? 2 : 2 * capacity();
				reserve(newcapacity);
				
				pos = _start + sz;
			}

			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				end--;
			}
			*pos = val;
			_finish++;
		}

		void push_back(const T& val)
		{
			//if (size() >= capacity())
			//{
			//	//扩容
			//	size_t newcapacity = capacity() == 0 ? 2 : 2 * capacity();
			//	reserve(newcapacity);
			//}
			//*_finish = val;
			//_finish++;

			insert(end(), val);
		}

		void pop_back()
		{
			//assert(_start < _finish);
			//_finish--;

			assert(_start < _finish);
			erase(end() - 1);
		}

		iterator erase(iterator pos)
		{
			assert(pos < _finish);

			while (pos < _finish)
			{
				*(pos) = *(pos + 1);
				pos++;
			}
			_finish--;

			return pos;
		}

		//int i=int();可以认为是构造函数
		void resize(size_t n, const T& val = T())
		{
			if (_start + n < _finish)
			{
				_finish = _start + n;
			}
			else
			{
				//判断是否需要扩容
				if (_start + n > _end_of_storage)
				{
					//扩容
					size_t newcapacity = capacity() == 0 ? 2 : 2 * capacity();
					reserve(newcapacity);
				}
				//不可以使用memset
				//所有memxxx类型的函数都是按字节拷贝的
				while (_finish < _start + n)
				{
					*_finish = val;
					_finish++;
				}
			}
		}

		void swap(const vector<T>& v)
		{
			swap(_start, v._start);
			swap(_finish, v._finish);
			swap(_end_of_storage, v._end_of_storage);
		}

		iterator operator=(const vector<T> v)
		{
			swap(this, v);
		}

		void print()
		{
			vector<int>::iterator it = begin();
			while (it != end())
			{
				cout << *it << " ";
				it++;
			}
			cout << endl;
		}

	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};

	void text_vector1()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.insert(v.end(), 4);
		v.insert(v.begin(), 0);

		v.erase(v.begin());
		v.erase(v.end() - 1);
		vector<int>::iterator it = v.begin();

		while (it != v.end())
		{
			std::cout << *it << " ";
			it++;
		}
	}

	void text_vector2()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.resize(2);
		v.print();
		cout << v.size() << " " << v.capacity() << endl << endl;

		v.resize(6);
		v.print();
		cout << v.size() << " " << v.capacity() << endl << endl;

		v.resize(12);
		v.print();
		cout << v.size() << " " << v.capacity() << endl << endl;
	}

	void text_vector3()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);

		vector<int> v2(v1);

		v1.print();
		v2.print();
	}

	void text_vector4()
	{
		vector<string> v;
		v.push_back("111111111");
		v.push_back("222222222");
		v.push_back("333333333");
		v.push_back("444444444");
		v.push_back("555555555");
		for (size_t i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}

		cout << endl;

		vector<string> v1(v);
		for (size_t i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
	}
}