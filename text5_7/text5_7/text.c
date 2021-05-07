#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#define MAX 10
//typedef int DataType;
//
//typedef struct Stack
//{
//	DataType arr[MAX];
//	int top;
//}Stack;
//enum 
//{
//	EXIT,
//	PUSH,
//	POP,
//	PRINT,
//	LENGTH
//};
//void menu()
//{
//	printf("###################################################\n");
//	printf("#######0.EXIT                         1.PUSH#######\n");
//	printf("#######2.POP                         3.PRINT#######\n");
//	printf("#################  4.LENGTH  ######################\n");
//}
//Stack* InitStack()
//{
//	Stack* list = malloc(sizeof(Stack));
//	if (list != NULL)
//		list->top = 0;
//	return list;
//}
//bool Full(Stack* list)
//{
//	if (list->top > MAX-1)
//		return true;//满了
//	else
//		return false;
//}
//void Push(Stack* list, DataType data)
//{
//	if (!Full(list))
//	{
//		list->arr[list->top] = data;
//		list->top++;
//		printf("入栈成功\n");
//		return;
//	}
//	printf("空间已满，添加失败\n");
//}
//void Pop(Stack* list)
//{
//	if (list->top > 0)
//	{
//		printf("%d出栈成功\n", list->arr[list->top - 1]);
//		list->top--;
//	}
//	else
//		printf("栈为空\n");
//}
//void Print(Stack* list)
//{
//	int i = 0;
//	if (list->top == 0)
//	{
//		printf("栈为空\n");
//		return;
//	}
//	while (i < list->top)
//	{
//		printf("%d ", list->arr[i]);
//		i++;
//	}
//	printf("\n");
//}
//void text()
//{
//	Stack* list = InitStack();
//	int data, input;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case EXIT:
//			printf("退出");
//			return;
//			break;
//		case PUSH:
//			printf("请输入入栈的数据;");
//			scanf("%d", &data);
//			Push(list, data);
//			break;
//		case POP:
//			Pop(list);
//			break;
//		case PRINT:
//			Print(list);
//			break;
//		case LENGTH:
//			printf("栈中有%d个数据,剩余%d个空间\n", list->top, MAX - (list->top));
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while(input);
//}
//int main()
//{
//	text();
//	return 0;
//}

//链式栈
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int DataType;
typedef struct Node
{
	DataType data;
	struct Node* next;
}Node;
enum
{
	EXIT,
	PUSH,
	POP,
	PRINT,
};
void menu()
{
	printf("##################################\n");
	printf("####1.PUSH              2.POP#####\n");
	printf("####3.PRINT            4.EXIT#####\n");
	printf("##################################\n");
}
Node* BuyNode(DataType data)
{
	Node* NewNode = malloc(sizeof(Node));
	if (NewNode)
	{
		NewNode->data = data;
		NewNode->next = NULL;
	}
	return NewNode;
}
void Push(Node** list, DataType data)
{
	Node* NewNode = BuyNode(data);
	assert(NewNode);
	if (*list == NULL)
	{
		*list = NewNode;
		return;
	}
	NewNode->next = *list;
	*list = NewNode;
	printf("入栈成功\n");
}
//出栈
void Pop(Node** list)
{
	if (*list)
	{
		Node* next = (*list)->next;
		free(*list);
		*list = next;
		printf("出栈成功\n");
		return;
	}
	printf("出栈失败\n");
}
void Print(Node* list)
{
	if (list)
	{
		Node* cur = list;
		while (cur)
		{
			printf("%d ", cur->data);
			cur = cur->next;
		}
		printf("\n");
		return;
	}
	printf("栈空\n");
}
void text()
{
	Node* Stack = NULL;
	int data, input;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case PUSH:
			printf("输入数据:");
			scanf("%d", &data);
			Push(&Stack, data);
			break;
		case POP:
			Pop(&Stack);
			break;
		case PRINT:
			Print(Stack);
			break;
		case EXIT:
			printf("退出\n");
			return;
		default:
			printf("输入错误");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}