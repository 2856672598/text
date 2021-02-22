#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int sz;
	int capacity;
}SL;

void SLPushBack(SL*ps, SLDataType x);

void SLInit(SL*ps);

//À©ÈÝ
void SLAddCapacity(SL* ps);

void SLPrint(SL* ps);