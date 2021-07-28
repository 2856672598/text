#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("********   1.play    *********\n");
	printf("********   0.EXIT    *********\n");
	printf("******************************\n");
}

void game()
{
	int size = MINES;
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//³õÊ¼»¯ÆåÅÌ
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//²¼ÖÃÀ×
	CreateMine(mine, ROW, COL, size);

	//PrinBoard(mine, ROW, COL);
	//PrinBoard(show, ROW, COL);

	PlayerMove(show, mine, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³ö\n");
			break;
		default:
			printf("ÊäÈë´íÎó\n");
			break;
		}

	} while (input);
	return 0;
}