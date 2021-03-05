#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	DataType Data;
}ListNode;

void ListPushBack(struct ListNode* phead, DataType x);
struct ListNode* BuyListNode(DataType x);
void ListPopBack(ListNode* phead);
//Í·²å
void ListPushFront(ListNode* phead, DataType x);
void ListPopFront(ListNode* phead);
void ListPrint(ListNode* phead);
ListNode* ListInit();
