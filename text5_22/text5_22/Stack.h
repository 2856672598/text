#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>
typedef char SDataType;
typedef struct SNode
{
	struct SNode* next;
	SDataType data;
}SNode;
typedef struct Stack
{
	struct SNode* head;
}Stack;
void StackInit(Stack* ps);
void StackDestory(Stack* ps);
void StackPush(Stack* ps, SDataType x);
void StackPop(Stack* ps);