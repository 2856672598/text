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

void text3()
{
	SListNode* list = NULL;
	SListPushFront(&list, 1);
	SListPushFront(&list, 2);
	SListPushFront(&list, 3);
	SListPushFront(&list, 4);
	SListNode* pos = SListFind(list, 3);
	SListInsertAfter(pos, 66);
	SListPrint(list);

	SListEraseAfter(pos);
	SListPrint(list);

	SListErasePos(&list, pos);
	SListPrint(list);

	SListDestory(list);
}

void text4()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 2);

	SListNode*cur = plist;
	SListNode* pos = NULL;
	//将所有2的位置改为3
	while ((pos = SListFind(cur, 2)) != NULL)
	{
		pos->_date = 3;
		cur = pos->_next;
	}

	SListPrint(plist);
}

int main()
{
	//text1();
	//text2();
	//text3();
	text4();
	return 0;
}