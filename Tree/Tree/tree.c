#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 100
typedef char TElemType;
typedef struct Node
{
	TElemType data;
	int parent;
}Node;

typedef struct Tree
{
	Node nodes[MAX];
	int size;
}Tree;
void Init(struct Tree * Ptree, int size)
{
	Ptree->size = size;
	printf("输入节点值及双亲节点在数组中的下标\n");
	for (int i = 0; i < size; i++)
	{
		getchar();
		scanf("%c %d", &Ptree->nodes[i].data, &Ptree->nodes[i].parent);
	}
}
void Print(struct Tree tree)
{
	for (int i = 0; i < tree.size; i++)
	{
		printf("%d  %c  %d  %c\n", i, tree.nodes[i].data, tree.nodes[i].parent, tree.nodes[tree.nodes[i].parent].data);
	}
}
//查找双亲节点
int Find(Tree tree, TElemType x)
{
	for (int i = 0; i < tree.size; i++)
	{
		if (tree.nodes[i].data == x)
			return tree.nodes[i].parent;
	}
	return 0;
}
void text()
{
	struct Tree tree;
	int size = 0;
	printf("请输入节点数\n");
	scanf("%d", &size);
	Init(&tree, size);
	//Print(tree);
	char a;
	getchar();
	scanf("%c", &a);
	int len = Find(tree, a);
	printf("%c的双亲为%c,存储位置下标为%d\n", a, tree.nodes[len].data, len);
}

int main()
{
	text();
	return 0;
}
