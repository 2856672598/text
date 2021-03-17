#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#define MAX 5
typedef int DataType;

typedef struct SqStack
{
	DataType* Data;
	DataType top;
	int StackSize;
}SqStack;

void InitStack(SqStack* head);
void Push(SqStack*head, DataType n);
void Pop(SqStack*head);
void Print(SqStack*head);
bool StackFull(SqStack*head);
bool StackEmpty(SqStack*head);
void DestoryStack(SqStack*head);