#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int NodeType;
typedef struct Node
{
	NodeType Data;
	struct Node* Next;
}Node;
typedef struct LinkedStack
{
	int StackSize;
	struct Node* top;//’ª∂•÷∏’Î
}LinkedStack;

void Init(LinkedStack* head);
void Push(LinkedStack* head, NodeType n);
void Print(LinkedStack* head);
void Pop(LinkedStack* head);
void Destory(LinkedStack* head);