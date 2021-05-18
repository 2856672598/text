#include"Queueby_two_stack.h"
void Text1()
{
	Queue q;
	QueueInit(&q);
	int input;
	Datatype data;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			QueueuDestory(&q);
			printf("退出");
			return;
			break;
		case PUSH:
			printf("输入输入的数据:");
			scanf("%d", &data);
			QueuePush(&q, data);
			break;
		case POP:
			QueuePop(&q);
			break;
		case TOP:
			printf("队头为:%d\n", QueueTop(&q));
			break;
		default:
			printf("输入错误，重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	Text1();
	return 0;
}