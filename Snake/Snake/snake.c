#include"snake.h"
int status = 0;
snake* food = NULL;
void gotoxy(int x, int y)//调用Windows的API函数，可以在控制台的指定位置直接操作，这里可暂时不用深究
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
snake*InitSnake()
{
	snake* till = malloc(sizeof(snake));
	till->next = NULL;
	till->x = 24;
	till->y = 15;
	snake* head = NULL;
	for (int i = 1; i <= 3; i++)
	{
		head = malloc(sizeof(snake));
		head->next = till;
		head->x = 24 + i * 2;
		head->y = 15;
		till = head;
	}
	while (till)
	{
		gotoxy(till->x, till->y);
		printf("■");
		till = till->next;
	}
	return head;
}
void snakeMove(snake* head)
{
	snake* nexthead = malloc(sizeof(snake));
	if (status == U)
	{
		nexthead->next = head;
		nexthead->x = head->x;
		nexthead->y = (head->y) - 1;
		head = nexthead;
		snake* q = head;
		if (head==NULL/*q->x == food->x&&q->y == food->y*/)
		{
			//吃食物
		}
		else
		{
			while (q->next)
			{
				Sleep(300);
				gotoxy(q->x, q->y);
				printf("■");
				q = q->next;
			}
			gotoxy(q->x, q->y);
			printf("■");
			gotoxy(q->next->x, q->next->y);
			free(q->next);
			q->next = NULL;
		}
	}
}


void keyboardControl(snake* head)
{
	status = U;       //初始蛇向右移动
	while (1)
	{
		if (GetAsyncKeyState(VK_UP) && status != D)            //GetAsyncKeyState函数用来判断函数调用时指定虚拟键的状态
		{
			status = U;           //如果蛇不是向下前进的时候，按上键，执行向上前进操作
		}
		else if (GetAsyncKeyState(VK_DOWN) && status != U)     //如果蛇不是向上前进的时候，按下键，执行向下前进操作
		{
			status = D;
		}
		else if (GetAsyncKeyState(VK_LEFT) && status != R)      //如果蛇不是向右前进的时候，按左键，执行向左前进
		{
			status = L;
		}
		else if (GetAsyncKeyState(VK_RIGHT) && status != L)     //如果蛇不是向左前进的时候，按右键，执行向右前进
		{
			status = R;
		}
		Sleep(300);
		snakeMove(head);
	}
}