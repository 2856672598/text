#include"Stack.h"

int main()
{
	ST s;
	StackInit(&s);
	Push(&s, 1);
	Push(&s, 2);
	Push(&s, 3);

	while (!Empty(&s))
	{
		printf("%d ", StackTop(&s));
		Pop(&s);
	}
	Destroy(&s);
	return 0;
}