#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int sz;
	int capacity;
}SL;
//初始化
void SLInit(SL*ps);
//尾插
void SLPushBack(SL*ps, SLDataType x);
//尾删
void SLPopBack(SL* ps, int x);
//头插
void SLPushFront(SL* ps, SLDataType x);
//头删
void SLPopFront(SL* PS, int x);

//随机插入
void SLInsert(SL* ps, int pos, SLDataType x);
//查找
int SLFind(SL* ps, SLDataType x);
//指定删除 pos 删除的位置
void SLErase(SL* ps, int pos);

//扩容
void SLAddCapacity(SL* ps);

void SLPrint(SL* ps);