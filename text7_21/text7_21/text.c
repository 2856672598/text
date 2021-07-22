#define _CRT_SECURE_NO_WARNINGS

////1009. 十进制整数的反码
//#include<stdio.h>
//int bitwiseComplement(int n)
//{
//	int res = 0, i = 0;
//	if (n == 0)
//		return 1;
//	while (n)
//	{
//		if ((n & 1) == 0)
//			res += 1 << i;
//		n >>= 1;
//		i++;
//	}
//	return res;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", bitwiseComplement(n));
//	return 0;
//}


//#include<stdio.h>
////int numberOfSteps(int num)
////{
////	int count = 0;
////	while (num)
////	{
////		if (num % 2 == 0)
////			num /= 2;
////		else
////			num -= 1;
////		count++;
////	}
////	return count;
////}
//
////方法二
//int numberOfSteps(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num & 1)
//			num ^= 1;
//		else
//			num >>= 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", numberOfSteps(num));
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int OneSize(unsigned n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n & 1)
//			count++;
//		n >>= 1;
//	}
//	return count;
//}
//void Sort(int* nums,int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int end = i, tmp = nums[end + 1], flag = OneSize(nums[end + 1]);
//		while (end >= 0)
//		{
//			int endSize = OneSize(nums[end]);
//			if (endSize >= flag)
//			{
//				if (endSize > flag || nums[end] > tmp)
//				{
//					nums[end + 1] = nums[end];
//					end--;
//				}
//				else
//					break;
//			}
//			else
//				break;
//		}
//		nums[end + 1] = tmp;
//	}
//}
//int* sortByBits(int* arr, int arrSize, int* returnSize)
//{
//	int* res = malloc(sizeof(int)*arrSize);
//	*returnSize = 0;
//	for (int i = 0; i < arrSize; i++)
//		res[(*returnSize)++] = arr[i];
//	Sort(res, *returnSize);
//	return res;
//}
//int main()
//{
//	int arr[] = { 1024,512,256,128,64,32,16,8,4,2,1 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int returnSize = 0;
//	int* res = sortByBits(arr, size,&returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", res[i]);
//	free(res);
//	return 0;
//}

////1486. 数组异或操作
//#include<stdio.h>
//int xorOperation(int n, int start)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum ^= start;
//		start += 2;
//		n--;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0, start;
//	scanf("%d %d", &n, &start);
//	int res = xorOperation(n, start);
//	printf("%d", res);
//	return 0;
//}

////1720. 解码异或后的数组
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//int* decode(int* encoded, int encodedSize, int first, int* returnSize)
//{
//	int* arr = malloc(sizeof(int)*(encodedSize + 1));
//	assert(arr);
//	arr[0] = first;
//	for (int i = 1; i <= encodedSize; i++)
//	{
//		arr[i] = arr[i - 1] ^ encoded[i - 1];
//	}
//	*returnSize = encodedSize + 1;
//	return arr;
//}
//int main()
//{
//	int encoded[] = { 1,2,3 };
//	int encodedSize = sizeof(encoded) / sizeof(encoded[0]);
//	int first = 1;
//	int returnSize = 0;
//	int* res = decode(encoded, encodedSize, first, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d", res[i]);
//	free(res);
//	return 0;
//}

////面试题 05.06. 整数转换
//#include<stdio.h>
//int convertInteger(int A, int B)
//{
//	unsigned int flag = A ^ B;
//	int count = 0;
//	while (flag)
//	{
//		if (flag & 1)
//			count++;
//		flag >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = convertInteger(a, b);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int IsleapYear(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (IsleapYear(i))
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int Is_Prime(int x)
//{
//	for (int i = 2; i <= x / 2; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100; i < 200; i++)
//	{
//		if (Is_Prime(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
////int Is_LeapYear(int y)
////{
////	return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
////}
//
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d %d", &x, &y);
//	printf("交换前x = %d,y = %d\n", x, y);
//	Swap(&x, &y);
//	printf("交换后 x = %d,y = %d\n", x, y);
//	return 0;
//}

//#include<stdio.h>
//void MultTable(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%2d * %2d = %2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	MultTable(n);
//	return 0;
//}

////1446. 连续字符
//#include<stdio.h>
//#include<string.h>
//int maxPower(char * s)
//{
//	int size = strlen(s);
//	int max = 0;
//	for (int i = 0; i < size; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < size; j++)
//		{
//			if (s[i] != s[j])
//				break;
//		}
//		if ((j - i) > max)
//			max = j - i;
//	}
//	return max;
//}
//int main()
//{
//	char arr[] = "leetcode";
//	int ret = maxPower(arr);
//	printf("%d", ret);
//	return 0;
//}

////58. 最后一个单词的长度
//#include<stdio.h>
//#include<string.h>
//int lengthOfLastWord(char * s)
//{
//	int size = strlen(s);
//	int count = 0;
//	for (int i = size - 1; i >= 0; i--)
//	{
//		if (s[i] != ' ')
//			count++;
//		else if (count != 0)
//			break;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "Hello World";
//	int ret = lengthOfLastWord(arr);
//	printf("%d", ret);
//	return 0;
//}

////74.搜索二维矩阵
//#include<stdio.h>
//#include<stdbool.h>
//bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
//{
//	int row = 0, col = *matrixColSize - 1;
//	while (row < matrixSize || col >= 0)
//	{
//		if (matrix[row][col] > target)
//			col--;
//		else if (matrix[row][col] < target)
//			row++;
//		else
//			return true;
//	}
//	return false;
//}


#include<stdio.h>
#include<stdbool.h>
//bool search(int* nums, int numsSize, int target)
//{
//	for (int i = 0; i < numsSize; i++)
//		if (nums[i] == target)
//			return true;
//	return false;
//}

bool search(int* nums, int numsSize, int target)
{
	int left = 0, right = numsSize - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (nums[mid] == target)
			return true;
		if (nums[mid] > nums[0])
		{
			if (nums[mid] < target)
				left = mid + 1;
			else
				right = mid - 1;
		}
		else
		{
			if (nums[mid] < target)
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return false;
}