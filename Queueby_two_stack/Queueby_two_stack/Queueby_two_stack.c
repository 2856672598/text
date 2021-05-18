
#include"Queueby_two_stack.h"
void StackInit(Stack* ps)
{
	ps->top = NULL;
	ps->bottom = NULL;
}
void StackDestory(Stack* ps)
{
	assert(ps);
	SNode* cur = ps->top;
	while (cur)
	{
		SNode* next = cur->next;
		free(cur);
		cur = next;
	}
}
void QueueuDestory(Queue* pq)
{
	assert(pq->Stack1);
	assert(pq->Stack2);
	StackDestory(pq->Stack1);
	StackDestory(pq->Stack2);
	free(pq->Stack1);
	free(pq->Stack2);
	pq->Stack1 = pq->Stack2 = NULL;
}
void StackPush(Stack* ps, Datatype x)
{
	assert(ps);
	SNode* newnode = malloc(sizeof(SNode));
	if (newnode)
	{
		newnode->next = NULL;
		newnode->data = x;
	}
	if (ps->top == NULL)
	{
		//此时栈为空
		ps->top = newnode;
		ps->bottom = newnode;
	}
	else
	{
		newnode->next = ps->top;
		ps->top = newnode;
	}
}
void StackPop(Stack* ps)
{
	assert(ps);
	//判断栈是否为空
	assert(ps->top);
	if (ps->top->next == NULL)
	{
		free(ps->top);
		ps->top = NULL;
	}
	else
	{
		SNode* next = ps->top->next;
		free(ps->top);
		ps->top = next;
	}
}
void QueueInit(Queue* pq)
{
	assert(pq);
	assert(pq->Stack1);
	assert(pq->Stack2);
	Stack* stack1 = malloc(sizeof(Stack));
	Stack* stack2 = malloc(sizeof(Stack));
	if (stack1&&stack2)
	{
		stack1->top = stack1->bottom = NULL;
		stack2->top = stack2->bottom = NULL;
		pq->Stack1 = stack1;
		pq->Stack2 = stack2;
	}
	StackInit(pq->Stack1);
	StackInit(pq->Stack2);
}
SNode* reverse(Stack* ps)
{
	assert(ps);
	SNode*head = NULL;
	while (ps->top)
	{
		SNode* next = ps->top->next;
		ps->top->next = head;
		head = ps->top;
		ps->top = next;
	}
	return head;
}
void QueuePush(Queue* pq, Datatype x)
{
	assert(pq);
	assert(pq->Stack1);
	assert(pq->Stack2);
	StackPush(pq->Stack1, x);
}
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->Stack1->top);
	assert(pq->Stack2);
	SNode* stack1 = reverse(pq->Stack1);
	pq->Stack2->top = stack1;
	//printf("%d ", pq->Stack2->top->data);
	StackPop(pq->Stack2);
	SNode* stack2 = reverse(pq->Stack2);
	pq->Stack1->top = stack2;
}
Datatype QueueTop(Queue* qp)
{
	assert(qp);
	assert(qp->Stack1);
	assert(qp->Stack1->top);
	//反转stack1中的链表，反转后就是stack2入栈的顺序
	SNode* stack1 = reverse(qp->Stack1);
	qp->Stack2->top = stack1;
	Datatype data = qp->Stack2->top->data;
	SNode* stack2 = reverse(qp->Stack2);
	qp->Stack1->top = stack2;
	return data;
}
void menu()
{
	printf("*******************\n");
	printf("***1.Push  2.Pop***\n");
	printf("***3.Top  0.EXIT***\n");
	printf("*******************\n");
}