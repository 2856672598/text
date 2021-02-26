#include"Slist.h"

SListNode* foundNode(SListDataType x)
{
	SListNode* newNode = malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("创建失败\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
void Print(SListNode** pphead)
{
	while ((*pphead) != NULL)
	{
		printf("%d->", (*pphead)->data);
		*pphead = (*pphead)->next;
	}
	printf("NULL");
}
//尾插
void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = foundNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* cur = *pphead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}
//尾删
void SListPopBack(SListNode** pphead)
{
	if (*pphead == NULL)
		return;
	else if ((*pphead)->next == NULL)
	{
		*pphead = NULL;
		free(*pphead);
	}
	else
	{
		SListNode* tail = *pphead;
		SListNode * cur = *pphead;
		while (cur->next != NULL)
		{
			tail = cur;
			cur = cur->next;
		}
		tail->next = NULL;
		free(cur);
	}
}

//头插
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = foundNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		newNode->next = *pphead;
		*pphead = newNode;
	}
}
//头删
void SListPopFront(SListNode** pphead)
{
	//1.为空链表时
	//2 有一个及以上节点时
	if (*pphead == NULL)
		return;
	else
	{
		SListNode* cur = NULL;
		cur = (*pphead)->next;
		free(*pphead);
		*pphead = cur;
	}
}
//查找
SListNode* SListFind(SListNode* phead, SListDataType x)
{
	while (phead)
	{
		if (phead->data == x)
			return phead;
		phead = phead->next;
	}
	return NULL;
}

void SListInsterAfter(SListNode* pos, SListDataType x)
{
	assert(pos);
	SListNode* newNode = foundNode(x);
	newNode->next = (pos)->next;
	(pos)->next = newNode;
}