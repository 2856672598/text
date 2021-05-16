#include"Stackby_two_queue.h"
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}
void QueueDestory(Queue* qp)
{
	assert(qp);
	Node* cur = qp->head;
	while (cur)
	{
		Node* next = cur->next;
		free(cur);
		cur = next;
	}
	qp->head = qp->tail = NULL;
}
void QueuePush(Queue* pq, Datatype x)
{
	assert(pq);
	Node* newnode = malloc(sizeof(Node));
	if (newnode)
	{
		newnode->data = x;
		newnode->next = NULL;
	}
	else
		exit(-1);
	if (pq->head == NULL)
		pq->head = pq->tail = newnode;
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue*pq)
{
	assert(pq);
	assert(pq->head);
	Node* next = pq->head->next;
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		free(pq->head);
		pq->head = next;
	}
}
//·µ»ØÕ»¶¥ÔªËØ
Datatype StackTop(Stack* qp)
{
	assert(qp);
	//assert(qp->Queue1);
	assert(qp->Queue1->head);
	return qp->Queue1->head->data;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}

void StackInit(Stack* ps)
{
	assert(ps);
	Queue* queue1 = malloc(sizeof(Queue));
	Queue* queue2 = malloc(sizeof(Queue));
	queue1->head = queue1->tail = NULL;
	queue2->head = queue2->tail = NULL;
	ps->Queue1 = queue1;
	ps->Queue2 = queue2;
	QueueInit(ps->Queue1);
	QueueInit(ps->Queue2);
}
void StackPush(Stack* ps, Datatype x)
{
	assert(ps);
	QueuePush(ps->Queue2, x);
	ps->Queue2->tail->next = ps->Queue1->head;
	ps->Queue1->head = ps->Queue2->head;
	//QueueDestory(ps->Queue2);
	ps->Queue2->head = ps->Queue2->tail = NULL;
}
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->Queue1);
	assert(ps->Queue2);
	ps->Queue2->head = ps->Queue1->head;
	QueuePop(ps->Queue2);
	ps->Queue1->head = ps->Queue2->head;
	ps->Queue2->tail = ps->Queue2->head = NULL;
}

void menu()
{
	printf("#############################\n");
	printf("####1.Push          2.POP####\n");
	printf("####3.StackTop     0.EXIT####\n");
	printf("#############################\n");
}