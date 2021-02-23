#include"SeqList.h"
int main()
{
	SL s;
	//初始化
	SLInit(&s);
	//尾插
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 6);
	SLPushBack(&s, 7);
	SLPushBack(&s, 8);
	SLPushBack(&s, 9);
	SLPushBack(&s, 10);
	//打印
	SLPrint(&s);
	//尾删--- 参数2为删除的个数
	SLPopBack(&s, 2);
	SLPrint(&s);
	//头插
	SLPushFront(&s, 5);
	SLPushFront(&s, 6);
	SLPushFront(&s, 7);
	SLPrint(&s);
	//头删 2个
	SLPopFront(&s, 2);
	SLPrint(&s);
	//指定查找，找到了打印下标
	int len = SLFind(&s, 70);
	if (len == -1)
		printf("未找到\n");
	else
		printf("%d\n", len);
	//随机插入
	SLInsert(&s, 5, 0);
	SLPrint(&s);
	//指定删除
	SLErase(&s, 3);
	SLPrint(&s);
	return 0;
}