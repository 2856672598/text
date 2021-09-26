
#pragma once;
namespace Solution
{
	template <class T, class Container = std::deque<T> >
	class queue
	{
	public:
		void push(const T& val)
		{
			_con.push_back(val);
		}
		void pop()
		{
			_con.pop_front();
		}

		T front()
		{
			return _con.front();
		}

		T back()
		{
			return _con.back();
		}

		bool empty()const
		{
			return _con.empty();
		}
	private:
		Container _con;
	};
}

