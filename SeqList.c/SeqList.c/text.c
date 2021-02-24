#include"SeqList.h"
int main()
{
	SL s;
	SLInit(&s);
	//指定插入
	SLInsert(&s, 1, 0);
	SLInsert(&s, 2, 1);
	SLInsert(&s, 3, 1);
	SLInsert(&s, 4, 3);
	SLErase(&s, 3);
	//尾插
	SLPushBack(&s, 9);

	SLPrint(&s);
	//尾删
	SLPopBack(&s);
	SLPopBack(&s);
	//头插
	SLPushFront(&s, 5);
	SLPushFront(&s, 8);
	SLPushFront(&s, 9);
	SLPrint(&s);
	//头删
	SLPopFront(&s);
	SLPopFront(&s);
	SLPrint(&s);

	SLErase(&s, 3);

	SLInsert(&s, 1, 99);
	SLPrint(&s);

	SLErase(&s, 2);
	SLPrint(&s);
	//释放内存
	SLDestory(&s);
	return 0;
}