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
}Stack;

void StackDestory(Stack* phead);
bool StackEmpty(Stack* phead);
void StackPush(Stack** phead, Seat pos);
void SrtackPop(Stack** phead);
DataType StackTop(Stack* phead);