#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int QDatatype;

typedef struct QNode
{
	struct QNode* next;
	QDatatype data;
}QNode;

typedef struct Queue
{
	struct QNode* head;
	struct QNode* tail;
}Queue;

void QueueInit(Queue* qp);
void QueueDestory(Queue* qp);
void QueuePush(Queue* qp, QDatatype x);
void QueuePop(Queue* qp);
QDatatype QueueFont(Queue* qp);
QDatatype QueueBack(Queue* qp);
int QueueSize(Queue* qp);
bool QueueEmpty(Queue* qp);