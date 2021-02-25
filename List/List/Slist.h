#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;

}SListNode;
void SListPushBack(SListNode** pphead, SListDataType x);
void SListPopBack(SListNode** pphead);
void SListPrint(SListNode** pphead);