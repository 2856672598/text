#include"stack.h"
int main()
{
	SqStack* s;
	InitStack(s);
	Push(s, 5);
	Push(s, 4);
	Push(s, 3);
	Push(s, 2);
	return 0;
}