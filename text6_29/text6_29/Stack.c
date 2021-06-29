#include"Stack.h"
void StackInit(Stack* ST)
{
	assert(ST);
	ST->head = NULL;
}
void StackPush(Stack* ST, DataType value)
{
	Node* newNode = malloc(sizeof(Node));
	assert(newNode);
	newNode->data.col = value.col;
	newNode->data.row = value.row;
	newNode->next = NULL;
	if (ST->head == NULL)
	{
		ST->head = newNode;
	}
	else
	{
		newNode->next = ST->head;
		ST->head = newNode;
	}
}
void StackPop(Stack* ST)
{
	assert(ST);
	if (!StackEmpty(ST))
	{
		Node* next = ST->head->next;
		free(ST->head);
		ST->head = next;
	}
}
bool StackEmpty(Stack* ST)
{
	assert(ST);
	if (ST->head == NULL)
		return true;
	else
		return false;
}
void StackDestory(Stack* ST)
{
	assert(ST);
	while (!StackEmpty(ST))
	{
		Node* next = ST->head->next;
		free(ST->head);
		ST->head = next;
	}
}

int StackSize(Stack* ST)
{
	Node* cur = ST->head;
	int count = 0;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;
}
void StackCopy(Stack* source, Stack* target)
{
	assert(source);
	assert(target);

	Node* cur1 = source->head;
	while (cur1)
	{
		//¿½±´
		StackPush(target, cur1->data);
		cur1 = cur1->next;
	}
}

DataType StackTop(Stack* phead)
{
	assert(phead);
	if (!StackEmpty(phead))
	{
		return phead->head->data;
	}
}