#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

#include"queue.h"
typedef char TDataType;
typedef struct TNode
{
	TDataType data;
	struct TNode* left;
	struct TNode* right;
}TNode;

TNode* CreateTree();
void TreeDestory(TNode* proot);
void PreOrder(TNode* root);
void InOrder(TNode* proot);
void PostOrder(TNode* root);
int TreeSize(TNode* root);
int TreeDepth(TNode* root);
int BinaryTreeLevelkSize(TNode* root, int k);
//Æ½ºâ¶þ²æÊ÷
bool IsBalanced(TNode* root, int* depth);
void LevelTraversal(TNode* root, Queue* q);
bool CompleteBinaryTree(TNode* root, Queue* q);