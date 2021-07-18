#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdbool.h>
//bool Find(int arr[][4], int rowSize, int colSize, int target)
//{
//	int row = 0, col = colSize - 1;
//	while (row < rowSize && col >= 0)
//	{
//		if (arr[row][col] > target)
//			col--;
//		else if (arr[row][col] < target)
//			row++;
//		else
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	int arr[4][4] = { 1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15 };
//	int target = 19;
//	bool falg = Find(arr, 4, 4, target);
//	printf("%d", falg);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char* Replace(char* nums)
//{
//	int size = strlen(nums);
//	char* res = malloc(sizeof(char)*(3 * size + 1));
//	int begin = 0, cur = 0;
//	while (begin <= size)
//	{
//		if (nums[begin] != ' ')
//		{
//			res[cur++] = nums[begin++];
//		}
//		else
//		{
//			res[cur++] = '%';
//			res[cur++] = '2';
//			res[cur++] = '0';
//			begin++;
//		}
//	}
//	return res;
//}
//int main()
//{
//	char nums[] = "abc defgx yz";
//	char* ans = Replace(nums);
//	printf("%s", ans);
//	free(ans);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char acHello[] = "hello\0world";
//	char acNew[15] = { 0 };
//	strcpy(acNew, acHello);
//	printf("%d", strlen(acHello));
//	printf("%d", strlen(acNew));
//	return 0;
//}

//#include<stdio.h>
//int Fib(int n)
//{
//	int sum = 0, prev = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (i == 1)
//			sum += 1;
//		else
//		{
//			int falg = sum + prev;
//			prev = sum;
//			sum = falg;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main(int argc, char *argv[])
//{
//	char arr[1001];
//	scanf("%s", arr);
//	int nums[26] = { 0 };
//	int size = strlen(arr);
//	for (int i = 0; i < size; i++)
//	{
//		nums[arr[i] - 'a']++;
//	}
//	int maxi = 0;
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (nums[i] > nums[maxi])
//			maxi = i;
//	}
//	printf("%c\n", maxi + 'a');
//	printf("%d", nums[maxi]);
//	return 0;
//}


////1351. 统计有序矩阵中的负数
//#include<stdio.h>
////int countNegatives(int** grid, int gridSize, int* gridColSize)
////{
////	int count = 0;
////	for (int i = 0; i < gridSize; i++)
////	{
////		for (int j = 0; j < *gridColSize; j++)
////		{
////			if (grid[i][j] < 0)
////				count++;
////		}
////	}
////	return count;
////}
//
//
////二分法
//int countNegatives(int** grid, int gridSize, int* gridColSize)
//{
//	int count = 0;
//	for (int i = 0; i < gridSize; i++)
//	{
//		int left = 0, right = *gridColSize - 1;
//		while (left < right)
//		{
//			int mid = left + (right - left) / 2;
//			if (grid[i][mid] >= 0)
//				left = mid + 1;
//			else
//				right = mid;
//		}
//		if (grid[i][left] < 0)//1，-1或者1，1
//			count += *gridColSize - right;
//	}
//	return count;
//}
//int main()
//{
//
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize)
{
	*returnSize = 0;
	int* res = malloc(sizeof(int)*k);
	int* arr = malloc(sizeof(int)*matSize);
	for (int i = 0; i < matSize; i++)
	{
		int count = 0;
		for (int j = 0; j < *matColSize; j++)
		{
			if (mat[i][j] == 1)
				count++;
			else
				break;
		}
		arr[i] = count;
	}
	while (k)
	{
		int min = 0;
		for (int i = 0; i < matSize; i++)
		{
			if (arr[min] > arr[i])
				min = i;
		}
		arr[min] = *matColSize;
		res[(*returnSize)++] = min;
		k--;
	}
	free(arr);
	return res;
}