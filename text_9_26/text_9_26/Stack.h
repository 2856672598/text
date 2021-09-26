#pragma once;

namespace Solution
{
	//栈 先进后出
	template<class T, class Container = std::deque<T>>
	class stack
	{
	public:
		void push(const T& val)
		{
			_con.push_front(val);
		}

		void pop()
		{
			_con.pop_front();
		}

		T front()
		{
			return _con.front();
		}
		
		bool empty()
		{
			return _con.empty();
		}
	private:
		Container _con;
	};
}