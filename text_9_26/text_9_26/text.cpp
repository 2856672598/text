//#include<iostream>
//#include<deque>
//#include"Stack.h"
//#include"Queue.h"
//using namespace Solution;
//using std::cout;
//using std::endl;
//void text1()
//{
//	stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(4);
//
//	while (!st.empty())
//	{
//		cout << st.front() << " ";
//		st.pop();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	queue<int, std::deque<int>> q;
//	q.push(1);
//	q.push(2);
//	q.push(4);
//	q.pop();
//	while (!q.empty())
//	{
//		cout << q.front() << " ";
//		q.pop();
//	}
//	cout << endl;
//
//	text1();
//	return 0;
//}


//优先级队列
#include<iostream>
#include<queue>
#include<vector>
using std::cout;
using std::endl;
#include"priority_queue.h"
//using namespace std;

//仿函数
class compare
{
public:
	bool operator()(int x, int y)
	{
		return x < y;
	}
};

void text_priority_queue()
{
	Solution::priority_queue<int> pq;
	pq.push(9);
	pq.push(5);
	pq.push(2);
	pq.push(10);
	pq.push(0);


	while (!pq.empty())
	{
		std::cout << pq.top() << " ";
		pq.pop();
	}
	std::cout << std::endl;
}

int main()
{
	text_priority_queue();

	compare A;
	cout << A(3, 4) << endl;
	return 0;
}