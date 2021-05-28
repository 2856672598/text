#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef char TDataType;

typedef struct BTNode
{
	struct BTNode* left;
	struct BTNode* right;
	TDataType data;
}BTNode;


// 前序 中序 后序遍历
void PrevOrder(BTNode* root);
void InOrder(BTNode* root);
void PostOrder(BTNode* root);
// 节点个数
int TreeSize(BTNode* root);
// 叶子节点的个数
int TreeLeafSize(BTNode* root);
// 层序遍历
void LevelOrder(BTNode* root);
//销毁树
void TreeDestory(BTNode* root);