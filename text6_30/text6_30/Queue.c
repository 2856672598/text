#include"Queue.h"
void QueueInit(Queue* PQ)
{
	assert(PQ);
	PQ->Queue = PQ->Tail = NULL;
}

void QueuePush(Queue* PQ, TreeNode* value)
{
	assert(PQ);

	DataType* node = malloc(sizeof(DataType));
	assert(node);
	node->data = value;
	node->next = NULL;
	if (PQ->Queue == NULL)
	{
		PQ->Queue = node;
		PQ->Tail = node;
	}
	else
	{
		PQ->Tail->next = node;
		PQ->Tail = node;
	}
}
void QueuePop(Queue* PQ)
{
	assert(PQ);
	assert(PQ->Queue);
	if (PQ->Queue->next == NULL)
	{
		free(PQ->Queue);
		PQ->Queue = PQ->Tail = NULL;
	}
	else
	{
		QueueNode* next = PQ->Queue->next;
		free(PQ->Queue);
		PQ->Queue = next;
	}
}
bool QueueEmpty(Queue* PQ)
{
	assert(PQ);
	assert(PQ->Queue);
	if (PQ->Queue == NULL)
		return true;
	else
		return false;
}

TreeNode* QueueTop(Queue* PQ)
{
	assert(PQ);
	assert(PQ->Queue);
	return PQ->Queue->data;
}