#include"ListStack.h"
int main()
{
	LinkedStack s;
	Init(&s);
	Push(&s, 1);
	Push(&s, 2);
	Push(&s, 3);

	Push(&s, 4);
	Push(&s, 5);
	Push(&s, 6);

	Pop(&s);
	Print(&s);
	Destory(&s);
	return 0;
}