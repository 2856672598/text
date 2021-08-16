#include"snake.h"
void Frame(int n)                      //画边框
{
	int i;
	gotoXY(17, 5);
	Setcolor(11);
	printf("⊙--------------------------");
	Setcolor(14);
	printf("oOOo");
	Setcolor(11);
	printf("----------");
	Setcolor(14);
	printf("(_)");
	Setcolor(11);
	printf("----------");
	Setcolor(14);
	printf("oOOo");
	Setcolor(11);
	printf("--------------------------⊙");
	for (i = 6; i <= 19; i++)               //竖边框
	{
		gotoXY(17, i);
		printf("§");
		gotoXY(102, i);
		printf("§");
	}
	gotoXY(17, 20);
	printf("⊙---------------------------------------");
	Setcolor(14);
	printf("☆☆☆");
	Setcolor(11);
	printf("--------------------------------------⊙");
	gotoXY(53, 23);//56 24
	printf("∵ˇˇˇˇˇˇˇ∵");
	gotoXY(53, 26);
	printf("∴＾＾＾＾＾＾＾∴");
	if (n == 0)                       //主页面的字符图案
	{
		gotoXY(57, 2);
		Setcolor(6);
		printf("\\\\\\|///");
		gotoXY(54, 3);
		printf("\\\\");
		gotoXY(58, 3);
		Setcolor(15);
		printf(".-.-");
		gotoXY(65, 3);
		Setcolor(6);
		printf("//");
		gotoXY(55, 4);
		Setcolor(14);
		printf("(");
		gotoXY(58, 4);
		Setcolor(15);
		printf(".@.@");
		gotoXY(65, 4);
		Setcolor(14);
		printf(")");//
	}
	else                            //游戏结束页面的字符图案
	{
		gotoXY(57, 1);
		Setcolor(6);
		printf("∧    ∧");
		gotoXY(55, 2);
		printf(" /  \\  /  \\");
		gotoXY(54, 3);
		printf("（ ︹ ˇ ︹ ）");
		gotoXY(54, 4);
		printf("く ");
		Setcolor(15);
		printf("⊙    ⊙");
		Setcolor(14);
		printf(" / ");
		gotoXY(55, 5);
		printf("く   い   /");
		gotoXY(57, 6);
		printf("く 々 √");
		gotoXY(60, 7);
		printf("ˇ");
	}
}

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
}

void menu()
{
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
}


int main()
{
	int input = 1;
	do
	{
		Frame(0);
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			Frame(1);
			break;
		case 2:
			Gamedescription();
			break;
		case 0:
			break;
		}
	} while (input);

	return 0;
}