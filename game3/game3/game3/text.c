#include"snake.h"


void game()
{
	system("mode con cols=150 lines=60");
	//隐藏光标
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);

	drawMap(WIDE, LONG);
	Node* head = stackInit();
	createFood(head);
	keyboardControl(&head);
	system("cls");

	Frame(1);
	endPrint();//结束页面
	system("cls");
}

void menu()
{
	int input = 0;
	do
	{
		system("cls");
		gotoXY(53, 8);
		Setcolor(14);
		printf("贪 吃 蛇 大 作 战");
		gotoXY(26, 14);
		printf("1.开始游戏");
		gotoXY(46, 14);
		printf("2.游戏说明");
		gotoXY(66, 14);
		printf("3.得分排行");
		gotoXY(86, 14);
		printf("0.退出游戏");
		Frame(0);

		gotoXY(56, 24);
		Setcolor(14);
		printf("前往：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			Gamedescription();
			break;
		}
	} while (input);

}

int main()
{
	//int input = 0;
	//do
	//{
	//	menu();
	//	rewind(stdin);

	//	scanf("%d", &input);

	//	switch (input)
	//	{
	//	case 1:
	//		game();
	//		break;
	//	case 2:
	//		Gamedescription();
	//		break;
	//	case 0:
	//		break;
	//	}
	//} while (input);

	menu();
	return 0;
}
