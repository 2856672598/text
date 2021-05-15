#include"Queue.h"
void QueueInit(Queue* qp)
{
	assert(qp);
	qp->head = qp->tail = NULL;
}
void QueueDestory(Queue* qp)
{
}
void QueuePush(Queue* qp, QDatatype x)
{
	assert(qp);
	QNode* newnode = malloc(sizeof(QNode));
	if (newnode)
	{
		newnode->data = x;
		newnode->next = NULL;
	}
	else
		exit(-1);
	if (qp->head == NULL)
	{
		qp->head = qp->tail = newnode;
	}
	else
	{
		qp->tail->next = newnode;
		qp->tail = newnode;
	}
}
void QueuePop(Queue* qp)
{
	assert(qp);
	assert(qp->head);
	QNode* next = qp->head->next;
	if (qp->head->next == NULL)
	{
		free(qp->head);
		qp->head = qp->tail = NULL;
	}
	else
	{
		free(qp->head);
		qp->head = next;
	}
}
QDatatype QueueFont(Queue* qp)
{
	assert(qp);
	assert(qp->head);
	return qp->head->data;
}
QDatatype QueueBack(Queue* qp)
{
	assert(qp);
	assert(qp->tail);
	return qp->tail->data;
}
int QueueSize(Queue* qp)
{
	int size = 0;
	QNode* cur = qp->head;
	while (cur)
	{
		cur = cur->next;
		size++;
	}
	return size;
}
bool QueueEmpty(Queue* qp)
{
	assert(qp);
	return qp->head == NULL;
}