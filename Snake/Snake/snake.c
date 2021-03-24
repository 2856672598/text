#include"snake.h"
int MapWidth = 40;
int MapHeight = 20;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
snake* InitSnake()
{
	snake* till = malloc(sizeof(snake));
	if (till)
	{
		till->next = NULL;
		till->x = 4;
		till->y = 8;
	}
	//for (int i = 1; i <= 2; i++)
	//{
	//	snake* head = malloc(sizeof(snake));
	//	head->next = till;
	//	head->x = till->x;
	//	head->y = till->y + 1;
	//	till = head;
	//}
	snake* tmp = till;
	while (tmp != NULL)
	{
		gotoxy(tmp->x, tmp->y);
		printf("■");
		tmp = tmp->next;
	}
	return till;
}
void CreateMap(int x, int y)
{
	int i = 0;
	//左右
	for (i = 1; i < y; i++)
	{
		gotoxy(0, i);
		printf("■");
		gotoxy(x - 2, i);
		printf("■");
	}
	//上下
	for (int i = 0; i < x; i += 2)
	{
		gotoxy(i, 0);
		printf("■");
		gotoxy(i, y);
		printf("■");
	}
}
snake* CreateFood()
{
	snake* food = malloc(sizeof(snake));
	food->next = NULL;
	food->x = 3;
	while (food->x % 2 != 0 && food->x != 0)
	{
		food->x = rand() % MapWidth - 2;
	}
	food->y = rand() % MapHeight - 1;
	gotoxy(food->x, food->y);
	printf("★");
	return food;
}
bool EatFood(snake* food, snake* head)
{
	if (food->x == head->x && food->y == food->y)
	{
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = food;
		free(food);
		return true;
	}
	return false;
}
void AgainstWall(snake* head)
{
	if (head->x == MapWidth - 2 || head->x == 0 || head->y == MapHeight - 1 || head->y == 0)
		printf("您死了\n");
}
void KeyDown(snake* head)
{
	int key1 = 0, key2 = 0;
	if (_kbhit())
	{
		key1 = _getch();
		key2 = _getch();
	}
	/**
	*控制台按键所代表的数字
	*“↑”：72
	*“↓”：80
	*“←”：75
	*“→”：77
	*/
	if (key2 == 75)
	{
			head->x -= 2;
			head->y = head->y;
			head = head->next;
	}
	if (key2 == 77)
	{
		//while (1)
		//{
		//	Sleep(300);
		//	snake* flag = head;
		//	while (flag != NULL)
		//	{
		//		flag->x = flag->x + 2;
		//		flag->y = flag->y;
		//		gotoxy(head->x, head->y);
		//		printf("■");
		//		gotoxy(head->x - 2, head->y);
		//		printf("  ");
		//		flag = flag->next;
		//	}
		//}
		head->x = head->x + 2;
		head->y = head->y;
	}
	if (key2 == 72)
	{
		head->x = head->x;
		head->y = head->y--;
		head = head->next;
	}
	if (key2 == 80)
	{
		head->x = head->x;
		head->y = head->y++;
		head = head->next;
	}
}