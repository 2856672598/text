#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;

}SListNode;
//Œ≤≤Â
void SListPushBack(SListNode** pphead, SListDataType x);
//Œ≤…æ
void SListPopBack(SListNode** pphead);
//Õ∑≤Â
void SListPushFront(SListNode** pphead, SListDataType x);
//Õ∑…æ
void SListPopFront(SListNode** pphead);
//≤È’“
SListNode* SListFind(SListNode* phead, SListDataType X);

void SListInsterAfter(SListNode* pphead, SListDataType x);
void Print(SListNode** pphead);