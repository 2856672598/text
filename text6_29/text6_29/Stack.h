#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
typedef struct Seat
{
	int row;
	int col;
}Seat;
typedef Seat DataType;

typedef struct Node
{
	DataType data;
	struct Node* next;
}Node;

typedef struct Stack
{
	Node* head;
}Stack;

void StackInit(Stack* St);
void StackPush(Stack* ST, DataType value);
void StackPop(Stack* ST);
void StackDestory(Stack* ST);
bool StackEmpty(Stack* ST);
int StackSize(Stack* ST);
void StackCopy(Stack* source, Stack* target);
DataType StackTop(Stack* phead);