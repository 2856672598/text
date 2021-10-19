#include"SList.h"
void text1()
{
	SListNode* list = NULL;
	SListPushBack(&list, 1);
	SListPushBack(&list, 2);
	SListPushBack(&list, 3);
	SListPushBack(&list, 4);
	//SListPrint(list);

	SListPopBack(&list);
	SListPopBack(&list);
	SListPopBack(&list);
	SListPopBack(&list);

	SListPrint(list);

}
void text2()
{
	SListNode* list = NULL;
	SListPushBack(&list, 1);
	SListPushBack(&list, 2);
	SListPushBack(&list, 3);
	SListPushBack(&list, 4);
	SListPushFront(&list, 1);
	SListPushFront(&list, 2);
	SListPushFront(&list, 3);
	SListPushFront(&list, 4);

	SListPrint(list);
	SListPopFront(&list);
	SListPopFront(&list);
	SListPopFront(&list);
	SListPopFront(&list);
	SListPopFront(&list);
	SListPopFront(&list);
	SListPopFront(&list);
	SListPopFront(&list);

	SListPrint(list);
}
int main()
{
	//text1();
	text2();
	return 0;
}