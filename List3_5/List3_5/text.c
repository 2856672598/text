#include"list.h"
void TextList1()
{
	ListNode* s = ListInit();

	ListPushBack(s, 1);
	ListPushBack(s, 2);
	ListPushBack(s, 3);
	ListPushBack(s, 4);

	ListPushFront(s, 9);

	ListPopFront(s);
	ListPopBack(s);
	ListPopBack(s);

	ListPrint(s);
	ListDestory(&s);
}
void TextList2()
{
	ListNode* s = ListInit();
	ListPushBack(s, 1);
	ListPushBack(s, 2);
	ListPushBack(s, 3);
	ListPushBack(s, 4);
	ListNode* pos = ListFind(s, 3);
	ListInsert(pos, 50);
	//ListErase(pos);
	ListModify(pos, 100);
	ListPrint(s);

	ListDestory(&s);
}
int main()
{
	TextList1();
	return 0;
}