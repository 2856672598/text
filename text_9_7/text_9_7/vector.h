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
			:start(nullptr)
			,finish(nullptr)
			,end_of_storage(nullptr)
		{}

		~vector()
		{
			delete[] start;
			start = finish = end_of_storage = nullptr;
		}

		size_t size()
		{
			return finish - start;
		}

		size_t capacity()
		{
			return end_of_storage - start;
		}

		iterator begin()
		{
			return start;
		}

		iterator end()
		{
			return finish;
		}

		void reserve(size_t n)
		{
			int sz = size();
			if (n > capacity())
			{
				T* tmp = new T[n];
				if (start)
					memcpy(tmp, start, sizeof(T)*sz);
				start = tmp;
				end_of_storage = start + n;
				finish = start + sz;
			}
		}

		void push_back(const T& val)
		{
			if (size() >= capacity())
			{
				//À©ÈÝ
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
				reserve(newcapacity);
			}

			*finish = val;
			finish++;
		}

		void pop_back()
		{
			assert(finish > start);
			finish--;
		}

		T& operator[](const size_t pos)
		{
			assert(pos < size());
			return start[pos];
		}

	private:
		iterator start;
		iterator finish;
		iterator end_of_storage;
	};

	void text_vector1()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.pop_back();
		vector<int>::iterator it = v.begin();
		while (it != v.end())
		{
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;
	}
}