#include"SeqList.h"
void SLInit(SL*ps)
{
	assert(ps);
	ps->sz = 0;
	ps->capacity = 2;//Ä¬ÈÏ³õÊ¼»¯µÄÈÝÁ¿
	ps->a = malloc(sizeof(SLDataType)*ps->capacity);
	if (ps->a == NULL)
	{
		printf("³õÊ¼»¯Ê§°Ü\n");
		exit(-1);
	}
}
void SLAddCapacity(SL* ps)
{
	ps->capacity *= 2;
	SLDataType* tmp;
	tmp = realloc(ps->a, sizeof(SLDataType)*ps->capacity);
	if (tmp != NULL)
		ps->a = tmp;
	else
	{
		printf("À©ÈÝÊ§°Ü\n");
		exit(-1);
	}
}
void SLPrint(SL*ps)
{
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//¼ì²âÈÝÁ¿
	if (ps->sz == ps->capacity)
	{
		//ÔöÈÝ
		SLAddCapacity(ps);
	}
	ps->a[ps->sz] = x;
	ps->sz++;
}