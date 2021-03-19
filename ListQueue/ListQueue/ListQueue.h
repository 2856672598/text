#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int DataType;
typedef struct Queue
{
	DataType Data;
	struct Queue* next;
}Queue;

//Queue* Init();
Queue* Add(DataType n);
void Push(Queue** head, DataType n);
void Pop(Queue** head);
void Print(Queue* head);
void Destory(Queue** head);