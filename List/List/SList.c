#include"Slist.h"

SListNode* foundNode(SListDataType x)
{
	SListNode* newNode = malloc(sizeof(SListDataType));
	if (newNode == NULL)
	{
		printf("´´½¨Ê§°Ü\n");
		exit(-1);
	}
	return newNode;
}
void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = foundNode(x);
	if (*pphead == NULL)
	{
		//SListNode* newNode = foundNode(x);
		newNode->data = x;
		newNode->next = NULL;
		*pphead = newNode;
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//SListNode* newNode = foundNode(x);
		newNode->next = NULL;
		newNode->data = x;
		tail->next = newNode;
		//*pphead = newNode;
	}
}

void SListPopBack(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		//free((*pphead)->next);
		//(*pphead)->next = NULL;
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		*pphead = NULL;
		free(*pphead);
	}
	else
	{
		SListNode* cur = *pphead;
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			cur = tail;
			tail = tail->next;
		}
		cur->next = NULL;
	}
}
void SListPrint(SListNode** pphead)
{
	SListNode* cur = *pphead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}