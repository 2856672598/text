#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int STNodeType;

typedef struct STack
{
	STNodeType* _a;
	int _top;
	int _capacity;
}ST;


void StackInit(ST* ps);
bool Empty(ST* ps);
void Push(ST* ps, STNodeType val);
void Pop(ST* ps);
STNodeType StackTop(ST* ps);
void Destroy(ST* ps);