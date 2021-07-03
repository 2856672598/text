
////剑指 Offer 13. 机器人的运动范围
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//typedef struct Seat
//{
//	int row;
//	int col;
//}Seat;
//int sum(int x)
//{
//	int sum = 0;
//	while (x)
//	{
//		sum += x % 10;
//		x /= 10;
//	}
//	return sum;
//}
//int Path(int** arr, int m, int n, int k, Seat pos)
//{
//	if (pos.col >= n || pos.row >= m || pos.col < 0 || pos.row < 0)
//		return 0;
//	if ((sum(pos.col) + sum(pos.row) > k) || arr[pos.row][pos.col] == 1)
//		return 0;
//
//	arr[pos.row][pos.col] = 1;
//	Seat next;
//	//右
//	next.col = pos.col + 1;
//	next.row = pos.row;
//	int count1 = Path(arr, m, n, k, next);
//	//下
//	next.col = pos.col;
//	next.row = pos.row + 1;
//	int count2 = Path(arr, m, n, k, next);
//	return count1 + count2 + 1;
//}
//int movingCount(int m, int n, int k)
//{
//	Seat pos = { 0,0 };
//	int** arr = malloc(sizeof(int*)*m);
//	assert(arr);
//	for (int i = 0; i < m; i++)
//	{
//		arr[i] = malloc(sizeof(int)*n);
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		free(arr[i]);
//	}
//	int count = Path(arr, m, n, k, pos);
//	free(arr);
//	return count;
//}
//int main()
//{
//	int m = 3, n = 2, k = 17;
//	int flag = movingCount(m, n, k);
//	printf("%d", flag);
//	return 0;
//}


//剑指 Offer 47. 礼物的最大价值
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int maxValue(int** grid, int gridSize, int* gridColSize)
{
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < *gridColSize; j++)
		{
			if (i == 0 && j == 0)
				continue;
			else if (i == 0 && j != 0)
				grid[i][j] += grid[i][j - 1];
			else if (j == 0 && i != 0)
				grid[i][j] += grid[i - 1][j];
			else
				grid[i][j] += Max(grid[i][j - 1], grid[i - 1][j]);

		}
	}
	return grid[gridSize - 1][*gridColSize-1];
}

int main()
{
	int m = 3, n = 3;
	int**arr = malloc(sizeof(int)*m);
	for (int i = 0; i < m; i++)
	{
		arr[i] = malloc(sizeof(int) * n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int max = maxValue(arr, m, &n);
	printf("%d", max);
	return 0;
}