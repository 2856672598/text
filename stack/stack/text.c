#include"stack.h"
int main()
{
	SqStack s;
	InitStack(&s);
	Push(&s, 1);
	Push(&s, 2);
	Push(&s, 3);
	Push(&s, 4);
	Push(&s, 5);
	Push(&s, 6);
	Push(&s, 7);
	Push(&s, 8);

	Pop(&s);
	Pop(&s);
	Print(&s);
	DestoryStack(&s);
	return 0;
}