#pragma once
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef int DataType;

typedef struct SqStack
{
	DataType Data[MAX];
	DataType top;
	int StackSize;
}SqStack;

void InitStack(SqStack* head);
void Push(SqStack*head, DataType n);