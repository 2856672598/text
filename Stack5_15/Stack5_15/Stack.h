#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int Datatype;

typedef struct stack
{
	Datatype* a;
	int top;
	int capacity;
}ST;
void StackInit(ST* ps);
void StackDestory(ST* ps);
void StackPush(ST* ps, Datatype x);
void StackPop(ST* ps);
Datatype StackTop(ST* ps);
int StackSize(ST* ps);
bool StackEmpty(ST* ps);