#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int Datatype;
typedef struct Node
{
	Datatype data;
	struct Node* next;
}Node;

typedef struct Queue
{
	Node* head;
	Node* tail;
}Queue;

typedef struct Stack
{
	Queue* Queue1;
	Queue* Queue2;
}Stack;

enum 
{
	EXIT,
	PUSH,
	POP,
	STACKTOP
};
void menu();
void QueueInit(Queue* pq);
void QueueDestory(Queue* qp);
void QueuePush(Queue* qp, Datatype x);
void QueuePop(Queue*qp);
Datatype QueueTop(Queue*qp);
Datatype QueueTail(Queue*qp);
bool QueueEmpty(Queue* pq);
Datatype StackTop(Stack* qp);
void StackInit(Stack* ps);
void StackPush(Stack* ps, Datatype x);
void StackPop(Stack* ps);
void StackDestory(Stack*ps);