#include"Stack.h"
void StackDestory(Stack* phead)
{
	Stack* next = NULL;
	while (phead)
	{
		next = phead->next;
		free(phead);
		phead = next;
	}
}
bool StackEmpty(Stack* phead)
{
	if (phead == NULL)
		return true;
	else
		return false;
}
void StackPush(Stack** phead, Seat pos)
{
	Stack* newnode = malloc(sizeof(Stack));
	assert(newnode);
	newnode->data.col = pos.col;
	newnode->data.row = pos.row;
	newnode->next = NULL;

	newnode->next = *phead;
	*phead = newnode;
}
void SrtackPop(Stack** phead)
{
	if (!StackEmpty(*phead))
	{
		Stack* next = (*phead)->next;
		free(*phead);
		*phead = next;
	}
}
DataType StackTop(Stack* phead)
{
	assert(phead);
	return phead->data;
}