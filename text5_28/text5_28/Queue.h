#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
struct BTNode;
typedef struct QNode
{
	struct QNode* next;
	struct BTNode* data;
}QNode;
typedef struct Queue
{
	QNode* tail;
	QNode* head;
}Queue;

void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
void QueuePush(Queue* pq, struct BTNode* data);
void QueuePop(Queue* pq);
bool QueueEmpty(Queue* pq);
QNode* QueueFront(Queue* pq);
