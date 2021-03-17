#include"ListStack.h"
Node* AddNode(NodeType n)
{
	Node* tmp = malloc(sizeof(LinkedStack));
	if (tmp)
	{
		tmp->Data = n;
		tmp->Next = NULL;
	}
	return tmp;
}
void Init(LinkedStack* head)
{
	assert(head);
	head->top = NULL;
	head->StackSize = 0;
}
void Push(LinkedStack* head, NodeType n)
{
	assert(head);
	Node* tmp = AddNode(n);
	if (tmp)
	{
		tmp->Next = head->top;
		head->top = tmp;
		head->StackSize += 1;
	}
}
void Pop(LinkedStack* head)
{
	assert(head);
	if (head->top != NULL)
	{
		Node* tmp = head->top->Next;
		free(head->top);
		head->top = tmp;
		head->StackSize -= 1;
		printf("删除成功\n");
	}
	else
		printf("没有数据可以删除\n");
}
void Print(LinkedStack* head)
{
	assert(head);
	while (head->top != NULL)
	{
		printf("%d ", head->top->Data);
		head->top = head->top->Next;
	}
}