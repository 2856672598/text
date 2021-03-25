#include"snake.h"
int main()
{
	snake* head = InitSnake();
	keyboardControl(head);
	return 0;
}
//
//2021年3月25日首次写贪吃蛇没成功，改日在写吧