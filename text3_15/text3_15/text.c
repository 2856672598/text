

////https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/submissions/
//#include<stdio.h>
//#include<malloc.h>
////时间复杂度是O（n^2)
////int findRepeatNumber(int* nums, int numsSize)
////{
////	for (int i = 0; i < numsSize; i++)
////	{
////		for (int j = i+1; j < numsSize; j++)
////		{
////			if (nums[i] == nums[j])
////				return nums[i];
////		}
////	}
////	return -1;
////}
////int findRepeatNumber(int* nums, int numsSize)
////{
////	int* arr = calloc(numsSize, sizeof(int));
////	for (int i = 0; i < numsSize; i++)
////	{
////		arr[nums[i]] += 1;
////		if (arr[nums[i]] == 2)
////		{
////			free(arr);
////			return nums[i];
////		}
////	}
////	free(arr);
////	return -1;
////}
//
////原地比较
//int findRepeatNumber(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		//先进行排序
//		while (nums[i] != i)
//		{
//			//判断是否重复
//			if (nums[i] == nums[nums[i]])
//				return nums[i];
//			int tmp = nums[i];
//			nums[i] = nums[tmp];
//			nums[tmp] = tmp;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int nums[] = { 0, 1, 2, 3, 4, 11, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int len = findRepeatNumber(nums, size);
//	printf("%d", len);
//	return 0;
//}


#include<stdbool.h>
#include<stdio.h>
bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target)
{
	if (matrixSize == 0 || *matrixColSize == 0)
		return false;
	int i = 0, j = (*matrixColSize) - 1;
	while (j >= 0 && i < matrixSize)
	{
		if (matrix[i][j] < target)
			i++;
		else if (matrix[i][j] > target)
			j--;
		else
			return true;
	}
	return false;
}
int main()
{
	int arr = NULL;
	int *matrix = arr;
	int len = 0;
	findNumberIn2DArray(&matrix, 0, &len, 0);
	return 0;
}