#include"Queue.h"
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}
void QueueDestory(Queue* pq)
{
	assert(pq);
	while (!QueueEmpty(pq))
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}
void QueuePush(Queue* pq, struct BTNode* data)
{
	assert(pq);
	QNode* newnode = malloc(sizeof(QNode));
	if (newnode)
	{
		newnode->data = data;
		newnode->next = NULL;
		if (pq->head == NULL)
		{
			pq->head = pq->tail = newnode;
			return;
		}
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue* pq)
{
	assert(pq);
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
		return;
	}
	QNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	if (pq->head == NULL)
		return true;
	return false;
}
QNode* QueueFront(Queue* pq)
{
	assert(pq);
	//队列不能为空
	assert(pq->head);
	return pq->head;
}