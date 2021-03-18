#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 2
typedef int DataType;
typedef struct Queue
{
	DataType* queue;
	int frant;
	int tail;
	int queueSize;
}Queue;
void Init(Queue* head);
bool Add(Queue* head, DataType n);
void Push(Queue* head, DataType n);
bool Pop(Queue* head);
bool Print(Queue* head);
void ClearQueue(Queue* head);
void Destory(Queue* head);
//获取队列头的数据
void GetHead(Queue* head);
//队列长度
int Get(Queue* head);