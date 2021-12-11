//#include<stdio.h>
//#include<stdlib.h>
//typedef struct BNode
//{
//	char data;
//	struct BNode* lchild;
//	struct BNode* rchild;
//}BiTNode;
//
////先序遍历
//void preorder(BiTNode* root)
//{
//	if (root == NULL)
//		return;
//	printf("%c ", root->data);
//	preorder(root->lchild);
//	preorder(root->rchild);
//}
//
//
////中序遍历
//void inOrder(BiTNode* root)
//{
//	if (root == NULL)
//		return;
//	inOrder(root->lchild);
//	printf("%c ", root->data);
//	inOrder(root->rchild);
//}
//
////后序
//void postOrder(BiTNode* root)
//{
//	if (root == NULL)
//		return;
//	inOrder(root->lchild);
//	inOrder(root->rchild);
//	printf("%c ", root->data);
//}
//
//BiTNode* CreateTree(char* arr, int* pos)
//{
//	if (arr[*pos] == '#')
//	{
//		(*pos)++;
//		return NULL;
//	}
//	BiTNode* newnode = (BiTNode*)malloc(sizeof(BiTNode));
//	newnode->data = arr[(*pos)++];
//	newnode->lchild = CreateTree(arr, pos);
//	newnode->rchild = CreateTree(arr, pos);
//	return newnode;
//}
//
//int maxDepth(BiTNode* root)
//{
//	if (root == NULL)
//		return 0;
//	int left = maxDepth(root->lchild);
//	int right = maxDepth(root->rchild);
//
//	return left < right ? right + 1 : left + 1;
//}
//
//int main()
//{
//	char arr[20];
//	int pos = 0;
//	gets(arr);
//	BiTNode* node = CreateTree(arr, &pos);
//	preorder(node);
//	printf("\n");
//	inOrder(node);
//	printf("\n");
//	postOrder(node);
//
//	printf("\n");
//	int count = maxDepth(node);
//	printf("树的高度为%d\n", count);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	int arr[100];
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	if (arr[0] != arr[1])
//		printf("%d ", 0);
//	for (i = 1; i < k - 1; i++)
//	{
//		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]
//			|| arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
//			printf("%d ", i);
//	}
//
//	if (arr[k - 1] != arr[k - 2])
//		printf("%d ", k - 1);
//	return 0;
//}


