#include"list.h"

ListNode* ListNodeInit()
{
	ListNode*  newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
	{
		printf("malloc error\n");
		exit(-1);
	}
	newnode->next = newnode->prev = newnode;
	return newnode;
}

void ListPushBack(ListNode* phead, ListDateType val)
{
	assert(phead);
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
		exit(-1);
	newnode->val = val;
	ListNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}

void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	tail->prev->next = phead;
	phead->prev = tail->prev;
	free(tail);
}

void ListPushFront(ListNode* phead, ListDateType val)
{
	assert(phead);
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	assert(newnode);
	newnode->val = val;
	newnode->next = phead->next;
	newnode->next->prev = newnode;
	newnode->prev = phead;
	phead->next = newnode;
}

void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* next = phead->next;
	phead->next = next->next;
	next->next->prev = phead;
	free(next);
}