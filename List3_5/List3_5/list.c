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
	//assert(phead);
	//ListNode* newNode = BuyListNode(x);
	//ListNode* tail = phead->prev;

	//tail->next = newNode;
	//newNode->prev = tail;
	//newNode->next = phead;
	//phead->prev = newNode;
	ListInsert(phead, x);
}
void ListPopBack(ListNode* phead)
{
	//assert(phead);
	//assert(phead->next != phead);
	//ListNode* tail = phead->prev;
	//tail = tail->prev;
	//free(tail->next);
	//tail->next = phead;
	//phead->prev = tail;
	ListErase(phead->prev);
}
void ListPushFront(ListNode* phead, DataType x)
{
	//assert(phead);
	//ListNode* newNode = BuyListNode(x);
	//ListNode* next = phead->next;
	//phead->next = newNode;
	//newNode->prev = phead;
	//newNode->next = next;
	//next->prev = newNode;
	ListInsert(phead->next, x);
}
void ListPopFront(ListNode* phead)
{
	//assert(phead);
	//assert(phead->next != phead);
	//ListNode* delNext = phead->next->next;
	//free(phead->next);
	//phead->next = delNext;
	//delNext->prev = phead;
	ListErase(phead->next);
}
void ListPrint(ListNode* phead)
{
	assert(phead);
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
void ListClear(ListNode* phead)
{
	assert(phead);
	//清空链表，不会清空头结点
	ListNode* head = phead->next;
	while (head != phead)
	{
		ListNode* next = head->next;
		free(head);
		head = next;
	}
	phead->next = phead;
	phead->prev = phead;
}
void ListDestory(ListNode** pphead)
{
	assert(*pphead);
	ListClear(*pphead);
	free(*pphead);
	*pphead = NULL;
}

struct ListNode* ListFind(ListNode* phead, DataType x)
{
	assert(phead);
	ListNode* head = phead->next;
	while (head->next != phead)
	{
		if (head->Data == x)
			return head;
		head = head->next;
	}
	return NULL;
}
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode*posPrev = pos->prev;
	ListNode*posNext = pos->next;
	posPrev->next = posNext;
	posNext->prev = posPrev;
}
void ListInsert(ListNode* pos, DataType x)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* newNode = BuyListNode(x);
	posPrev->next = newNode;
	newNode->prev = posPrev;
	newNode->next = pos;
	pos->prev = newNode;
}
void ListModify(ListNode* pos, DataType x)
{
	pos->Data = x;
}

