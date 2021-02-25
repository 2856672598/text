#include"Slist.h"
int main()
{
	SListNode* pphead = NULL;
	SListPushBack(&pphead, 1);
	SListPushBack(&pphead, 2);
	SListPushBack(&pphead, 3);
	SListPushBack(&pphead, 4);
	SListPopBack(&pphead);
	SListPopBack(&pphead);
	SListPopBack(&pphead);
	SListPopBack(&pphead);
	SListPopBack(&pphead);
	SListPrint(&pphead);
	return 0;
}