#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#define MAX 5
typedef struct Data
{
	int left;
	int right;
}Data;

typedef Data DataType;

typedef struct Stack
{
	DataType* Data;
	int top;
	int StackSize;
}ST;

void InitStack(ST* head);
bool Capacity(ST* head);
void StackPush(ST* head, int left, int right);
void StackPop(ST* head);
Data StackTop(ST* head);
bool StackFull(ST* head);
bool StackEmpty(ST* head);
void DestoryStack(ST* head);