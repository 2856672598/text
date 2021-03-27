#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int Data;

typedef struct DataNode
{
	Data x;
	struct DataNode* next;
}DataNode;
typedef struct LinkStack
{
	struct DataNode* s;
}LinkStack;

LinkStack* InIn();
void PushStack(DataNode** head, LinkStack* phead, Data x);
void Print(DataNode* head);
//void Print(LinkStack* head);