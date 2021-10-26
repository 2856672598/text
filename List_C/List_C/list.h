#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int ListDateType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	ListDateType val;
}ListNode;

ListNode* ListNodeInit();
void ListPushBack(ListNode* phead, ListDateType val);
void ListPopBack(ListNode* phead);
void ListPrint(ListNode* phead);

void ListPushFront(ListNode* phead, ListDateType val);
void ListPopFront(ListNode* phead);