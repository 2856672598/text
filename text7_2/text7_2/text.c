#define _CRT_SECURE_NO_WARNINGS
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


////剑指 Offer 47. 礼物的最大价值
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int maxValue(int** grid, int gridSize, int* gridColSize)
//{
//	for (int i = 0; i < gridSize; i++)
//	{
//		for (int j = 0; j < *gridColSize; j++)
//		{
//			if (i == 0 && j == 0)
//				continue;
//			else if (i == 0 && j != 0)
//				grid[i][j] += grid[i][j - 1];
//			else if (j == 0 && i != 0)
//				grid[i][j] += grid[i - 1][j];
//			else
//				grid[i][j] += Max(grid[i][j - 1], grid[i - 1][j]);
//
//		}
//	}
//	return grid[gridSize - 1][*gridColSize-1];
//}
//
//int main()
//{
//	int m = 3, n = 3;
//	int**arr = malloc(sizeof(int)*m);
//	for (int i = 0; i < m; i++)
//	{
//		arr[i] = malloc(sizeof(int) * n);
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max = maxValue(arr, m, &n);
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int Min(int a, int b)
//{
//	if (a > b)
//		return b;
//	else
//		return a;
//}
//int nthUglyNumber(int n)
//{
//	int* arr = malloc(sizeof(int)*n);
//	arr[0] = 1;
//	int p2 = 0, p3 = 0, p5 = 0, i = 0;
//	int flag = n - 1;
//	while (flag)
//	{
//		arr[++i] = Min(Min(arr[p2] * 2, arr[p3] * 3), arr[p5] * 5);
//		if (arr[i] == arr[p2] * 2)
//			p2++;
//		if (arr[i] == arr[p3] * 3)
//			p3++;
//		if (arr[i] == arr[p5] * 5)
//			p5++;
//		flag--;
//	}
//
//	return arr[i];
//}
//
//int main()
//{
//	int n = 47;
//	int ret = nthUglyNumber(n);
//	printf("%d", ret);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//超时
//int* constructArr(int* a, int aSize, int* returnSize)
//{
//	int* ret = malloc(sizeof(int)*aSize);
//	*returnSize = 0;
//	for (int i = 0; i < aSize; i++)
//	{
//		ret[*returnSize] = 1;
//		for (int j = 0; j < aSize; j++)
//		{
//			if (j == i)
//				continue;
//			ret[*returnSize] *= a[j];
//		}
//		(*returnSize)++;
//	}
//	return ret;
//}

//int* constructArr(int* a, int aSize, int* returnSize)
//{
//	*returnSize = 0;
//	if (aSize <= 0)
//		return NULL;
//	int* ret = malloc(sizeof(int)*aSize);
//	ret[*returnSize] = 1;
//	//左三角
//	int tmp = 1;
//	int flag = aSize - 1;
//	int i = 0;
//	while (flag > 0)
//	{
//		tmp *= a[i];
//		ret[i + 1] = tmp;
//		i++;
//		flag--;
//	}
//	flag = aSize - 1;
//	//右三角
//	tmp = 1;
//	while (flag > 0)
//	{
//		tmp *= a[flag];
//		ret[flag - 1] *= tmp;
//		flag--;
//	}
//	*returnSize = aSize;
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int returnSize = 0;
//	int* ret = constructArr(arr, size, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}

////剑指 Offer 44. 数字序列中某一位的数字
//#include<stdio.h>
//int findNthDigit(int n)
//{
//	int count = 1;
//	int digitnum = 1;
//	int digit = 9;
//	//求出n所在的位数
//	while (n > digit)
//	{
//		count++;
//		n -= digit;
//		digitnum *= 10;
//		digit = count * digitnum * 9;
//	}
//	int size = n / count;
//	int post = n - count * size;
//	int flag = digitnum + size - 1;
//	int ret = 0;
//	if (post != 0)
//	{
//		flag += 1;
//		post = count - post + 1;
//		while (post)
//		{
//			ret = flag % 10;
//			flag /= 10;
//			post--;
//		}
//	}
//	else
//	{
//		ret = flag % 10;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 1000;
//	int count = findNthDigit(n);
//	printf("%d", count);
//	return 0;
//}

//剑指 Offer 64. 求1+2+…+n
//求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
#include<stdio.h>
int sumNums(int n)
{
	n && (n += sumNums(n - 1));
	return n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = sumNums(n);
	printf("%d", ret);
	return 0;
}