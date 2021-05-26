#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
struct TNode;
typedef struct TNode* QDatatype;

typedef struct QNode
{
	QDatatype data;
	struct QNode* next;
}QNode;

typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
}Queue;
void QueueInit(Queue* pq);
void QueuePush(Queue* pq, QDatatype x);
void QueuePop(Queue* pq);
bool QueueEmpty(Queue* pq);
struct TNode* QueueFront(Queue* pq);
struct TNode* QueueBack(Queue* pq);
void QueueDestory(Queue*pq);