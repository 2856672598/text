#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"stack.h"
void CountSort(int* a, int arrSize)
{
	int max = a[0], min = a[0];
	for (int i = 0; i < arrSize; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	int range = max - min + 1;
	int* count = malloc(sizeof(int)*range);
	memset(count, 0, sizeof(int)*range);
	if (count)
	{
		for (int i = 0; i < arrSize; i++)
		{
			count[a[i] - min]++;
		}

		int j = 0;
		for (int i = 0; i < range; i++)
		{
			while (count[i]--)
			{
				a[j++] = i + min;
			}
		}
	}
	else
		exit(-1);
	free(count);
}
//归并排序
void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
		return;
	int min = (left + right) / 2;
	int begin1 = left, end1 = min;
	int begin2 = end1 + 1, end2 = right;
	//
	_MergeSort(a, begin1, end1, tmp);
	_MergeSort(a, begin2, end2, tmp);

	//归并
	int insert = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])
		{
			tmp[insert++] = a[begin1++];
		}
		else
			tmp[insert++] = a[begin2++];
	}
	while (begin1 <= end1)
	{
		tmp[insert++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[insert++] = a[begin2++];
	}

	//拷贝
	for (int i = left; i < insert; i++)
	{
		a[i] = tmp[i];
	}
}
void MergeSort(int* a, int n)
{
	int*tmp = malloc(sizeof(int)*n);
	if (tmp)
	{
		_MergeSort(a, 0, n - 1, tmp);
	}
	free(tmp);
}

void MergeSortNonR(int* a, int n)
{
	int* tmp = malloc(sizeof(int)*n);
	if (!tmp)
		exit(-1);
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += gap * 2)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + gap * 2 - 1;
			int insert = i;
			//右区间不存在
			if (begin2 >= n)
				break;
			//右区间不够--调整边界
			if (end2 >= n)
				end2 = n - 1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
					tmp[insert++] = a[begin1++];
				else
					tmp[insert++] = a[begin2++];
			}
			while (begin1 <= end1)
				tmp[insert++] = a[begin1++];
			while (begin2 <= end2)
				tmp[insert++] = a[begin2++];

			//拷贝
			for (int j = 0; j <= end2; j++)
			{
				a[j] = tmp[j];
			}
		}
		gap *= 2;
	}
}
void InsertSort(int* nums, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = nums[end + 1];
		while (end >= 0)
		{
			if (nums[end] > tmp)
			{
				nums[end + 1] = nums[end];
				end--;
			}
			else
				break;
		}
		nums[end + 1] = tmp;
	}
}
int GetMid(int* nums, int left, int right)
{
	int mid = (left + right) >> 1;
	if (nums[left] > nums[mid])
	{
		if (nums[left] < nums[right])
			return left;
		else if (nums[mid] > nums[right])
			return mid;
		else
			return right;
	}
	else
	{
		if (nums[right] > nums[mid])
			return mid;
		else if (nums[left] > nums[right])
			return left;
		else
			return right;
	}
}
//挖坑法
int PartSort1(int* a, int left, int right)
{
	int pivot = left, key = a[left];
	while (left < right)
	{
		//右边找小
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[pivot] = a[right];
		pivot = right;
		//左边找大
		while (left < right && a[left] <= key)
		{
			left++;
		}
		a[pivot] = a[left];
		pivot = left;
	}
	a[pivot] = key;
	return pivot;
}
void Swap(int* a, int*b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int PartSort2(int* a, int left, int right)
{
	int key = a[left], pivot = left;
	while (left < right)
	{
		while (left < right&&a[right] >= key)
			right--;
		while (left < right&& a[left] <= key)
			left++;
		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[pivot]);
	return left;
}
//前后指针
int PartSort3(int* a, int left, int right)
{
	int key = a[left], pivot = left;
	int prev = left, cur = left + 1;
	while (cur <= right)
	{
		//找到小的就交换
		if (a[cur] < key)
		{
			Swap(&a[cur], &a[++prev]);
		}
		cur++;
	}
	Swap(&a[prev], &a[pivot]);
	return prev;
}
void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;
	//三数取中
	int mid = GetMid(a, left, right);
	Swap(&a[left], &a[mid]);

	//int pos = PartSort1(a, left, right);
	//QuickSort(a, left, pos - 1);
	//QuickSort(a, pos + 1, right);

	//int pos = PartSort2(a, left, right);
	//QuickSort(a, left, pos - 1);
	//QuickSort(a, pos + 1, right);

	int pos = PartSort3(a, left, right);
	//小区间优化
	if (pos - left + 1 < 10)
		InsertSort(a + left, pos - left + 1);
	else
		QuickSort(a, left, pos - 1);
	if (right - pos + 1 < 10)
	{
		InsertSort(a + pos, right - pos + 1);
	}
	else
		QuickSort(a, pos + 1, right);
}

void QuickSortNonR(int* a, int left, int right)
{
	ST st;
	InitStack(&st);
	StackPush(&st, 0, right);
	while (!StackEmpty(&st))
	{
		Data data = StackTop(&st);
		int left = data.left, right = data.right;

		StackPop(&st);
		int pos = PartSort1(a, left, right);
		//先进右
		if (pos + 1 < right)
			StackPush(&st, pos + 1, right);
		if (pos - 1 > left)
			StackPush(&st, left, pos - 1);
	}
	DestoryStack(&st);
}

void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				Swap(&a[j], &a[j + 1]);
		}
	}
}

void Text()
{
	int arr[] = { 4,2,3,6,5,9,1,0,2,3,6,7,34,1,2,89,3,4,5,6,21, 3 };
	//int arr[] = { 5, 1, 1, 2, 0, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	//CountSort(arr, size);

	//MergeSort(arr, size);

	//MergeSortNonR(arr, size);

	QuickSort(arr, 0, size - 1);

	//QuickSortNonR(arr, 0, size - 1);

	//BubbleSort(arr, size);

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}
int main()
{
	Text();
	return 0;
}