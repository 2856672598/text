#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int QDateType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDateType _val;
}QueueNode;

typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;

void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);

void QueuePush(Queue* pq, QDateType val);
void QueuePop(Queue* pq);

QDateType QueueFront(Queue* pq);
QDateType QueueBack(Queue* pq);
bool QueueEmpty(Queue* pq);
size_t QueueSize(Queue* pq);