#define _CRT_SECURE_NO_WARNINGS       
//#include<stdio.h>
//int min(int a, int b)
//{
//	return a < b ? a : b;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	c = min(a, b);
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//double average(double x, double y)
//{
//	return (x + y) / 2.0;
//}
//int main()
//{
//	double a = 1.8, b = 2.6;
//	printf("%lf\n", average(a, b));         
//	return 0;
//}


//#include<stdio.h>
//int my_pow(int n)
//{
//	int sum = 1;
//	while (n)
//	{
//		sum *= n;
//		n--;
//	}
//	return sum;
//}
//int main()
//{
//	int x = 5, sum = 0;
//	for (int i = 1; i <= x; i++)
//	{
//		sum += my_pow(i);
//	}
//	printf("%d ", sum);
//	return 0;
//}


//#include<stdio.h>
//// ²åÈëÅÅÐò
//void InsertSort(int* a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int tmp = a[end + 1];
//		while (end >= 0)
//		{
//			if (a[end] > tmp)
//			{
//				a[end + 1] = a[end];
//				end--;
//			}
//			else
//				break;
//		}
//		a[end + 1] = tmp;
//	}
//}
//
//// Ï£¶ûÅÅÐò
//void ShellSort(int* a, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap /= 2;
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int tmp = a[end + gap];
//			while (end >= 0)
//			{
//				if (a[end] > tmp)
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//					break;
//			}
//			a[end + gap] = tmp;
//		}
//	}
//}
//
//// ¶ÑÅÅÐò
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void AdjustDwon(int* a, int n, int root)
//{
//	int parent = root;
//	int child = parent * 2 + 1;//Ä¬ÈÏÎª×óº¢×Ó
//	while (child < n)
//	{
//		if (child + 1 < n&&a[child] > a[child + 1])
//		{
//			child++;
//		}
//		if (a[parent] > a[child])
//		{
//			Swap(&a[parent], &a[child]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			break;
//	}
//}
//void HeapSort(int* a, int n)
//{
//	//½¨¶Ñ
//	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDwon(a, n, i);
//	}
//	while (n >= 1)
//	{
//		Swap(&a[n - 1], &a[0]);
//		n--;
//		AdjustDwon(a, n, 0);
//	}
//}
////Ñ¡ÔñÅÅÐò
//void SelectSort(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int min = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[min] > a[j])
//				min = j;
//		}
//		int tmp = a[min];
//		a[min] = a[i];
//		a[i] = tmp;
//	}
//}
//int main()
//{
//	int arr[] = { 3,5,1,9,2,78,0,-89 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//InsertSort(arr, size);
//
//	//ShellSort(arr, size);
//
//	//HeapSort(arr, size);
//
//	SelectSort(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
////·½·¨Ò»
////int searchInsert(int* nums, int numsSize, int target)
////{
////	int i = 0;
////	for (i = 0; i < numsSize; i++)
////	{
////		if (nums[i] >= target)
////			break;
////	}
////	return i;
////}
////·½·¨¶þ
//int searchInsert(int* nums, int numsSize, int target)
//{
//	int left = 0, right = numsSize - 1;
//	int min = (left + right) / 2;
//	int flag = 0;
//	while (left <= right)
//	{
//		if (nums[min] < target)
//		{
//			left = min + 1;
//			flag = left;
//		}
//		else if (nums[min] > target)
//		{
//			flag = min;
//			right = min - 1;
//		}
//		else
//			return min;
//		min = (left + right) / 2;
//	}
//	return flag;
//}
//int main()
//{
//	int arr[] = { 1,3,5,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int flag = searchInsert(arr, size, 0);
//	printf("%d ", flag);
//	return 0;
//}


//#include<stdio.h>
//void moveZeroes(int* nums, int numsSize)
//{
//	int flag = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != 0)
//		{
//			nums[flag] = nums[i];
//			flag++;
//		}
//	}
//
//	for (int i = flag; i < numsSize; i++)
//		nums[i] = 0;
//}
//int main()
//{
//	int arr[] = { 0,1,0,3,12 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	moveZeroes(arr, size);
//	for (int i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include<stdbool.h>
//#include<stdio.h>
//void my_sort(int* nums, int numsSize)
//{
//	//Ï£¶ûÅÅÐò
//	int gap = numsSize;
//	while (gap > 1)
//	{
//		gap /= 2;
//		for (int i = 0; i < numsSize - gap; i++)
//		{
//			int end = i;
//			int tmp = nums[end + gap];
//			while (end >= 0)
//			{
//				if (nums[end] > tmp)
//				{
//					nums[end + gap] = nums[end];
//					end -= gap;
//				}
//				else
//					break;
//			}
//			nums[end + gap] = tmp;
//		}
//	}
//}
//bool containsDuplicate(int* nums, int numsSize)
//{
//	my_sort(nums, numsSize);
//	int cur = 1, prev = 0;
//	while (cur < numsSize)
//	{
//		if (nums[cur] == nums[prev])
//			return true;
//		prev = cur;
//		cur++;
//	}
//	return false;
//}
//int main()
//{
//	int arr[] = { 2,14,18,22,22 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bool flag = containsDuplicate(arr, size);
//	if (flag)
//		printf("true\n");
//	else
//		printf("false\n");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize)
//{
//	int arr[1001] = { 0 };
//	for (int i = 0; i < arr1Size; i++)
//	{
//		arr[arr1[i]]++;
//	}
//	int* ret = malloc(sizeof(int)*arr1Size);
//	int p = 0;
//	for (int i = 0; i < arr2Size; i++)
//	{
//		while (arr[arr2[i]])
//		{
//			ret[p++] = arr2[i];
//			arr[arr2[i]]--;
//		}
//	}
//	for (int i = 0; i < 1001; i++)
//	{
//		while (arr[i])
//		{
//			ret[p++] = i;
//			arr[i]--;
//		}
//	}
//	*returnSize = arr1Size;
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 2,3,1,3,2,4,6,7,9,2,19 };
//	int arr2[] = { 2,1,4,3,9,6 };
//	int size1 = sizeof(arr1) / sizeof(arr1[0]);
//	int size2 = sizeof(arr2) / sizeof(arr2[0]);
//	int returnsize = 0;
//	int* ret = relativeSortArray(arr1, size1, arr2, size2, &returnsize);
//	for (int i = 0; i < returnsize; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	free(ret);
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
void AdjustDwon(int* nums, int root, int size)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && nums[child] < nums[child + 1])
			child++;
		if (nums[child] > nums[parent])
		{
			int tmp = nums[child];
			nums[child] = nums[parent];
			nums[parent] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}
int thirdMax(int* nums, int numsSize)
{
	//½¨¶Ñ
	for (int i = (numsSize - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDwon(nums, i, numsSize);
	}
	int flag = 0;
	for (int i = numsSize - 1; i >= 0; i--)
	{
		int tmp = nums[i];
		nums[i] = nums[0];
		nums[0] = tmp;
		AdjustDwon(nums, 0, i);
		
	}
}
int main()
{
	int arr[] = { 3,2, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d ", thirdMax(arr, size));
	return 0;
}