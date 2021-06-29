
#include"Stack.h"

Stack* st = NULL;

bool IsPass(int**maze, int n, int m, Seat pos)
{
	if (pos.row >= 0 && pos.row < n
		&& pos.col >= 0 && pos.col < m
		&&maze[pos.row][pos.col] == 0)
		return true;
	else
		return false;
}
bool GetMazePath(int**maze, int n, int m, Seat cur)
{
	//入栈
	StackPush(&st, cur);

	maze[cur.row][cur.col] = 2;
	//找到出口
	if (cur.row == n - 1 && cur.col == m - 1)
		return true;

	//上
	Seat next;
	next.col = cur.col;
	next.row = cur.row - 1;
	if (IsPass(maze, n, m, next))
	{
		if (GetMazePath(maze, n, m, next))
			return true;
	}

	//下
	next.col = cur.col;
	next.row = cur.row + 1;
	if (IsPass(maze, n, m, next))
	{
		if (GetMazePath(maze, n, m, next))
			return true;
	}

	//左
	next.col = cur.col - 1;
	next.row = cur.row;
	if (IsPass(maze, n, m, next))
	{
		if (GetMazePath(maze, n, m, next))
			return true;
	}
	//右
	next.col = cur.col + 1;
	next.row = cur.row;
	if (IsPass(maze, n, m, next))
	{
		if (GetMazePath(maze, n, m, next))
			return true;
	}

	//出栈
	SrtackPop(&st);
	return false;
}
void Prin(Stack** head)
{
	Stack* path = NULL;

	while (!StackEmpty(*head))
	{
		StackPush(&path, StackTop(*head));
		SrtackPop(head);
	}

	while (!StackEmpty(path))
	{
		DataType pos = StackTop(path);
		printf("(%d,%d)", pos.row, pos.col);
		SrtackPop(&path);
	}
	StackDestory(path);
}
int main()
{
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		int** arr = malloc(sizeof(int*)*n);
		if (*arr)
		{
			for (int i = 0; i < n; i++)
			{
				arr[i] = malloc(sizeof(int)*m);
				assert(arr[i]);
				for (int j = 0; j < m; j++)
				{
					scanf("%d", &arr[i][j]);
				}
			}
			Seat cur = { 0,0 };

			if (GetMazePath(arr, n, m, cur))
			{
				Prin(&st);
			}
			else
				printf("没有出路\n");
		}

		StackDestory(st);

		//释放掉申请的二维数组
		for (int i = 0; i < n; i++)
		{
			free(arr[i]);
		}
		free(arr);
	}

	return 0;
}