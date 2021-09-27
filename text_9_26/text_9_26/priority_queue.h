#pragma once;
#include<algorithm>
namespace Solution
{
	//仿函数
	template<class T>
	struct less
	{
		bool operator()(const T& x, const T& y)
		{
			return x < y;
		}
	};

	template<class T>
	struct greater
	{
		bool operator()(const T& x, const T&y)
		{
			return x > y;
		}
	};

	template<class T, class Container = std::vector<T>, class Compare = greater<T>>
	class priority_queue
	{
	public:
		//小堆
		void AdjustUp(int size)
		{
			int parent = (size - 1) / 2;
			int child = size;
			while (child > 0)
			{
				//if (_con[parent] > _con[child])
				Compare com;
				if (com(_con[child], _con[parent]))
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
			int child = parent * 2 + 1;//默认为左孩子
			Compare com;
			while (child < (int)_con.size())
			{
				//if (child + 1 < (int)_con.size() && _con[child] > _con[child + 1])
				if (child + 1 < (int)_con.size() && com(_con[child + 1], _con[child]))
					child++;

				//if (child < (int)_con.size() && _con[child] < _con[parent])
				if (child < (int)_con.size() && com(_con[child], _con[parent]))
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