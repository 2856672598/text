#include"Queueby_two_stack.h"
void Text1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	printf("%d ", QueueTop(&q));
	QueuePush(&q, 2);
	printf("%d ", QueueTop(&q));
	QueuePush(&q, 3);
	printf("%d ", QueueTop(&q));
	QueuePush(&q, 4);
	printf("%d ", QueueTop(&q));
	QueuePop(&q);
	printf("%d ", QueueTop(&q));
	QueuePop(&q);
	printf("%d ", QueueTop(&q));
	//QueuePop(&q);
	//QueuePop(&q);
}
int main()
{
	Text1();
	return 0;
}