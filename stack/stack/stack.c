#include"stack.h"
void InitStack(SqStack* head)
{
	malloc(sizeof());
	head->top = 0;
	head->StackSize = MAX;
}
void Push(SqStack* head, DataType n)
{
	if (head->StackSize > head->top)
	{
		head->Data[head->top] = n;
		head->top += 1;
	}
	else
		return ;
}
//void Print(SqStack*head)
//{
//	assert(head);
//	if()
//}