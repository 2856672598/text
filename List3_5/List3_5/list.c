#include"list.h"
struct ListNode* BuyListNode(DataType x)
{
	ListNode* newNode = malloc(sizeof(ListNode));
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->Data = x;
	return newNode;
}
void ListPushBack(ListNode*phead, DataType x)
{
	ListNode* newNode = BuyListNode(x);
	ListNode* tail = phead->prev;

	tail->next = newNode;
	newNode->prev = tail;
	newNode->next = phead;
	phead->prev = newNode;
}
void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	tail = tail->prev;
	free(tail->next);
	tail->next = phead;
	phead->prev = tail;
}
void ListPushFront(ListNode* phead, DataType x)
{
	ListNode* newNode = BuyListNode(x);
	ListNode* next = phead->next;
	phead->next = newNode;
	newNode->prev = phead;
	newNode->next = next;
	next->prev = newNode;
}
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* delNext = phead->next->next;
	free(phead->next);
	phead->next = delNext;
	delNext->prev = phead;
}
void ListPrint(ListNode* phead)
{
	ListNode* head = phead->next;
	while (head != phead)
	{
		printf("%d ", head->Data);
		head = head->next;
	}
}
ListNode* ListInit()
{
	ListNode* head;
	head = BuyListNode(0);
	head->next = head;
	head->prev = head;
	return head;
}

