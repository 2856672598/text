#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
typedef char DataType;

typedef struct Child
{
	int child;//存放的是下标  ---儿子的下标
	struct Child* next;
}Child;

//表结构
typedef struct CTbox
{
	DataType data;//位置下标
	Child* FistChild;//第一个孩子的头节点
}CTbox;

//树结构
typedef struct CTree
{
	int size;//节点数
	CTbox nodes[MAX];
}CTree;
void Init(CTree* ctree, int size)
{
	ctree->size = size;
	for (int i = 0; i < size; i++)
	{
		printf("输入第%d个节点的数值", i + 1);
		getchar();
		scanf("%c", &ctree->nodes[i].data);
		printf("请输入%c孩子节点的数量\n", ctree->nodes[i].data);
		int count = 0;
		scanf("%d", &count);
		Child*tail = ctree->nodes[i].FistChild = NULL;
		for (int j = 1; j <= count; j++)
		{
			Child * NewNode = malloc(sizeof(Child));
			NewNode->next = NULL;
			printf("请输入%c的第%d个孩子节点所在的位置\n", ctree->nodes[i].data, j);
			scanf("%d", &NewNode->child);
			if (ctree->nodes[i].FistChild == NULL)
			{
				ctree->nodes[i].FistChild = NewNode;
				tail = NewNode;
			}
			else
			{
				tail->next = NewNode;
				tail = NewNode;
			}
		}
	}
}

void Find(CTree ctree, DataType x)
{
	for (int i = 0; i < ctree.size; i++)
	{
		if (ctree.nodes[i].data == x)
		{
			Child* p = ctree.nodes[i].FistChild;
			while (p)
			{
				printf("%c ", p->child);
				p = p->next;
			}
		}
	}
}

void Print(CTree ctree)
{
	for (int i = 0; i < ctree.size; i++)
	{
		printf("父节点：%c\n", ctree.nodes[i].data);
		printf("子节点为：");
		Child* tmp = ctree.nodes[i].FistChild;
		if (tmp)
		{
			while (tmp)
			{
				printf("%c ", ctree.nodes[tmp->child].data);
				tmp = tmp->next;
			}
		}
		else
			printf("%c为叶子节点", ctree.nodes[i].data);
		printf("\n");
	}
}
void text()
{
	CTree node;
	int size = 0;
	printf("输入节点数\n");
	scanf("%d", &size);
	Init(&node, size);
	Print(node);
	//Find(node, 'E');
}
int main()
{
	text();
	return 0;
}