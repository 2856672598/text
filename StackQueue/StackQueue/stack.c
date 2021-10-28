#include"Stack.h"

void StackInit(ST* ps)
{
	assert(ps);
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}

void Push(ST* ps, STNodeType val)
{
	assert(ps);
	//ÅÐ¶ÏÊÇ·ñÐèÒªÀ©ÈÝ
	if (ps->_top == ps->_capacity)
	{
		int newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		STNodeType* tmp = realloc(ps->_a, sizeof(STNodeType)*newcapacity);
		if (tmp == NULL)
		{
			printf("realloc ");
			exit(-1);
		}
		ps->_a = tmp;
		ps->_capacity = newcapacity;
	}
	ps->_a[ps->_top] = val;
	ps->_top++;
}

bool Empty(ST* ps)
{
	assert(ps);
	return ps->_top == 0;
}

void Pop(ST* ps)
{
	assert(ps);
	assert(ps->_top > 0);
	ps->_top--;
}

STNodeType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->_top > 0);
	return ps->_a[ps->_top - 1];
}

void Destroy(ST* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}
