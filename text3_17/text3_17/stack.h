#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
#define MAX 3
typedef int DataType;

typedef struct SqStack
{
	DataType top;
	DataType* Data;
	int stackSize;
}SqStack;
void InitStack(SqStack* head);
void Push(SqStack*head, DataType n);
void Print(SqStack* head);
void Destory(SqStack* head);