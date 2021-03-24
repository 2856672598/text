#include"snake.h"
void text()
{

	CreateMap(40, 20);
	snake* head = InitSnake();
	while (1)
	{
		Sleep(300);
		snake* flag = head;
		while (flag)
		{

			flag->x = flag->x;
			flag->y = flag->y + 1;
			gotoxy(flag->x, flag->y);
			printf("¡ö");
			gotoxy(flag->x, flag->y - 1);
			printf("  ");
			flag = flag->next;

			KeyDown(head);

		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	text();
	while (1);
	return 0;
}