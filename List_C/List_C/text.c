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
void text1()
{
	ListNode* phead = ListNodeInit();
	ListPushFront(phead, 1);
	ListPushFront(phead, 2);
	ListPushFront(phead, 3);
	ListPushFront(phead, 4);
	ListPrint(phead);

	printf("%d", Find(phead, 4)->val);
}
int main()
{
	//text();
	text1();
	return 0;
}