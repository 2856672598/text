#include"Stack.h"
void StackInit(ST* ps)
{
	assert(ps);
	Datatype* tmp = malloc(sizeof(Datatype) * 4);
	if (tmp)
	{
		ps->a = tmp;
		ps->top = -1;
		ps->capacity = 4;
	}
	else
	{
		printf("malloc Ê§°Ü\n");
		exit(-1);
	}
}
void StackDestory(ST* ps)
{
	assert(ps);
	ps->top = ps->capacity = 0;
	free(ps->a);
}

bool StackEmpty(ST* ps)
{
	return ps->top == ps->capacity;
}

void StackPush(ST* ps, Datatype x)
{
	assert(ps);
	ps->top++;
	if (StackEmpty(ps))
	{
		//ÂúÁË
		Datatype* tmp = realloc(ps->a, sizeof(Datatype)*ps->top * 2);
		if (tmp)
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = x;
}
void StackPop(ST* ps)
{
	assert(ps);
	//ÅÐ¶ÏÕ»ÊÇ·ñÎª¿Õ
	assert(ps->top >= 0);
	ps->top--;
}
Datatype StackTop(ST* ps)
{
	assert(ps);
	if (ps->top >= 0)
		return ps->a[ps->top];
}
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top + 1;
}