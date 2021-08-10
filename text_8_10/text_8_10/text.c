#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdbool.h>
//#include<assert.h>
////240. 搜索二维矩阵 II
//bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
//{
//	assert(matrix && matrixColSize);
//	int row = 0, col = matrixColSize[0] - 1;
//	int flag = 0;
//	while (row < matrixSize && col >= 0)
//	{
//		if (matrix[row][col] > target)
//		{
//			col--;
//		}
//		else if (matrix[row][col] < target)
//			row++;
//		else
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag)
//		return true;
//	return false;
//}
//int main()
//{
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	char nums1[] = "hello";
//	char nums2[] = "hello";
//	const char* p1 = "hello";
//	const char* p2 = "hello";
//	if (nums1 == nums2)//变量nums1 和nums2 是单独开辟空间的
//		printf("nums1 == nums2\n");
//	else
//		printf("nums1!= nums2\n");
//	if (p1 == p2)//p1 p2都是指向同一个字符串常量
//		printf("p1 == p2\n");
//	else
//		printf("p1 != p2\n");
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void print1(int* nums, int numsSize)
//{
//	assert(nums);
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//		printf("%d ", nums[i]);
//}
//void Print2(int(*arr)[6], int size)
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < size; i++)
//		printf("%d ", (*arr)[i]);
//}
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//print1(arr, size);
//
//	Print2(&arr, size);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//void print1(int nums[][4], int row, int col)
//{
//	assert(nums);
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", nums[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[4], int row, int col)
//{
//	assert(p);
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int nums[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int row = 3, col = 4;
//	//print1(nums, row, col);
//	print2(nums, row, col);
//	return 0;
//}


//#include<stdio.h>
//void print1(int* nums[], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", nums[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int nums1[] = { 1,2,3,4,5 };
//	int nums2[] = { 2,3,4,5,6 };
//	int nums3[] = { 3,4,5,6,7 };
//
//	int *nums[] = { nums1,nums2,nums3 };
//	int row = 3, col = 5;
//	print1(nums, row, col);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//#include<stdbool.h>
//void reMove(char* s, int left, int right)
//{
//	assert(s);
//	while (left < right)
//	{
//		char ch = s[left];
//		s[left] = s[right];
//		s[right] = ch;
//		left++;
//		right--;
//	}
//}
//void leftRotate(char* s, int k)
//{
//	assert(s);
//	int size = strlen(s);
//	k %= size;
//	reMove(s, 0, k - 1);
//	reMove(s, k, size - 1);
//	reMove(s, 0, size - 1);
//}
//
//int main()
//{
//	char s[] = "ABCD";
//	int k = 5;
//	leftRotate(s, k);
//	printf("%s", s);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<string.h>
////bool isLeftRotate(char* des, char*sour)
////{
////	int size = strlen(des);
////	char* arr = malloc(sizeof(char)*(size * 2 + 1));
////	strcpy(arr, des);
////	strcat(arr, des);
////	int i = 0;
////	int end = size, cur1 = 0, cur2 = 0;
////	int flag = 0;
////	while (end < 2 * size)
////	{
////		while (cur1 < end &&arr[cur1] == sour[cur2])
////		{
////			cur1++;
////			cur2++;
////		}
////		if (cur1 < end)
////		{
////			cur2 = 0;
////			cur1 = ++i;
////			end += 1;
////		}
////		else
////		{
////			flag = 1;
////			break;
////		}
////	}
////	free(arr);
////	if (flag)
////		return true;
////	return false;
////}
//
//bool isLeftRotate(char* des, char*sour)
//{
//	int size = strlen(des);
//	char* arr = malloc(sizeof(char)*(size * 2 + 1));
//	strcpy(arr, des);
//	strcat(arr, des);
//	if (strstr(arr, sour))
//		return true;
//	return false;
//}
//int main()
//{
//	char arr1[] = "AAAAC";
//	char arr2[] = "AAAAA";
//	printf("%d", isLeftRotate(arr1, arr2));
//	return 0;
//}


////1962. 移除石子使总数最小
//#include<stdio.h>
//#include<assert.h>
//void adjustDown(int* nums, int size, int root)
//{
//	assert(nums);
//	int parent = root;
//	int child = root * 2 + 1;//默认左孩子
//	while (child < size)
//	{
//		if (child + 1 < size&&nums[child] < nums[child + 1])
//		{
//			child += 1;
//		}
//		if (nums[child] > nums[parent])
//		{
//			int tmp = nums[child];
//			nums[child] = nums[parent];
//			nums[parent] = tmp;
//			parent = child;
//			child = child * 2 + 1;
//		}
//		else
//			break;
//	}
//}
//void heapSort(int* nums, int size)
//{
//	//建堆
//	int i = 0;
//	for (i = (size - 1 - 1) / 2; i >= 0; i--)
//	{
//		adjustDown(nums, size, i);
//	}
//}
//int minStoneSum(int* piles, int pilesSize, int k)
//{
//	assert(piles);
//	heapSort(piles, pilesSize);
//	while (k)
//	{
//		int floor = 0;
//		if (piles[floor] % 2 != 0)
//		{
//			piles[floor] /= 2;
//			piles[floor] += 1;
//		}
//		else
//			piles[floor] /= 2;
//		k--;
//
//		adjustDown(piles, pilesSize, 0);
//	}
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < pilesSize; i++)
//	{
//		sum += piles[i];
//	}
//	return sum;
//}
//int main()
//{
//	int nums[] = { 4,3,6,7 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int k = 3;
//	int ret = minStoneSum(nums, numsSize, k);
//	printf("%d", ret);
//	return 0;
//}


