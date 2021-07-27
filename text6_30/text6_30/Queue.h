#pragma once
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<stdio.h>
typedef struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode;

typedef struct QueueNode
{
	TreeNode* data;
	struct QueueNode* next;
}QueueNode;

typedef QueueNode DataType;

typedef struct Queue
{
	DataType* Queue;
	DataType* Tail;
}Queue;
void QueueInit(Queue* PQ);
void QueuePush(Queue* PQ, TreeNode* data);
void QueuePop(Queue* PQ);
bool QueueEmpty(Queue* PQ);
TreeNode* QueueTop(Queue* PQ);
void QueueDestory(Queue* PQ);