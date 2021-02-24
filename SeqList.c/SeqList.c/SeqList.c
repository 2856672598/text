#include"SeqList.h"
void SLInit(SL*ps)
{
	assert(ps);
	ps->sz = 0;
	ps->capacity = 2;//默认初始化的容量
	ps->a = malloc(sizeof(SLDataType)*ps->capacity);
	if (ps->a == NULL)
	{
		printf("初始化失败\n");
		exit(-1);
	}
}
void SLAddCapacity(SL* ps)
{
	assert(ps);
	if (ps->capacity == ps->sz)
	{
		ps->capacity *= 2;
		SLDataType* tmp;
		tmp = realloc(ps->a, sizeof(SLDataType)*ps->capacity);
		if (tmp != NULL)
			ps->a = tmp;
		else
		{
			printf("扩容失败\n");
			exit(-1);
		}
	}
}
void SLPrint(SL*ps)
{
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
//指定插入
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	pos = pos - 1;
	assert(pos <= ps->sz&&pos >= 0);
	SLAddCapacity(ps);
	int i = 0;
	for (i = ps->sz-1; i > pos-1; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[pos] = x;
	ps->sz++;
}
//指定删除
// pos以用户角度来看从1开始
void SLErase(SL* ps, int pos)
{
	assert(ps);
	//pos = pos - 1;
	assert(pos <= ps->sz&&pos >= 0);
	int i = 0;
	for (i = pos - 1; i <= ps->sz - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->sz--;
}
//尾插
void SLPushBack(SL* ps, SLDataType x)
{
	SLInsert(ps, ps->sz + 1, x);
}
//尾删
void SLPopBack(SL* ps)
{
	SLErase(ps, ps->sz);
}
//头插
void SLPushFront(SL* ps, SLDataType x)
{
	SLInsert(ps, 1, x);
}

//头删
void SLPopFront(SL* ps)
{
	SLErase(ps, 1);
}
//查找
//找到了返回下标，没找到返回-1；
int  SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->sz; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}
//释放开辟的动态内存
void SLDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->sz = 0;
}