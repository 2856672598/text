#include"ListQueue.h"
int main()
{
	Queue *s = NULL;
	//Queue* tmp = Init();
	//if (tmp)
	//{
	//	s = tmp;
	//}
	Push(&s, 1);
	Push(&s, 2);
	Push(&s, 3);
	Push(&s, 4);

	Print(s);
}