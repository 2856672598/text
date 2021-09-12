#include<iostream>
#include<assert.h>
namespace Solution
{
	template <class T>
	class vectot
	{
	public:
		typedef T* iterator;
		vectot()
			:_start(nullptr)
			,_finish(nullptr)
			,_end_of_storage(nullptr)
		{}

		size_t capacity()
		{
			return _end_of_storage - _start;
		}

		size_t size()
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

		void reserve(const size_t n)
		{
			if (n > capacity())
			{
				size_t sz = size();
				iterator tmp = new T[n];
				if (_start != NULL)
					memcpy(tmp, _start, sizeof(T)*size());
				delete[] _start;
				_start = tmp;
				_end_of_storage = _start + n;
				_finish = _start + sz;
			}
		}

		T& operator[](const size_t pos)
		{
			assert(pos < size());
			return _start[pos];
		}

		void insert(iterator pos, const T& val)
		{
			assert(pos <= _finish);
			if (_finish >= _end_of_storage)
			{
				//À©ÈÝ
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
			//	//À©ÈÝ
			//	size_t newcapacity = capacity() == 0 ? 2 : 2 * capacity();
			//	reserve(newcapacity);
			//}
			//*_finish = val;
			//_finish++;

			insert(end(), val);
		}

		void pop_back()
		{
			assert(_start < _finish);
			_finish--;
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
	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};

	void text_vector1()
	{
		vectot<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.insert(v.end(), 4);
		v.insert(v.begin(), 0);

		v.erase(v.begin());
		v.erase(v.end() - 1);
		vectot<int>::iterator it = v.begin();

		while (it != v.end())
		{
			std::cout << *it << " ";
			it++;
		}
	}
}