
#include"seqlist.h"
void text1()
{
	SeqList s;

	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);


	SeqListPrint(&s);
	SeqListDestory(&s);
}

void text2()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushFront(&s, 10);
	SeqListPushFront(&s, 20);
	SeqListPushFront(&s, 30);

	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPopFront(&s);

	SeqListPushBack(&s, 100);
	SeqListPrint(&s);

	printf("ÏÂ±êÎª£º%d", SeqListFind(&s, 100));
	SeqListDestory(&s);


}

void text3()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 10);
	SeqListPushBack(&s, 20);
	SeqListPushBack(&s, 30);

	SeqListInsert(&s, 0, 1);
	SeqListInsert(&s, 4, 1);

	SeqListErase(&s, 0);
	SeqListErase(&s, 1);
	SeqListErase(&s, 2);

	SeqListPrint(&s);

	SeqListDestory(&s);
}

void text4()
{
	SeqList s;
	SeqListInit(&s);
	SeqListInsert(&s, 0, 1);
	SeqListInsert(&s, 0, 2);
	SeqListInsert(&s, 0, 3);
	SeqListInsert(&s, 0, 4);
	SeqListInsert(&s, 0, 5);

	SeqListErase(&s, 0);
	SeqListErase(&s, 0);
	SeqListErase(&s, 0);

	SeqListPrint(&s);

	int pos = SeqListFind(&s, 2);
	printf("%d", pos);
	SeqListDestory(&s);
}
int main()
{
	//text1();
	//text2();
	//text3();

	text4();
	return 0;
}