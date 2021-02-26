#include"Slist.h"
void text()
{
	SListNode* list = NULL;
	SListPushBack(&list, 1);
	SListPushBack(&list, 2);
	SListPushBack(&list, 3);
	SListPushBack(&list, 4);
	SListPushBack(&list, 5);
	SListPushBack(&list, 6);

	SListPopBack(&list);
	SListPopBack(&list);
	SListPopBack(&list);
	SListPopBack(&list);
	SListPopBack(&list);
//Í·²å
	SListPushFront(&list, 9);
	SListPushFront(&list, 10);
	SListPushFront(&list, 11);
	SListPushFront(&list, 12);

//Í·É¾
	SListPopFront(&list);
	SListPopFront(&list);


	SListNode* tmp = SListFind(list, 1);
	if (tmp)
		SListInsterAfter(tmp, 99);
	Print(&list);
}
int main()
{
	text();
	return 0;
}