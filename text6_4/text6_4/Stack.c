#include"stack.h"
void InitStack(ST* head)
{
	DataType* data = malloc(sizeof(DataType)*MAX);
	if (data)
	{
		head->Data = data;
		head->StackSize = MAX;
		head->top = -1;
	}
}
bool Capacity(ST* head)
{
	DataType* newnode = realloc(head->Data, sizeof(DataType) * (2 * MAX));
	if (newnode)
	{
		head->Data = newnode;
		head->StackSize *= 2;
		return true;
	}
	return false;
}
bool StackFull(ST*head)
{
	assert(head);
	if (head->top >= head->StackSize)
		return true;
	else
		return false;
}
bool StackEmpty(ST*head)
{
	assert(head);
	if (head->top <= -1)
		return true;
	else
		return false;
}
void StackPush(ST*head,int left,int right)
{
	assert(head);
	if (StackFull(head))
	{
		//ย๚มห
		if (!Capacity(head))
			exit(-1);
	}
	head->top++;
	head->Data[head->top].left = left;
	head->Data[head->top].right = right;
}
void StackPop(ST*head)
{
	assert(head);
	if (!StackEmpty(head))
	{
		head->top -= 1;
	}
}

Data StackTop(ST* head)
{
	assert(head);
	return head->Data[head->top];
}
void DestoryStack(ST*head)
{
	assert(head);
	free(head->Data);
	head->StackSize = head->top = -1;
}