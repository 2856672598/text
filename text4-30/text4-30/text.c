#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int fun(int x, int i)
//{
//	int sum = 0;
//	while (i--)
//	{
//		sum = sum * 10 + x;
//	}
//	return sum;
//}
//int main()
//{
//	int a, n, i, s = 0;
//	printf("请输入两个整数a,n: ");
//	scanf("%d%d", &a, &n);
//	for (i = 1; i <= n; i++)
//		s = s + fun(a, i);
//	printf("结果为: %d\n", s);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[30];
//	char arr2[30];
//	gets(arr1);
//	printf("%s ", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Node
//{
//	struct Node* LeftChild;
//	struct Node* RightChild;
//	int data;
//}Node;
//Node* CreateTree()
//{
//	Node* NewNode = malloc(sizeof(Node));
//	NewNode->LeftChild = NewNode->RightChild = NULL;
//	printf("节点信息:");
//	int data;
//	scanf("%d", &data);
//	NewNode->data = data;
//	if (!data)
//		return NULL;
//	printf("%d的左子树", data);
//	NewNode->LeftChild = CreateTree();
//	printf("%d的右子树", data);
//	NewNode->RightChild = CreateTree();
//	return NewNode;
//}
//void Print(Node*node)
//{
//	if (!node)
//		return;
//	printf("%d ", node->data);
//	if (node->LeftChild)
//		Print(node->LeftChild);
//	if (node->RightChild)
//		Print(node->RightChild);
//}
//int main()
//{
//	Node* Tree = CreateTree();
//	Print(Tree);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	int* arr = malloc(sizeof(int)*(digitsSize + 1);
	int flag = 1;
	while (digitsSize-- > 0)
	{
		arr[*returnSize] = digits[digitsSize] + flag;
		if (arr[*returnSize] > 9)
			arr[*returnSize] %= 10;
		else
			flag = 0;
		(*returnSize)++;
	}
	if (flag == 1)
	{
		arr[*returnSize] = 1;
		*(returnSize) += 1;
	}
	int left = 0;
	int right = (*returnSize) - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	return arr;
}
int main()
{
	int arr[] = { 9,9 };
	int size = 0;
	int * arr1 = plusOne(arr, 2, &size);
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr1[i]);
	}
	return 0;
}