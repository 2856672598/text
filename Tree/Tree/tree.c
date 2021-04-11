//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define MAX 100
//typedef char TElemType;
//typedef struct Node
//{
//	TElemType data;
//	int parent;
//}Node;
//
//typedef struct Tree
//{
//	Node nodes[MAX];
//	int size;
//}Tree;
//void Init(struct Tree * Ptree, int size)
//{
//	Ptree->size = size;
//	printf("输入节点值及双亲节点在数组中的下标\n");
//	for (int i = 0; i < size; i++)
//	{
//		getchar();
//		scanf("%c %d", &Ptree->nodes[i].data, &Ptree->nodes[i].parent);
//	}
//}
//void Print(struct Tree tree)
//{
//	for (int i = 0; i < tree.size; i++)
//	{
//		printf("%d  %c  %d  %c\n", i, tree.nodes[i].data, tree.nodes[i].parent, tree.nodes[tree.nodes[i].parent].data);
//	}
//}
////查找双亲节点
//int Find(Tree tree, TElemType x)
//{
//	for (int i = 0; i < tree.size; i++)
//	{
//		if (tree.nodes[i].data == x)
//			return tree.nodes[i].parent;
//	}
//	return 0;
//}
//void text()
//{
//	struct Tree tree;
//	int size = 0;
//	printf("请输入节点数\n");
//	scanf("%d", &size);
//	Init(&tree, size);
//	//Print(tree);
//	char a;
//	getchar();
//	scanf("%c", &a);
//	int len = Find(tree, a);
//	printf("%c的双亲为%c,存储位置下标为%d\n", a, tree.nodes[len].data, len);
//}
//
//int main()
//{
//	text();
//	return 0;
//}



//孩子表示法
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
#include<stdlib.h>
#define MAX 100
typedef char TElem;
//孩子节点
typedef struct Child
{
	struct Child* next;
	int pos;
}Child;
//根节点
typedef struct Tree
{
	TElem data;
	struct Child* child;//孩子头节点
}CTRoot;

//数据
typedef struct
{
	CTRoot nodes[MAX];
	int size;//节点数
}CTree;


void Init(CTree* node, int size)
{
	node->size = size;
	for (int i = 0; i < size; i++)
	{
		printf("请输入第%d节点的数据\n", i + 1);
		getchar();
		scanf("%c", &(node->nodes[i].data));
		node->nodes[i].child = malloc(sizeof(Child));
		node->nodes[i].child->next = NULL;

		printf("请输入%c的孩子节点数量\n", node->nodes[i].data);
		int count = 0;
		scanf("%d", &count);
		if (count != 0)
		{
			Child* p = node->nodes[i].child;
			for (int j = 0; j < count; j++)
			{
				Child * New = malloc(sizeof(Child));
				New->next = NULL;
				printf("请输入%d个在顺序表中的位置\n", j + 1);
				scanf("%d", &New->pos);
				p->next = New;
				p = New;
			}
		}
	}
}

void Find(CTree node, TElem x)
{
	int flag = 0;
	for (int i = 0; i < node.size; i++)
	{
		if (node.nodes[i].data == x)
		{
			Child* p = node.nodes[i].child->next;
			while (p)
			{
				flag = 1;
				printf("%c ", node.nodes[p->pos].data);
				p = p->next;
			}
			if (flag == 0)
				printf("%c为叶子节点\n", x);
			return;
		}
	}
	printf("%c节点不存在\n", x);
}
//刷新缓冲区
void MyFflush()
{
	int ch = 0;
	while (ch = getchar() != '\n'&&ch != EOF);
}
void text()
{
	CTree node;
	int size = 0;
	printf("请输入节点总数\n");
	scanf("%d", &size);
	Init(&node, size);
	while (1)
	{
		char ch;
		printf("\n输入要查找子节点\n");
		MyFflush();
		scanf("%c", &ch);
		Find(node, ch);
	}
}

int main()
{
	text();
	return 0;
}