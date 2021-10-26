#include"list.h"
void text()
{
	ListNode* phead = ListNodeInit();
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	ListPrint(phead);
	ListPopBack(phead);
	ListPopBack(phead);
	ListPrint(phead);

	ListPushFront(phead, -1);
	ListPushFront(phead, -2);
	ListPrint(phead);
	ListPopFront(phead);
	ListPopFront(phead);

	ListPrint(phead);

}
int main()
{
	text();
	return 0;
}