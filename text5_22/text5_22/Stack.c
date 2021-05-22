#include"Stack.h"
void StackInit(Stack* ps)
{
	assert(ps);
	ps->head = NULL;
}
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->head);
	ps->head = NULL;
}
void StackPush(Stack* ps, SDataType x)
{
	assert(ps);
	SNode* newnode = malloc(sizeof(SNode));
	if (newnode)
	{
		SNode* tmp = ps->head;
		newnode->next = tmp;
		newnode->data = x;
		ps->head = newnode;
	}
}
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->head);
	SNode* tmp = ps->head->next;
	free(ps->head);
	ps->head = tmp;
}