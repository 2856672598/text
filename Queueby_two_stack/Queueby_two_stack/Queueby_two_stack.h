#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int Datatype;
typedef struct SNode
{
	Datatype data;
	struct SNode* next;
}SNode;
typedef struct Stack
{
	SNode* top;
	SNode* bottom;
}Stack;

typedef struct Queue
{
	Stack* Stack1;
	Stack* Stack2;
}Queue;

void StackInit(Stack* ps);
void StackDestory(Stack* ps);
void StackPush(Stack* ps, Datatype x);
void StackPop(Stack* ps);
void QueueInit(Queue* pq);
void QueuePush(Queue* pq, Datatype x);
void QueuePop(Queue* pq);
Datatype QueueTop(Queue* qp);