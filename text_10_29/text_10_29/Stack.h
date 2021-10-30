#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
typedef int STNodeType;
typedef struct Stack
{
	STNodeType* _a;
	int _top;
	int _capacity;
}ST;

void Init(ST* ps);
void Push(ST* ps, STNodeType val);
void Pop(ST* Ps);
bool Empty(ST* ps);
STNodeType Top(ST* ps);