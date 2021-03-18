#include"SeqQueue.h"
//void text1()
//{
//
//}
int main()
{
	Queue s;
	Init(&s);
	Push(&s, 1);
	Push(&s, 2);
	Push(&s, 3);
	Push(&s, 4);
	Push(&s, 5);
	Push(&s, 6);
	Push(&s, 7);
	Push(&s, 8);
	Pop(&s);

	Print(&s);
	int len = Get(&s);
	printf("队列长度为%d\n", len);
	ClearQueue(&s);

	Destory(&s);
	return 0;
}