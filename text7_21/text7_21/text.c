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

//1720. 解码异或后的数组
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int* decode(int* encoded, int encodedSize, int first, int* returnSize)
{
	int* arr = malloc(sizeof(int)*(encodedSize + 1));
	assert(arr);
	arr[0] = first;
	for (int i = 1; i <= encodedSize; i++)
	{
		arr[i] = arr[i - 1] ^ encoded[i - 1];
	}
	*returnSize = encodedSize + 1;
	return arr;
}
int main()
{
	int encoded[] = { 1,2,3 };
	int encodedSize = sizeof(encoded) / sizeof(encoded[0]);
	int first = 1;
	int returnSize = 0;
	int* res = decode(encoded, encodedSize, first, &returnSize);
	for (int i = 0; i < returnSize; i++)
		printf("%d", res[i]);
	free(res);
	return 0;
}