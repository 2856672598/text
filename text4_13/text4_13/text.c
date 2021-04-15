//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Node
//{
//	int data;
//	struct Node* left;/*左子树*/
//	struct Node* right;/*右子树*/
//}Node;
//typedef struct tree
//{
//	Node* root;
//}Tree;
//
////插入
//void Insert(Tree* tree,int value)
//{
//	Node* node = (Node*)malloc(sizeof(Node));
//	if (!node)
//		return;
//	node->left = NULL;
//	node->right = NULL;
//	node->data = value;
//	if (tree->root == NULL)
//		tree->root = node;
//	else
//	{
//		Node* tmp = tree->root;
//		while (tmp)
//		{
//			if (value > tmp->data)
//			{
//				if (tmp->right == NULL)
//				{
//					tmp->right = node;
//					return;
//				}
//				else
//					tmp = tmp->right;
//			}
//			else
//			{
//				if (tmp->left == NULL)
//				{
//					tmp->left = node;
//					return;
//				}
//				else
//					tmp = tmp->left;
//			}
//		}
//	}
//}
////先序
//void PreOrder(Node* node)
//{
//	if (node == NULL)
//		return;
//	printf("%d ", node->data);
//	PreOrder(node->left);
//	PreOrder(node->right);
//}
////中序
//void InOrder(Node* node)
//{
//	if (node == NULL)
//		return;
//	InOrder(node->left);
//	printf("%d ", node->data);
//	InOrder(node->right);
//}
////后续
//void PostOrder(Node* node)
//{
//	if (node)
//	{
//		PostOrder(node->left);
//		PostOrder(node->right);
//		printf("%d ", node->data);
//	}
//}
//int main()
//{
//	int arr[] = { 5,3,1,9,6,2 };
//	Tree tree;
//	tree.root = NULL;
//	for (int i = 0; i < 6; i++)
//	{
//		Insert(&tree, arr[i]);
//	}
//	printf("先序遍历：");
//	PreOrder(tree.root);
//	printf("\n中序遍历：");
//	InOrder(tree.root);
//	printf("\n后序遍历：");
//	PostOrder(tree.root);
//	return 0;
//}

////二叉树的前序遍历
////https://leetcode-cn.com/problems/binary-tree-preorder-traversal/submissions/
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//}TreeNode;
//
//void preorder(struct TreeNode* root, int* arr, int* size)
//{
//	if (root == NULL)
//		return;
//	arr[(*size)++] = root->val;
//	preorder(root->left,arr,size);
//	preorder(root->right,arr, size);
//}
//int* preorderTraversal(struct TreeNode* root, int* returnSize)
//{
//	int* arr = malloc(sizeof(int) * 200);
//	*returnSize = 0;
//	preorder(root, arr, returnSize);
//	return arr;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Node
//{
//	int data;
//	struct Node* Left_Child;
//	struct Node* Right_Child;
//}Node;
////Node* Create_Tree(Node* root)
////{
////	int a;
////	printf("请输入节点的信息：");
////	scanf("%d", &a);
////	//判断当前节点是否为空间点
////	if (a == -1)
////		return NULL;
////	else
////	{
////		Node* NewNode = malloc(sizeof(Node));
////		root = NewNode;
////		NewNode->data = a;
////		printf("输入%d的左子树", NewNode->data);
////		root->Left_Child = Create_Tree(root->Left_Child);
////		printf("输入%d的右子树", a);
////		root->Right_Child = Create_Tree(root->Right_Child);
////	}
////	return root;
////}
//
//Node* Create_Tree()
//{
//	Node* NewNode = NULL;
//	printf("节点信息：");
//	int a = 0;
//	scanf("%d", &a);
//	if (a == -1)
//		return NULL;
//	else
//	{
//		NewNode = malloc(sizeof(Node));
//		NewNode->data = a;
//		printf("请输入%d的左子树", a);
//		NewNode->Left_Child = Create_Tree();
//		printf("请输入%d的右子树", a);
//		NewNode->Right_Child = Create_Tree();
//	}
//	return NewNode;
//}
////先序遍历
//void preorder(Node* tree)
//{
//	if (tree == NULL)
//		return;
//	printf("%d ", tree->data);
//	preorder(tree->Left_Child);
//	preorder(tree->Right_Child);
//}
//int main()
//{
//	Node* tree = NULL;
//	tree = Create_Tree(tree);
//	preorder(tree);
//	return 0;
//}


////层次遍历
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 20
//typedef struct Node
//{
//	int data;
//	struct Node* Left_Child;
//	struct Node* Right_Child;
//}Node;
//typedef struct Queue
//{
//	Node arr[MAX];
//	int head;
//	int tail;
//}Queue;
//void Init_Queue(Queue* list)
//{
//	list->head = 0;
//	list->tail = 0;
//}
////出队
//Node Pop(Queue* list)
//{
//	return list->arr[list->head++];
//}
//
////入队
//void Push(Queue* list, Node* node)
//{
//	list->arr[list->tail++] = *node;
//}
////判空
///*返回值为1为空，0为非空*/
//int Empty(Queue* list)
//{
//	return list->head == list->tail;
//}
//Node* Creatr_Tree()
//{
//	Node* NewNode = malloc(sizeof(Node));
//	printf("节点信息：");
//	int a = 0;
//	scanf("%d", &a);
//	if (a == 0)
//		return NULL;
//	NewNode->data = a;
//	printf("请输入%d的左子树", a);
//	NewNode->Left_Child = Creatr_Tree();
//	printf("请输入%d的右子树", a);
//	NewNode->Right_Child = Creatr_Tree();
//	return NewNode;
//}
////层次遍历
//void LevelTraversal(Queue* List, Node* tree)
//{
//	Node* tmp = tree;
//	Push(List, tree);
//	while (!Empty(List))
//	{ 
//		//队首出队
//		Node node = Pop(List);
//		printf("%d", node.data);
//		//node的左孩子右孩子入队
//		if (node.Left_Child)
//			Push(List, node.Left_Child);
//		if (node.Right_Child)
//			Push(List, node.Right_Child);
//	}
//}
//int main()
//{
//	Queue List;
//	Node* Tree = Creatr_Tree();
//	Init_Queue(&List);
//	LevelTraversal(&List, Tree);
//	return 0;
//}

////中序遍历
////https://leetcode-cn.com/problems/binary-tree-inorder-traversal/
//#include<stdio.h>
//#include<stdlib.h>
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//void InOrder(struct TreeNode* root, int* arr, int* size)
//{
//	if (root == NULL)
//		return;
//	//左中又
//	InOrder(root->left, arr, size);
//	arr[(*size)++] = root->val;
//	InOrder(root->right, arr, size);
//}
//int* inorderTraversal(struct TreeNode* root, int* returnSize)
//{
//	int* arr = malloc(sizeof(int) * 100);
//	*returnSize = 0;
//	InOrder(root,arr, returnSize);
//	return arr;
//}


//后序遍历
//https://leetcode-cn.com/problems/binary-tree-postorder-traversal/
#include<stdio.h>
#include<stdlib.h>
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};
void PostOrder(struct TreeNode* root, int* arr, int* size)
{
	if (root == NULL)
		return;
	//后序---左右根
	PostOrder(root->left, arr, size);
	PostOrder(root->right, arr, size);
	arr[(*size)++] = root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize)
{
	int* arr = malloc(sizeof(int) * 100);
	*returnSize = 0;
	PostOrder(root, arr, returnSize);
	return arr;
}