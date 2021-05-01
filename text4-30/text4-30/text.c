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

////66. 加一
////https://leetcode-cn.com/problems/plus-one/
//#include<stdio.h>
//#include<stdlib.h>
//int* plusOne(int* digits, int digitsSize, int* returnSize)
//{
//	int* arr = malloc(sizeof(int)*(digitsSize + 1);
//	int flag = 1;
//	while (digitsSize-- > 0)
//	{
//		arr[*returnSize] = digits[digitsSize] + flag;
//		if (arr[*returnSize] > 9)
//			arr[*returnSize] %= 10;
//		else
//			flag = 0;
//		(*returnSize)++;
//	}
//	if (flag == 1)
//	{
//		arr[*returnSize] = 1;
//		*(returnSize) += 1;
//	}
//	int left = 0;
//	int right = (*returnSize) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	return arr;
//}
//int main()
//{
//	int arr[] = { 9,9 };
//	int size = 0;
//	int * arr1 = plusOne(arr, 2, &size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}

////面试题 17.04. 消失的数字
////https://leetcode-cn.com/problems/missing-number-lcci/
//#include<stdio.h>
//int missingNumber(int* nums, int numsSize)
//{
//	int sum = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		sum += nums[i];
//	}
//	int add = (numsSize * (numsSize + 1)) / 2;
//	return add - sum;
//}
//int main()
//{
//	int arr[] = { 0, 1 };
//	int flag = missingNumber(arr, 2);
//	printf("缺失的数字为%d", flag);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 10
typedef int DataType;
typedef struct SeqList
{
	DataType data[MAX];
	int size;
}SL;
enum menu
{
	EXIT,
	POP,
	PUSH,
	FIND,
	MODIFY,
	PRINT
};
void Init(SL* s)
{
	s->size = 0;
	memset(s->data, 0, sizeof(DataType)*MAX);
}
void menu()
{
	printf("*******************************\n");
	printf("***1.Pop             2. Push***\n");
	printf("***3.Find   0.exit  4.Modify***\n");
	printf("************5.Print************\n");
}
bool Full(SL* s)
{
	if (s->size >= MAX)
		return true;
	else
		return false;
}
void Push(SL*s, DataType data)
{
	if (!Full(s))
	{
		s->data[s->size] = data;
		s->size++;
	}
	else
		printf("空间已满\n");
}
bool Pop(SL*s, int x)
{
	/*指定删除x为下标*/
	if (x > s->size)
		return false;
	for (int i = x; i < s->size-1; i++)
	{
		s->data[i] = s->data[i + 1];
	}
	s->size--;
	return true;
}
bool Find(SL s,DataType data)
{
	/*找到了返回下标 未找到返回-1*/
	int flag = 0;
	for (int i = 0; i < s.size; i++)
	{
		if (s.data[i] == data)
		{
			printf("下标为%d ", i);
			flag++;
		}
	}
	printf("\n");
	if (!flag)
		return false;
	return true;
}
void Print(SL* s)
{
	for (int i = 0; i < s->size; i++)
	{
		printf("%d ", s->data[i]);
	}
	printf("\n");
}
void Modify(SL* s, int x, DataType data)
{
	/*x为修改的下标*/
	if (s->size >= x)
	{
		s->data[x] = data;
	}
	else
		printf("修改失败下标不合法\n");
}
void text1()
{
	SL s;
	Init(&s);
	for (int i = 0; i < 5; i++)
	{
		Push(&s, i);
	}
	Print(&s);
	printf("输入要修改数据的下标");
	int x, data;
	scanf("%d", &x);
	printf("输入修改后的数据:");
	scanf("%d", &data);
	Modify(&s, x, data);

	Print(&s);
	printf("输入要删除的数据:");
	int pop;
	scanf("%d", &pop);
	Pop(&s, pop);
	Print(&s);
}
void text2()
{
	int input;
	SL s;
	Init(&s);
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("退出\n");
			break;
		case POP:
			printf("输入要删除的数据下标:");
			int pop;
			scanf("%d", &pop);
			if (Pop(&s, pop))
				printf("删除成功\n");
			else
				printf("删除失败，下标不合法\n");
			break;
		case PUSH:
			for (int i = 0; i < 5; i++)
			{
				Push(&s, i);
			}
			printf("\n添加成功剩余%d个空间\n", MAX - s.size);
			break;
		case FIND:
			printf("请输入要询的数据:");
			int find = 0;
			scanf("%d", &find);
			Find(s, find);
			break;
		case MODIFY:
			printf("输入要修改的数据下标和修改后的数据:");
			int modify, data;
			scanf("%d %d", &modify, &data);
			Modify(&s, modify, data);
			break;
		case PRINT:
			Print(&s);
			break;
		default:
			printf("输入错误，重新输出:");
			break;
		}
	} while (input);
}
int main()
{
	text2();
	return 0;
}