#include"Stack.h"
#include"Queue.h"

void text_queue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);
	QueuePop(&q);
	printf("%d\n", QueueFront(&q));
	printf("%d\n", QueueBack(&q));

	while (!QueueEmpty(&q))
	{
		QDateType tmp = QueueFront(&q);
		printf("%d ", tmp);
		QueuePop(&q);
	}
	QueueDestory(&q);
}

int main()
{
	//ST s;
	//StackInit(&s);
	//Push(&s, 1);
	//Push(&s, 2);
	//Push(&s, 3);

	//while (!Empty(&s))
	//{
	//	printf("%d ", StackTop(&s));
	//	Pop(&s);
	//}
	//Destroy(&s);

	text_queue();
	return 0;
}
