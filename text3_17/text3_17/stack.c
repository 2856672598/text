#include"stack.h"
void InitStack(SqStack* head)
{
	DataType* tmp = malloc(sizeof(DataType)*MAX);
	if (tmp)
	{
		head->Data = tmp;
		head->top = 0;
		head->stackSize = MAX;
	}
	else
		exit(-1);
}
bool AddStack(SqStack*head)
{
	assert(head);
	if (head->top >= head->stackSize)
	{
		DataType* tmp = realloc(head->Data, sizeof(DataType)*head->stackSize * 2);
		if (tmp != NULL)
		{
			head->Data = tmp;
			head->stackSize = 2 * head->stackSize;
			//printf("À©ÈÝ\n");
		}
		else
		{
			//strerror(tmp);
			exit(-1);
		}
	}
	return true;
}
void Push(SqStack*head, DataType n)
{
	assert(head);
	bool flag = AddStack(head);
	if (flag)
	{
		head->Data[head->top] = n;
		head->top += 1;
	}
}
void Print(SqStack* head)
{
	assert(head);
	int tmp = head->top - 1;
	while (tmp >= 0)
	{
		printf("%d", head->Data[tmp]);
		tmp -= 1;
	}
}
void Destory(SqStack* head)
{
	assert(head);
	free(head->Data);
	head->Data = NULL;
}