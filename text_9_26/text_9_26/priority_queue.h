#pragma once;
#include<algorithm>
namespace Solution
{
	template<class T, class Container = std::vector<T>>
	class priority_queue
	{
	public:
		//小锥
		void AdjustUp(int size)
		{
			int parent = (size - 1) / 2;
			int child = size;
			while (child > 0)
			{
				if (_con[parent] > _con[child])
				{
					std::swap(_con[parent], _con[child]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
					break;
			}
		}

		void AdjustDown(const int pos)
		{
			int parent = pos;
			int child = pos * 2 + 1;//默认为左孩子
			while (parent < (int)_con.size())
			{
				if (child < (int)_con.size() && child + 1 < (int)_con.size()
					&& _con[child] > _con[child + 1])
					child++;

				if (child < (int)_con.size() && _con[child] < _con[parent])
				{
					std::swap(_con[child], _con[parent]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
					break;
			}
		}

		void push(const T& val)
		{
			_con.push_back(val);
			//向上调整
			AdjustUp(_con.size() - 1);
		}

		void pop()
		{
			if (_con.empty())
				return;
			std::swap(_con.back(), _con.front());
			_con.pop_back();

			AdjustDown(0);
		}

		bool empty()
		{
			return _con.empty();
		}

		T top()
		{
			return _con.front();
		}
	private:
		Container _con;
	};
}