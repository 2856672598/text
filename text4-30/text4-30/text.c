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


//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//#define MAX 10
//typedef int DataType;
//typedef struct SeqList
//{
//	DataType data[MAX];
//	int size;
//}SL;
//enum menu
//{
//	EXIT,
//	POP,
//	PUSH,
//	FIND,
//	MODIFY,
//	PRINT,
//	INSERT
//};
//void Init(SL* s)
//{
//	s->size = 0;
//	memset(s->data, 0, sizeof(DataType)*MAX);
//}
//void menu()
//{
//	printf("*******************************\n");
//	printf("***1.Pop             2. Push***\n");
//	printf("***3.Find   0.exit  4.Modify***\n");
//	printf("***5.Print         6.INSERT ****\n");
//}
//bool Full(SL* s)
//{
//	if (s->size >= MAX)
//		return true;
//	else
//		return false;
//}
//void Insert(SL* s, int pos, DataType data)
//{
//	if (!Full(s) && pos <= s->size)
//	{
//		for (int i = s->size; i >= pos; i--)
//		{
//			s->data[i + 1] = s->data[i];
//		}
//		s->size++;
//		s->data[pos] = data;
//		printf("添加成功\n");
//		return;
//	}
//	printf("下标不合法\n");
//}
//void Push(SL*s, DataType data)
//{
//	if (!Full(s))
//	{
//		//s->data[s->size] = data;
//		//s->size++;
//		Insert(s, s->size, data);
//	}
//	else
//		printf("空间已满\n");
//}
//bool Pop(SL*s, int pos)
//{
//	/*指定删除x为下标*/
//	if (s->size == 0)
//		printf("顺序表为空");
//	if (pos >= s->size)
//		return false;
//	for (int i = pos; i < s->size-1; i++)
//	{
//		s->data[i] = s->data[i + 1];
//	}
//	s->size--;
//	return true;
//}
//bool Find(SL s,DataType data)
//{
//	/*找到了返回下标 未找到返回-1*/
//	int flag = 0;
//	for (int i = 0; i < s.size; i++)
//	{
//		if (s.data[i] == data)
//		{
//			printf("下标为%d ", i);
//			flag++;
//		}
//	}
//	printf("\n");
//	if (!flag)
//		return false;
//	return true;
//}
//void Print(SL* s)
//{
//	if (s->size == 0)
//		printf("顺序表为空\n");
//	else
//	{
//		for (int i = 0; i < s->size; i++)
//		{
//			printf("%d ", s->data[i]);
//		}
//		printf("\n");
//	}
//}
//void Modify(SL* s, int pos, DataType data)
//{
//	/*x为修改的下标*/
//	if (s->size >= pos)
//	{
//		s->data[pos] = data;
//	}
//	else
//		printf("修改失败下标不合法\n");
//}
//
//void text2()
//{
//	int input, pos, data;
//	SL s;
//	Init(&s);
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case EXIT:
//			printf("退出\n");
//			break;
//		case POP:
//			printf("输入要删除的数据下标:");
//			scanf("%d", &pos);
//			if (Pop(&s, pos))
//				printf("删除成功\n");
//			else
//				printf("删除失败，下标不合法\n");
//			break;
//		case PUSH:
//			printf("请输入要添加的数据:");
//			scanf("%d", &data);
//			Push(&s, data);
//			printf("剩余%d个空间\n", MAX - s.size);
//			break;
//		case FIND:
//			printf("请输入要询的数据:");
//			scanf("%d", &data);
//			if (!Find(s, data))
//				printf("%d不存在\n", data);
//			break;
//		case MODIFY:
//			printf("输入要修改的数据下标和修改后的数据:");
//			scanf("%d %d", &pos, &data);
//			Modify(&s, pos, data);
//			break;
//		case PRINT:
//			Print(&s);
//			break;
//		case INSERT:
//			printf("请输入要添加位置的下标和数据:");
//			scanf("%d %d", &pos, &data);
//			Insert(&s, pos, data);
//			break;
//		default:
//			printf("输入错误，重新输出:");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	text2();
//	return 0;
//}

////单链表的实现
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef int DataType;
//typedef struct SListNode
//{
//	DataType data;
//	struct SListNode* next;
//}SListNode;
//SListNode* BuySListNode(DataType data)
//{
//	SListNode* NewNode = malloc(sizeof(SListNode));
//	assert(NewNode);
//	NewNode->data = data;
//	NewNode->next = NULL;
//	return NewNode;
//}
//enum 
//{
//	EXIT,
//	POPBACK,
//	POPFRONT,
//	PUSHBACK,
//	PUSHFRONT,
//	FIND,
//	PRINT,
//	ERASE
//};
//void menu()
//{
//	printf("******************************\n");
//	printf("***1.PopBack     2.PopFront***\n");
//	printf("***3.PushBack    4.PushFront***\n");
//	printf("***5.Find       6.Print *******\n");
//	printf("***0.EXIT     7.ERASE     *****\n");
//}
//void SListInsert(SListNode** pos, DataType data)
//{
//	SListNode*next = NULL;
//	if (*pos != NULL)
//	{
//		SListNode*NewNode = BuySListNode(data);
//		next = (*pos)->next;
//		(*pos)->next = NewNode;
//		NewNode->next = next;
//	}
//}
//void PushBack(SListNode**Phead, DataType data)
//{
//	SListNode* NewNode = BuySListNode(data);
//	if (*Phead == NULL)
//	{
//		*Phead = NewNode;
//	}
//	else
//	{
//		//SListNode* cur = *Phead;
//		//while (cur->next != NULL)
//		//{
//		//	cur = cur->next;
//		//}
//		//cur->next = NewNode;
//		//printf("添加成功\n");
//		SListNode* flag = *Phead;
//		while (flag->next != NULL)
//		{
//			flag = flag->next;
//		}
//		SListInsert(&flag, data);
//	}
//}
//
//void PushFront(SListNode** Phead, DataType data)
//{
//	SListNode*NewNode = BuySListNode(data);
//	if (*Phead == NULL)
//		*Phead = NewNode;
//	else
//	{
//		NewNode->next = *Phead;
//		*Phead = NewNode;
//	}
//}
//
//SListNode* SListFind(SListNode* head, DataType data)
//{
//	/*找到了返回该节点的地址，未找到返回NULL*/
//	assert(head);
//	SListNode* flag = head;
//	while (flag != NULL)
//	{
//		if (flag->data == data)
//			return flag;
//		flag = flag->next;
//	}
//	return NULL;
//}
////指定删除
//void Erase(SListNode** Phead, DataType data)
//{
//	//assert(*Phead);
//	if (*Phead == NULL)
//	{
//		printf("链表为空\n");
//		return;
//	}
//	SListNode* flag = *Phead;
//	SListNode* cur = NULL;
//	if ((*Phead)->data == data)
//	{
//		SListNode* next = (*flag).next;
//		*Phead = next;
//		return;
//	}
//	while (flag != NULL)
//	{
//		if (flag->data == data)
//		{
//			SListNode* next = flag->next;
//			cur->next = next;
//			free(flag);
//			return;
//		}
//		cur = flag;
//		flag = flag->next;
//	}
//}
//
////头删
//void PopFront(SListNode** Phead)
//{
//	assert(*Phead);
//	//if ((*Phead)->next == NULL)
//	//{
//	//	free(*Phead);
//	//	*Phead = NULL;
//	//}
//	//SListNode* flag = *Phead;
//	//flag = (*Phead)->next;
//	//free(*Phead);
//	//*Phead = flag;
//	Erase(Phead, (*Phead)->data);
//}
////尾删
//void PopBack(SListNode** Phead)
//{
//	//if (*Phead == NULL)
//	//	return;
//	//if ((*Phead)->next == NULL)
//	//{
//	//	free(*Phead);
//	//}
//	//else
//	//{
//	//	SListNode* tail = *Phead;
//	//	SListNode* cur = *Phead;
//	//	while (cur->next != NULL)
//	//	{
//	//		tail = cur;
//	//		cur = cur->next;
//	//	}
//	//	free(cur);
//	//	tail->next = NULL;
//	//}
//	SListNode* flag = *Phead;
//	while (flag->next != NULL)
//	{
//		flag = flag->next;
//	}
//	Erase(Phead, flag->data);
//}
//void Print(SListNode* Phead)
//{
//	SListNode* flag = Phead;
//	while (flag != NULL)
//	{
//		printf("%d ", flag->data);
//		flag = flag->next;
//	}
//	printf("\n");
//	if (Phead == NULL)
//		printf("链表为空\n");
//}
//void text()
//{
//	int input, data;
//	SListNode* head = NULL;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case EXIT:
//			printf("退出\n");
//			break;
//		case POPBACK:
//			PopBack(&head);
//			break;
//		case POPFRONT:
//			PopFront(&head);
//			break;
//		case PUSHBACK:
//			printf("请输入节点信息：");
//			scanf("%d", &data);
//			PushBack(&head, data);
//			break;
//		case PUSHFRONT:
//			printf("请输入节点信息：");
//			scanf("%d", &data);
//			PushFront(&head, data);
//			break;
//		case FIND:
//			printf("请输入需要查找的节点信息：");
//			scanf("%d", &data);
//			SListNode* pos = SListFind(head, data);
//			if (!pos)
//				printf("%d节点不存在\n", data);
//			else
//				printf("%d节点的地址为%p\n", data, pos);
//			break;
//		case PRINT:
//			Print(head);
//			break;
//		case ERASE:
//			printf("请输入需要删除的节点数据:");
//			scanf("%d", &data);
//			Erase(&head, data);
//			break;
//		default:
//			printf("请重新选择:");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	text();
//	return 0;
//}

////队列
//#include<stdio.h>
//#include<stdbool.h>
//#include<assert.h>
//#define MAX 30
//typedef int DataType;
//typedef struct Node
//{
//	DataType List[MAX];
//	int top, tail;
//}Queue;
//void InitQueue(Queue* list)
//{
//	list->top = 0;
//	list->tail = 0;
//}
//bool FullQueue(Queue* list)
//{
//	if (list->tail < MAX)
//		return false;
//	else
//		return true;
//}
////入队
//void QueuePush(Queue* list, DataType data)
//{
//	if (!FullQueue(list))
//	{
//		//没满
//		list->List[list->tail] = data;
//		list->tail++;
//		printf("添加成功\n");
//		return;
//	}
//	printf("队列已满\n");
//}
////出队
//void QueuePop(Queue* list)
//{
//	if (list->tail <= list->top)
//		printf("队列为空\n");
//	else
//	{
//		//当队列不为空时
//		list->top += 1;
//		printf("出队成功\n");
//	}
//}
//void Print(Queue list)
//{
//	Queue flag = list;
//	while (flag.top < flag.tail)
//	{
//		printf("%d ", flag.List[flag.top]);
//		flag.top++;
//	}
//}
//int SizeNode(const Queue* list)
//{
//	assert(list);
//	int size = list->tail - (list->top);
//	return size;
//}
//void menu()
//{
//	printf("**************************************\n");
//	printf("****1.QueuePoP        2.QueuePush*****\n");
//	printf("*****3.Size                 0.EXIT****\n");
//	printf("************* 4.Print *****************\n");
//}
//enum
//{
//	EXIT,
//	QUEUEPOP,
//	QUEUEPUSH,
//	SIZE,
//	PRINT
//};
//void text()
//{
//	Queue list;
//	InitQueue(&list);
//	for (int i = 0; i < 5; i++)
//	{
//		QueuePush(&list, i);
//	}
//	Print(list);
//	printf("\n");
//	int size = SizeNode(&list);
//	printf("队列中有%d个元素\n", size);
//	QueuePop(&list);
//	QueuePop(&list);
//	QueuePop(&list);
//	QueuePop(&list);
//	size = SizeNode(&list);
//	printf("队列中有%d个元素\n", size);
//	QueuePop(&list);
//	QueuePop(&list);
//	QueuePop(&list);
//	Print(list);
//}
//void text1()
//{
//	int data, input, size;
//	Queue list;
//	InitQueue(&list);
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case EXIT:
//			printf("退出\n");
//			break;
//		case QUEUEPOP:
//			QueuePop(&list);
//			break;
//		case QUEUEPUSH:
//			printf("请输入数据:");
//			scanf("%d", &data);
//			QueuePush(&list, data);
//			break;
//		case SIZE:
//			size = SizeNode(&list);
//			printf("队列中有%d个数据,剩余%d个空间\n", size, MAX - (list.tail));
//			break;
//		case PRINT:
//			Print(list);
//			printf("\n");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	text1();
//	return 0;
//}


////循环队列
//#include<stdbool.h>
//#include<assert.h>
//#include<stdio.h>
//#define MAX 5
//typedef int DataType;
//typedef struct Queue
//{
//	DataType arr[MAX];
//	int top, tail;
//}Queue;
//enum
//{
//	EXIT,
//	POPQUEUE,
//	PUSHQUEUE,
//	PRINT,
//	LENGTH
//};
//
//void menu()
//{
//	printf("********************************************\n");
//	printf("******1.PopQueue            2.PushQueue*****\n");
//	printf("******3.Print                  0.EXIT  *****\n");
//	printf("****************4.LENGHTH********************\n");
//}
//
//void InItQueue(Queue* list)
//{
//	list->tail = 0;
//	list->top = 0;
//}
//bool Full(Queue* list)
//{
//	/*队列保存的最大数据数量为MAX-1*/
//	if ((list->tail + 1) % MAX == list->top)
//		return true;
//	else
//		return false;
//}
//void QueuePush(Queue* list, DataType data)
//{
//	if (Full(list))
//	{
//		printf("空间已满\n");
//	}
//	else
//	{
//		//没满
//		list->arr[list->tail] = data;
//		list->tail = (list->tail + 1) % MAX;
//		printf("添加成功\n");
//	}
//}
//void QueuePop(Queue* list)
//{
//	if (list->top == list->tail)
//		printf("队列为空\n");
//	else
//	{
//		list->top = (list->top + 1) % MAX;
//		printf("出队\n");
//	}
//}
//void Print(Queue list)
//{
//	if (list.tail != list.top)
//	{
//		while (list.tail != list.top)
//		{
//			printf("%d ", list.arr[list.top]);
//			list.top++;
//			if (list.top == MAX && (list.tail + 1) % MAX != list.top)
//				list.top = 0;
//		}
//		printf("\n");
//	}
//	else
//		printf("队列为空\n");
//}
//int QueueLength(Queue list)
//{
//	return ((list.tail) - (list.top) + MAX) % MAX;
//}
//
//void text()
//{
//	Queue list;
//	InItQueue(&list);
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
//			break;
//		case POPQUEUE:
//			QueuePop(&list);
//			break;
//		case PUSHQUEUE:
//			printf("请输入数据:");
//			scanf("%d", &data);
//			QueuePush(&list, data);
//			break;
//		case PRINT:
//			Print(list);
//			break;
//		case LENGTH:
//			size = QueueLength(list);
//			printf("队列长度为%d\n", size);
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//
//}
//int main()
//{
//	text();
//	return 0;
//}


////链式队列
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//typedef int DataType;
//
//typedef struct Node
//{
//	DataType data;
//	struct Node* next;
//}Node;
//enum
//{
//	EXIT,
//	POP,
//	PUSH,
//	PRINT
//};
//void menu()
//{
//	printf("************************************\n");
//	printf("*************0.EXIT*****************\n");
//	printf("*************1.POP *****************\n");
//	printf("*************2.PUSH*****************\n");
//	printf("*************3.PRINT****************\n");
//	printf("************************************\n");
//}
//Node* AddNode(DataType data)
//{
//	Node* node = malloc(sizeof(Node));
//	node->next = NULL;
//	node->data = data;
//	return node;
//}
//void Push(Node** list,DataType data)
//{
//	Node* NewNode = AddNode(data);
//	if (*list == NULL)
//	{
//		*list = NewNode;
//		return;
//	}
//	Node* cur = *list;
//	while (cur->next != NULL)
//	{
//		cur = cur->next;
//	}
//	cur->next = NewNode;
//}
//void Pop(Node** list)
//{
//	if (*list == NULL)
//	{
//		printf("队列为空\n");
//		return;
//	}
//	Node* cur = (*list)->next;
//	printf("%d出队成功\n", (*list)->data);
//	free(*list);
//	*list = cur;
//}
//void Print(Node* list)
//{
//	if (list == NULL)
//	{
//		printf("队列为空\n");
//		return;
//	}
//	Node* cur = list;
//	while (cur)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//int QueueLength(Node* list)
//{
//	int size = 0;
//	Node* cur = list;
//	while (cur)
//	{
//		size++;
//		cur = cur->next;
//	}
//	return size;
//}
//void text()
//{
//	Node* Queue = NULL;
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
//			break;
//		case POP:
//			Pop(&Queue);
//			break;
//		case PUSH:
//			printf("请输入数据:");
//			scanf("%d", &data);
//			Push(&Queue, data);
//			break;
//		case PRINT:
//			Print(Queue);
//			size=QueueLength(Queue);
//			printf("队列中共有%d个数据\n", size);
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	text();
//	return 0;
//}

//双向链表
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct Node
{
	struct Node* prev;
	struct Node* next;
	DataType data;
}Node;
void menu()
{
	printf("******************************\n");
	printf("******     0.EXIT    *********\n");
	printf("******  1.PushBack   *********\n");
	printf("******  2.PushFront  *********\n");
	printf("******  3.PopBack    *********\n");
	printf("******  4.PopFront   *********\n");
	printf("******5.Print   6.Find********\n");
	printf("******************************\n");
}
enum
{
	EXIT,
	PUSHBACK,
	PUSHFRONT,
	POPBACK,
	POPFRONT,
	PRINT,
	FIND
};
Node* BuyListNode(DataType data)
{
	Node* NewNode = malloc(sizeof(Node));
	if (NewNode)
	{
		//不为NULL---创建成功
		NewNode->data = data;
		NewNode->next = NewNode->prev = NULL;
		return NewNode;
	}
	return NULL;
}
void PushBack(Node** list, DataType data)
{
	Node* NewNode = BuyListNode(data);
	if (*list == NULL)
	{
		*list = NewNode;
		return;
	}
	Node* cur = *list;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = NewNode;
	NewNode->prev = cur;
}

void PopBack(Node** list)
{
	Node* cur = *list;
	Node* prev = NULL;
	while (cur->next)
	{
		prev = cur;
		cur = cur->next;
	}
	free(cur->next);
	prev->next = NULL;
}
void PopFront(Node** list)
{
	if (*list == NULL)
		return;
	Node* cur = (*list)->next;
	free(*list);
	*list = cur;
	cur->prev = NULL;
}
void Insert(Node* pos, DataType data)
{
	Node* NewNode = BuyListNode(data);
	pos->next = NewNode;
	NewNode->prev = pos;
}
void PushFront(Node** list, DataType data)
{
	Node* NewNode = BuyListNode(data);
	if (*list == NULL)
	{
		*list = NewNode;
		return;
	}
	NewNode->next = *list;
	(*list)->prev = NewNode;
	*list = NewNode;
}

Node* Find(Node* list,DataType data)
{
	Node* cur = list;
	while (cur != NULL)
	{
		if (cur->data == data)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
void Print(Node* list)
{
	Node* cur = list;
	if (list == NULL)
	{
		printf("链表为空\n");
		return;
	}
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void text()
{
	Node* list = NULL, *flag = NULL;
	int data, input;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
		{
			printf("退出\n");
			return;
		}
		case PUSHBACK:
			printf("输入数据\n");
			scanf("%d", &data);
			PushBack(&list, data);
			break;
		case PUSHFRONT:
			printf("输入数据\n");
			scanf("%d", &data);
			PushFront(&list, data);
			break;
		case POPBACK:
			PopBack(&list);
			break;
		case POPFRONT:
			PopFront(&list);
			break;
		case PRINT:
			Print(list);
			break;
		case FIND:
			printf("输入要查询的数据:");
			scanf("%d", &data);
			flag = Find(list, data);
			if (flag)
				printf("%d所在的位置为:%p\n", data, flag);
			else
				printf("不存在\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}
int main()
{

	text();
	return 0;
}