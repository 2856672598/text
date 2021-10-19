#include"SList.h"

void SListPrint(SListNode* plist)
{
	SListNode* tmp = plist;
	while (tmp)
	{
		printf("%d->", tmp->_date);
		tmp = tmp->_next;
	}
	printf("NULL\n");
}

SListNode* CreateSListNode(DateType date)
{
	SListNode* newnode = malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("CreateSListNode");
		exit(-1);
	}
	newnode->_date = date;
	newnode->_next = NULL;
	return newnode;
}

void SListPushBack(SListNode* * plist, DateType date)
{
	assert(plist);
	SListNode* newnode = malloc(sizeof(SListNode));
	if (newnode != NULL)
	{
		newnode->_date = date;
		newnode->_next = NULL;
	}
	else
		exit(-1);
	if (*plist == NULL)
	{
		*plist = newnode;
	}
	else
	{
		//找到结尾插入节点
		SListNode* tmp = *plist;
		while (tmp->_next != NULL)
		{
			tmp = tmp->_next;
		}
		tmp->_next = newnode;
	}
}

void SListPopBack(SListNode** plist)
{
	assert(plist);
	assert(*plist);
	//找尾
	if ((*plist)->_next == NULL)
	{
		free(*plist);
		*plist = NULL;
	}
	else
	{
		SListNode*tmp = *plist;
		while (tmp->_next != NULL && tmp->_next->_next != NULL)
		{
			tmp = tmp->_next;
		}
		free(tmp->_next);
		tmp->_next = NULL;
	}
}

void SListPushFront(SListNode** plist, DateType date)
{
	SListNode* newnode = CreateSListNode(date);
	newnode->_next = *plist;
	*plist = newnode;
}

void SListPopFront(SListNode**plist)
{
	assert(plist);
	assert(*plist);

	SListNode* next = (*plist)->_next;
	free(*plist);
	*plist = next;
}