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

////链式栈
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<stdbool.h>
//typedef int DataType;
//typedef struct Node
//{
//	DataType data;
//	struct Node* next;
//}Node;
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
//	printf("##################################\n");
//	printf("####1.PUSH              2.POP#####\n");
//	printf("####3.PRINT            0.EXIT#####\n");
//	printf("############4.LENGTH #############\n");
//}
//Node* BuyNode(DataType data)
//{
//	Node* NewNode = malloc(sizeof(Node));
//	if (NewNode)
//	{
//		NewNode->data = data;
//		NewNode->next = NULL;
//	}
//	return NewNode;
//}
///*入栈采用头插法*/
//void Push(Node** list, DataType data)
//{
//	Node* NewNode = BuyNode(data);
//	assert(NewNode);
//	if (*list == NULL)
//	{
//		*list = NewNode;
//		return;
//	}
//	NewNode->next = *list;
//	*list = NewNode;
//	printf("入栈成功\n");
//}
////出栈
//void Pop(Node** list)
//{
//	if (*list)
//	{
//		Node* next = (*list)->next;
//		printf("%d出栈成功\n", (*list)->data);
//		free(*list);
//		*list = next;
//		return;
//	}
//	printf("出栈失败\n");
//}
//void Print(Node* list)
//{
//	if (list)
//	{
//		Node* cur = list;
//		while (cur)
//		{
//			printf("%d ", cur->data);
//			cur = cur->next;
//		}
//		printf("\n");
//		return;
//	}
//	printf("栈空\n");
//}
//int Length(Node* list)
//{
//	int size = 0;
//	while (list)
//	{
//		size++;
//		list = list->next;
//	}
//	return size;
//}
//void text()
//{
//	Node* Stack = NULL;
//	int data, input, size;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case EXIT:
//			printf("退出\n");
//			return;
//		case PUSH:
//			printf("输入数据:");
//			scanf("%d", &data);
//			Push(&Stack, data);
//			break;
//		case POP:
//			Pop(&Stack);
//			break;
//		case PRINT:
//			Print(Stack);
//			break;
//		case LENGTH:
//			size = Length(Stack);
//			printf("栈中共有%d个节点\n", size);
//			break;
//		default:
//			printf("输入错误");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	text();
//	return 0;
//}

//带头双向循环链表增删查改
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	DataType data;
}ListNode;
enum
{
	EXIT,
	PUSHBACK,
	PUSHFRONT,
	POPBACK,
	POPFRONT,
	FIND,
	INSERT,
	PRINT,
	ERASE
};
void menu()
{
	printf("************************************\n");
	printf("****1.PushBack       2.PushFront****\n");
	printf("****3.PopBack         4.PopFront****\n");
	printf("****5.Find              6.Insert****\n");
	printf("****7.Print              8.Erase****\n");
	printf("************ 0.EXIT ****************\n");
}
ListNode* BuyListNode(DataType x)
{
	ListNode* newnode = malloc(sizeof(ListNode));
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;
	return newnode;
}
ListNode* ListInit()
{
	ListNode* newnode = BuyListNode(0);
	assert(newnode);
	newnode->next = newnode;
	newnode->prev = newnode;
	return newnode;
}
//指定插入
void ListInsert(ListNode* pos, DataType x)
{
	/*指定位置的后面插入*/
	ListNode* newnode = BuyListNode(x);
	ListNode* next = pos->next;
	newnode->next = next;
	next->prev = newnode;
	pos->next = newnode;
	newnode->prev = pos;
	printf("添加成功\n");
}
//指定删除
void ListErase(ListNode* pos)
{
	if (pos == NULL)
	{
		printf("链表中不存在此数据\n");
		return;
	}
	if (pos->next == pos)
	{
		//输入的位置是哨兵节点
		printf("此位置不可以删除(链表为空)\n");
		return;
	}
	ListNode* next = pos->next;
	ListNode* prev = pos->prev;
	prev->next = next;
	next->prev = prev;
	printf("删除成功\n");
}
void ListPushBack(ListNode* phead, DataType x)
{
	//ListNode* tail = phead->prev;
	//ListNode* next = BuyListNode(x);
	//tail->next = next;
	//next->prev = tail;
	//next->next = phead;
	//phead->prev = next;
	//printf("添加成功\n");

	ListInsert(phead->prev, x);
}
void ListPushFront(ListNode* phead, DataType x)
{
	//ListNode* first = BuyListNode(x);
	//ListNode* next = phead->next;
	//first->prev = phead;
	//first->next = next;
	//next->prev = first;
	//phead->next = first;
	//printf("头插成功\n");

	ListInsert(phead, x);
}
void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	if (cur == phead)
	{
		printf("链表为空\n");
		return;
	}
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPopBack(ListNode* phead)
{
	//assert(phead);
	//if (phead->next == phead)
	//{
	//	printf("链表为空\n");
	//	return;
	//}
	//ListNode* tail = phead->prev;
	//tail->prev->next = phead;
	//phead->prev = tail->prev;
	//free(tail);
	//printf("尾删成功\n");

	ListErase(phead->prev);
}
void ListPopFront(ListNode* phead)
{
	//assert(phead);
	////防止头结点被误删
	//if (phead->next == phead)
	//{
	//	printf("链表为空\n");
	//	return;
	//}
	//ListNode* cur = phead->next;
	//phead->next = cur->next;
	//cur->next->prev = phead;
	//printf("头删成功\n");
	ListErase(phead->next);
}
ListNode* ListFind(ListNode* phead, DataType x)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}

void ListDestory(ListNode*phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}

void Text()
{
	ListNode* plist = ListInit();
	ListNode* flag = NULL;
	int data, input;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			ListDestory(plist);
			printf("退出\n");
			return;
			break;
		case PUSHBACK:
			printf("请输入数据:");
			scanf("%d", &data);
			ListPushBack(plist, data);
			break;
		case PUSHFRONT:
			printf("请输入数据:");
			scanf("%d", &data);
			ListPushFront(plist, data);
			break;
		case POPBACK:
			ListPopBack(plist);
			break;
		case POPFRONT:
			ListPopFront(plist);
			break;
		case FIND:
			printf("输入要查找的数据:");
			scanf("%d", &data);
			flag = ListFind(plist, data);
			printf("%d的地址为%p\n", data, flag);
			break;
		case INSERT:
			printf("输入要选择插入的位置:");
			scanf("%d", &data);
			flag = ListFind(plist, data);
			if (flag != NULL)
			{
				printf("输入要插入的数据:");
				scanf("%d", &data);
				ListInsert(flag, data);
			}
			else
				printf("%d不存在链表中\n", data);
			break;
		case PRINT:
			ListPrint(plist);
			break;
		case ERASE:
			printf("输入要删除的数据:");
			scanf("%d", &data);
			flag = ListFind(plist, data);
			if (flag != plist)
			{
				//保证删除的节点不是头结点
				//flag可能为NULL
				ListErase(flag);
			}
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);
}
int main()
{
	Text();
	return 0;
}