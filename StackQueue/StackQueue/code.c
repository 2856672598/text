
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct
{
	int* _a;
	int k;
	int head;
	int tail;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k)
{
	MyCircularQueue* cq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	cq->_a = (int*)malloc(sizeof(int)*(k + 1));
	cq->k = k;
	cq->tail = cq->head = 0;
	return cq;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
	if (obj->head == obj->tail)
		return true;
	return false;
}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
	if ((obj->tail + 1) % (obj->k + 1) == obj->head)
		return true;
	return false;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
	if (myCircularQueueIsFull(obj))
	{
		//表示满了无法插入
		return false;
	}
	obj->_a[obj->tail] = value;
	obj->tail++;
	obj->tail %= (obj->k + 1);
	return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
		return false;//队列为空
	obj->head++;
	obj->head %= (obj->k + 1);
	return true;
}

int myCircularQueueFront(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
		return -1;
	return obj->_a[obj->head];
}

int myCircularQueueRear(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
		return -1;
	int i = obj->tail;
	if (i == 0)
	{
		i = obj->k;
	}
	else
		i -= 1;
	return obj->_a[i];
}

void myCircularQueueFree(MyCircularQueue* obj)
{
	free(obj->_a);
	obj->_a = NULL;
	obj->tail = obj->head = 0;
}