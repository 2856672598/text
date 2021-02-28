//#include<stdio.h>
////旋转数组
////方法一
////void reverse(int* nums, int start, int end)
////{
////	while (start < end)
////	{
////		int tmp = nums[start];
////		nums[start] = nums[end];
////		nums[end] = tmp;
////		start++;
////		end--;
////	}
////}
////void rotate(int* nums, int numsSize, int k)
////{
////	k = k % numsSize;//移动次数超过数组大小时
////	reverse(nums, 0, numsSize - 1);
////	reverse(nums, 0, k - 1);
////	reverse(nums, k, numsSize - 1);
////}
////方法2
//void rotate(int* nums, int numsSzie, int k)
//{
//	for (int i = 0; i < k; i++)
//	{
//		int tmp = nums[numsSzie - 1];
//		for (int j = numsSzie - 1; j > 0; j--)
//		{
//			nums[j] = nums[j - 1];
//		}
//		nums[0] = tmp;
//	}
//}
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	rotate(arr, 6, 11);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void reverse(int* nums, int start, int end)
//{
//	while (start < end)
//	{
//		int tmp = nums[start];
//		nums[start] = nums[end];
//		nums[end] = tmp;
//		start++;
//		end--;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	reverse(arr, 0, 5);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组形式的整数相加
//https://leetcode-cn.com/problems/add-to-array-form-of-integer/
#include<stdio.h>
#include<stdlib.h>
int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
{
	int KSize = 0;
	int tmp = K;
	while (tmp)
	{
		KSize++;
		tmp /= 10;
	}
	int size = ASize < KSize ? KSize : ASize;
	int* retArr = malloc(sizeof(int)*(size + 1));
	int Ai = ASize - 1;
	*returnSize = 0;
	int nextsum = 0;
	while (size--)
	{
		//防止当ASize 小于 KSize 时造成越界访问
		int a = 0;
		if (Ai >= 0)
		{
			a = A[Ai];
		}
		//相同的位相加
		int ret = a + K % 10 + nextsum;
		Ai--;
		K /= 10;
		//判断是否需要进位
		if (ret > 9)
		{
			ret = ret - 10;
			nextsum = 1;
		}
		else
		{
			nextsum = 0;
		}
		retArr[*returnSize] = ret;
		(*returnSize)++;
	}
	//判断一下是当计算完后是否还有进位
	if (nextsum == 1)
	{
		retArr[*returnSize] = 1;
		(*returnSize)++;
	}
	int left = 0, right = *returnSize - 1;
	//存在时是倒着存 的，这里逆序一下
	while (left < right)
	{
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		left++;
		right--;
	}
	return retArr;
}
int main()
{
	int arr[] = {2,1,5};
	int k = 806;
	int returnSize = 0;
	int* arr1 = addToArrayForm(arr, 3, k, &returnSize);

	for (int i = 0; i < returnSize; i++)
	{
		printf("%d ", arr1[i]);
	}
	free(arr1);
	arr1 = NULL;
	return 0;
}