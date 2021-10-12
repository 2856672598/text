#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDateType;

typedef struct SeqList
{
	SLDateType* _date;
	int _size;
	int _capacity;
}SeqList;

void SeqListInit(SeqList* p);
void SeqListCheckCapacity(SeqList* p);
void SeqListPushBack(SeqList* p, SLDateType x);
void SeqListPopBack(SeqList* p);

void SeqListPushFront(SeqList* p, SLDateType x);
void SeqListPopFront(SeqList*p);
void SeqListPrint(SeqList* p);
void SeqListDestory(SeqList* p);

int SeqListFind(SeqList* p, SLDateType x);

void SeqListInsert(SeqList*p, int pos, SLDateType x);

void SeqListErase(SeqList*p, int pos);