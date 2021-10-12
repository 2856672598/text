#include"seqlist.h"

void SeqListInit(SeqList* p)
{
	p->_capacity = p->_size = 0;
	p->_date = NULL;
}

void SeqListCheckCapacity(SeqList* p)
{
	assert(p);
	//如果相等了就增容
	if (p->_capacity == p->_size)
	{
		int newcapacity = p->_capacity == 0 ? 4 : 2 * p->_capacity;
		SLDateType* tmp = (SLDateType*)realloc(p->_date, newcapacity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			printf("realloc file\n");
			exit(-1);
		}
		else
		{
			p->_date = tmp;
			p->_capacity = newcapacity;
		}
	}
}

void SeqListPushBack(SeqList* p, SLDateType x)
{
	assert(p);
	SeqListCheckCapacity(p);
	p->_date[p->_size] = x;
	p->_size++;
}

void SeqListPopBack(SeqList* p)
{
	assert(p);
	assert(p->_size > 0);
	p->_size--;
}

void SeqListPrint(SeqList* p)
{
	assert(p);
	for (int i = 0; i < p->_size; i++)
	{
		printf("%d ", p->_date[i]);
	}
	printf("\n");
}

void SeqListDestory(SeqList* p)
{
	assert(p);
	free(p->_date);
	p->_date = NULL;
}

void SeqListPushFront(SeqList* p, SLDateType x)
{
	assert(p);
	SeqListCheckCapacity(p);
	int flag = p->_size - 1;
	while (flag >= 0)
	{
		p->_date[flag + 1] = p->_date[flag];
		flag--;
	}
	p->_date[0] = x;
	p->_size++;
}

void SeqListPopFront(SeqList*p)
{
	assert(p);
	//当size大小为0时，说明已经为空了
	assert(p->_size > 0);
	int flag = 1;
	while (flag < p->_size)
	{
		p->_date[flag - 1] = p->_date[flag];
		flag++;
	}
	p->_size--;
}

//找不到返回-1；
int SeqListFind(SeqList* p, SLDateType x)
{
	assert(p);
	assert(p->_size > 0);
	for (int i = 0; i < p->_size; i++)
	{
		if (p->_date[i] == x)
			return i;
	}
	return -1;
}

void SeqListInsert(SeqList*p, int pos, SLDateType x)
{
	assert(p);
	assert(p->_size >= pos && pos >= 0);

	//判断是否需要扩容
	SeqListCheckCapacity(p);

	int flag = p->_size - 1;
	while (flag >= pos)
	{
		p->_date[flag + 1] = p->_date[flag];
		flag--;
	}
	p->_date[pos] = x;
	p->_size++;
}

void SeqListErase(SeqList*p, int pos)
{
	assert(p);
	assert(pos >= 0 && p->_size > pos);

	while (pos < p->_size - 1)
	{
		p->_date[pos] = p->_date[pos + 1];
		pos++;
	}
	p->_size--;
}
