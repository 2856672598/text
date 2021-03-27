#include"LinkStack.h"
int main()
{
	DataNode* phead = NULL;
	LinkStack* head = InIn();
	PushStack(&phead, head, 1);
	PushStack(&phead, head, 2);
	PushStack(&phead, head, 3);
	PushStack(&phead, head, 4);
	PushStack(&phead, head, 6);
	PushStack(&phead, head, 7);
	PushStack(&phead, head, 8);
	PushStack(&phead, head, 9);
	PushStack(&phead, head, 10);
	Print(phead);

	//Print(head);
}