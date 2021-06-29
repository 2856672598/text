#include"Stack.h"
Stack minPath;
Stack Path;
bool IsPath(int** arr, int n, int m, Seat pos)
{
	if (pos.col >= 0 && pos.col < m
		&&pos.row >= 0 && pos.row < n
		&&arr[pos.row][pos.col] == 1)
		return true;
	else
		return false;
}
void Prin(Stack* phead)
{
	assert(phead);
	if (!StackEmpty(phead))
	{
		while (StackSize(phead) > 1)
		{
			DataType data = StackTop(phead);
			printf("[%d,%d],", data.row, data.col);
			StackPop(phead);
		}

		DataType data = StackTop(phead);
		printf("[%d,%d]", data.row, data.col);
		StackPop(phead);
	}
	else
	{
		//为空
		printf("Can not escape!\n");
	}
}
void GetMazePath(int** arr, int n, int m, Seat pos, int p)
{
	StackPush(&Path, pos);
	//找最短路径
	if (pos.col == m - 1 && pos.row == 0 && p >= 0)
	{
		if (StackEmpty(&minPath) != 0 || StackSize(&Path) < StackSize(&minPath))
		{
			StackDestory(&minPath);

			StackCopy(&Path, &minPath);
		}
	}

	arr[pos.row][pos.col] = 2;
	Seat next;
	//上
	next.col = pos.col;
	next.row = pos.row - 1;
	if (IsPath(arr, n, m, next))
	{
		GetMazePath(arr, n, m, next, p - 3);
	}
	//下
	next.col = pos.col;
	next.row = pos.row + 1;
	if (IsPath(arr, n, m, next))
		GetMazePath(arr, n, m, next, p);
	//左
	next.col = pos.col - 1;
	next.row = pos.row;
	if (IsPath(arr, n, m, next))
		GetMazePath(arr, n, m, next, p - 1);
	//右
	next.col = pos.col + 1;
	next.row = pos.row;
	if (IsPath(arr, n, m, next))
		GetMazePath(arr, n, m, next, p - 1);

	arr[pos.row][pos.col] = 1;
	StackPop(&Path);
}
int main()
{
	int m, n, p;
	scanf("%d %d %d", &n, &m, &p);
	int* *arr = malloc(sizeof(int*)*n);
	assert(arr);
	for (int i = 0; i < n; i++)
	{
		arr[i] = malloc(sizeof(int)*m);
		assert(arr[i]);
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//起点
	Seat pos = { 0,0 };

	StackInit(&Path);
	StackInit(&minPath);
	GetMazePath(arr, n, m, pos, p);

	Prin(&minPath);
	//销毁数组
	for (int i = 0; i < m; i++)
	{
		free(arr[i]);
	}
	free(arr);

	StackDestory(&Path);
	return 0;
}