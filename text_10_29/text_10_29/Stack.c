#include"Stack.h"

void Init(ST* ps)
{
	assert(ps);
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}

void Push(ST* ps, STNodeType val)
{
	//ÅÐ¶ÏÊÇ·ñÐèÒªÀ©ÈÝ
	if (ps->_top == ps->_capacity)
	{
		int newcapacity = ps->_capacity == 0 ? 4 : 2 * ps->_capacity;
		STNodeType* tmp = realloc(ps->_a, sizeof(STNodeType)*newcapacity);
		if (tmp == NULL)
		{
			printf("realloc error");
			exit(-1);
		}
		ps->_capacity = newcapacity;
		ps->_a = tmp;
	}
	ps->_a[ps->_top] = val;
	ps->_top++;
}

void Pop(ST* ps)
{
	assert(ps);
	assert(!Empty(ps));
	ps->_top--;
}

bool Empty(ST* ps)
{
	assert(ps);
	return ps->_top == 0;
}

STNodeType Top(ST* ps)
{
	assert(ps);
	assert(!Empty(ps));
	return ps->_a[ps->_top - 1];
}