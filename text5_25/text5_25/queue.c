#include"queue.h"
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = pq->ptail = NULL;
}

void QueuePush(Queue* pq, QDatatype x)
{
	QNode* newnode = malloc(sizeof(QNode));
	if (newnode)
	{
		newnode->data = x;
		newnode->next = NULL;
		if (pq->phead == NULL)
		{
			pq->phead = pq->ptail = newnode;
			return;
		}
		pq->ptail->next = newnode;
		pq->ptail = newnode;
	}
}
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->phead);
	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
		return;
	}
	QNode* next = pq->phead->next;
	free(pq->phead);
	pq->phead = next;
}
struct TNode* QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->phead);
	return pq->phead->data;
}
struct TNode* QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->ptail);
	return pq->ptail->data;
}
bool QueueEmpty(Queue* pq)
{
	if (pq->phead == NULL)
		return true;
	return false;
}
void QueueDestory(Queue*pq)
{
	assert(pq);
	while (pq->phead)
	{
		QueuePop(pq);
	}
}