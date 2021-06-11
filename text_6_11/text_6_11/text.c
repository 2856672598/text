#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void Qsort(int* arr, int left, int right)
{
	if (left >= right)
		return;
	int begin = left, end = right;
	int pivot = left, key = arr[left];
	while (begin < end)
	{
		//右边找小放到左边
		while (begin < end && arr[end] >= key)
		{
			end--;
		}
		arr[pivot] = arr[end];
		pivot = end;
		//左边找大放到右边
		while (begin < end && arr[begin] <= key)
			begin++;
		arr[pivot] = arr[begin];
		pivot = begin;
	}
	arr[pivot] = key;
	//递归左右
	Qsort(arr, left, pivot - 1);
	Qsort(arr, pivot + 1, right);
}
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void Qsort1(int* arr, int left, int right)
{
	if (left >= right)
		return;
	int keyi = left, cur = left + 1, prev = left;
	while (cur <= right)
	{
		if (arr[cur] < arr[keyi])
		{
			prev++;
			Swap(&arr[prev], &arr[cur]);
		}
		cur++;
	}
	//将keyi中的元素放到prev的位置上
	Swap(&arr[prev], &arr[keyi]);
	
	Qsort1(arr, left, prev - 1);
	Qsort1(arr, prev + 1, right);
}

void _MergeSort(int* a, int left, int right, int* arr)
{
	if (left >= right)
		return;
	//递归
	int min = (left + right) / 2;
	_MergeSort(a, left, min, arr);
	_MergeSort(a, min + 1, right, arr);

	int left1 = left, right1 = min;
	int left2 = min + 1, right2 = right;
	int insert = left;
	while (left1 <= right1 && left2 <= right2)
	{
		if (a[left1] < a[left2])
			arr[insert++] = a[left1++];
		else
			arr[insert++] = a[left2++];
	}
	while (left1 <= right1)
	{
		arr[insert++] = a[left1++];
	}
	while (left2 <= right2)
		arr[insert++] = a[left2++];

	//拷贝 从arr中拷贝到元数组
	for (int i = left; i <= right; i++)
	{
		a[i] = arr[i];
	}
}
void MergeSort(int* a, int n)
{
	int* arr = malloc(sizeof(int)*n);
	_MergeSort(a, 0, n - 1, arr);
}
//int main()
//{
//	int arr[] = { 2,6,3,9,0,4,1 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	//Qsort(arr, 0, size - 1);
//
//	//Qsort1(arr, 0, size - 1);
//
//	MergeSort(arr, size);
//
//	for (int i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

void BubbleSort(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

////169. 多数元素
//int comp(const void*a, const void*b)
//{
//	return (*(int*)a) - *((int*)b);
//}
//int majorityElement(int* nums, int numsSize)
//{
//	//排序
//	qsort(nums, numsSize, sizeof(int), comp);
//	int min = numsSize / 2;
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == nums[min])
//			break;
//		min++;
//	}
//	return nums[i];
//}
//int main()
//{
//	int arr[] = { 2,2,1,1,1,2,2 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	int val = majorityElement(arr, size);
//	printf("%d ", val);
//
//	return 0;
//}

//896. 单调数列
bool isMonotonic(int* nums, int numsSize)
{
	if (nums[0] < nums[numsSize - 1])
	{
		//升序
		for (int i = 0; i < numsSize - 1; i++)
		{
			if (nums[i] > nums[i + 1])
				return false;
		}
	}
	else if (nums[0] > nums[numsSize - 1])
	{
		//降序
		for (int i = 0; i < numsSize - 1; i++)
		{
			if (nums[i] < nums[i + 1])
				return false;
		}
	}
	else
	{
		for (int i = 0; i < numsSize - 1; i++)
		{
			if (nums[i] != nums[i + 1])
				return false;
		}
	}
	return true;
}