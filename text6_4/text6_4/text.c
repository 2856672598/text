#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>
#include"stack.h"
void Swap(int*a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 插入排序
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
				break;
		}
		a[end + 1] = tmp;
	}
}

// 希尔排序
void ShellSort(int* a, int n)
{
	int Spike = n;
	while (Spike > 1)
	{
		Spike /= 2;
		for (int i = 0; i < n - Spike - 1; i++)
		{
			int end = i;
			int tmp = a[end + Spike];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + Spike] = a[end];
					end -= Spike;
				}
				else
					break;
			}
			a[end + Spike] = tmp;
		}
	}
}

// 选择排序
//void SelectSort(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int min = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[j] < a[min])
//				min = j;
//		}
//
//		if (min != i)
//		{
//			int tmp = a[i];
//			a[i] = a[min];
//			a[min] = tmp;
//		}
//	}
//}

void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int maxi = begin, mini = end;
		//每次遍历找出最最大的和最小的
		for (int i = begin; i <= end; i++)
		{
			if (a[maxi] < a[i])
				maxi = i;
			if (a[mini] > a[i])
				mini = i;
		}
		Swap(&a[mini], &a[begin]);
		if (maxi == begin)
		{
			maxi = mini;
		}
		Swap(&a[maxi], &a[end]);
		begin++;
		end--;
	}
}

// 堆排序
void AdjustDwon(int* a, int n, int root)
{
	int parent = root;
	int child = root * 2 + 1;//默认为左孩子
	while (child < n)
	{
		//判断左右孩子谁更大
		if (child + 1 < n && a[child] < a[child + 1])
			child++;
		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;//无需调整满足条件
	}
}
void HeapSort(int* a, int n)
{
	//建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDwon(a, n, i);
	}
	int flag = n;
	while (flag > 1)
	{
		Swap(&a[0], &a[flag - 1]);
		flag--;
		AdjustDwon(a, flag, 0);
	}
}

//冒泡排序
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				Swap(&a[i], &a[j]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}

//void BubbleSort(int* a, int n)
//{
//	bool flag = true;//当数组有序后停止
//	for (int i = 1; i < n && flag; i++)
//	{
//		flag = false;
//		for (int j = n - 1; j >= i; j--)
//		{
//			if (a[j] < a[j - 1])
//			{
//				Swap(&a[j], &a[j - 1]);
//				flag = true;
//			}
//		}
//	}
//}


//快排
int GetMid(int*a, int left, int right)
{
	int mid = (left + right) >> 1;
	if (a[left] >a[mid])
	{
		if (a[mid] > a[right])
			return mid;
		else if (a[left] > a[right])
			return right;
		else
			return left;
	}
	else
	{
		if (a[mid] < a[right])
			return mid;
		else if (a[left] > a[right])
			return right;
		else
			return left;
	}
}

void Qsort(int* a, int left, int right)
{
	int begin = left, end = right;
	if (begin >= end)
		return;
	//三数取中
	int mid = GetMid(a, left, right);
	Swap(&a[mid], &a[left]);

	int pivot = left, key = a[left];
	while (begin < end)
	{
		//从右往左找比key小的
		while (begin < end&&a[end] >= key)
		{
			end--;
		}
		//找到后进坑
		a[pivot] = a[end];
		pivot = end;
		//从左向右找比key大的放进坑里
		while (begin < end&&a[begin] <= key)
		{
			begin++;
		}
		a[pivot] = a[begin];
		pivot = begin;
	}
	//把key放入坑中
	a[pivot] = key;
	Qsort(a, left, pivot - 1);
	Qsort(a, pivot + 1, right);
	if (pivot - left + 1 > 10)
		Qsort(a, left, pivot - 1);
	else
		InsertSort(a + left, pivot - left + 1);

	if (right - pivot + 1 > 10)
		Qsort(a, pivot + 1, right);
	else
		InsertSort(a + pivot, right - pivot + 1);
}

void Qsort2(int* a, int left, int right)
{
	int begin = left, end = right, key = left;
	if (begin >= end)
		return;
	//三数取中
	int mid = GetMid(a, left, right);
	Swap(&a[mid], &a[key]);

	while (begin < end)
	{
		while (begin < end && a[end] >= a[key])
			end--;
		while (begin < end && a[begin] <= a[key])
			begin++;
		Swap(&a[end], &a[begin]);
	}
	Swap(&a[key], &a[begin]);

	Qsort2(a, left, begin - 1);
	Qsort2(a, begin + 1, right);
}

void Qsort3(int* a, int left, int right)
{
	//快慢指针
	if (left >= right)
		return;
	int mid = GetMid(a, left, right);
	Swap(&a[left], &a[mid]);

	int cur = left + 1, prev = left, keyi = left;
	while (cur <= right)
	{
		//遇到比key小的就交换
		if (a[cur] < a[keyi])
		{
			prev++;
			Swap(&a[prev], &a[cur]);
		}
		cur++;
	}
	//将prev与key进行交换
	Swap(&a[prev], &a[keyi]);

	Qsort3(a, left, prev - 1);
	Qsort3(a, prev + 1, right);
}

//非递归实现快排
int Single(int* arr, int left, int right)
{
	int pivot = left, key = arr[left];
	while (left < right)
	{
		while (left < right && arr[right] >= key)
			right--;
		arr[pivot] = arr[right];
		pivot = right;
		while (left < right &&  arr[left] <= key)
			left++;
		arr[pivot] = arr[left];
		pivot = left;
	}
	arr[pivot] = key;
	return pivot;
}
void Qsort4(int* arr, int arrsize)
{
	ST st;
	InitStack(&st);
	int left = 0, right = arrsize - 1;
	StackPush(&st, left, right);
	while (!StackEmpty(&st))
	{
		Data data = StackTop(&st);
		StackPop(&st);
		left = data.left;
		right = data.right;
		int pivot = Single(arr, left, right);

		if (pivot + 1 < right)
		{
			StackPush(&st, pivot + 1, right);
		}
		if (pivot - 1 > left)
		{
			StackPush(&st, left, pivot - 1);
		}
	}
	DestoryStack(&st);
}

//归并排序
void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
		return;
	//排序---划分子问题---让左右区间都有序
	int mid = (left + right) >> 1;
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid + 1, right, tmp);
	//归并
	int left1 = left, right1 = mid;
	int left2 = mid + 1, right2 = right;
	int insert = left;
	while (left1 <= right1 && left2 <= right2)
	{
		if (a[left1] < a[left2])
		{
			tmp[insert++] = a[left1++];
		}
		else
		{
			tmp[insert++] = a[left2++];
		}
	}
	while (left1 <= right1)
	{
		tmp[insert++] = a[left1++];
	}
	while (left2 <= right2)
	{
		tmp[insert++] = a[left2++];
	}
	//拷贝
	for (int i = left; i <= right; i++)
	{
		a[i] = tmp[i];
	}

}
//void MergeSort(int* a, int n)
//{
//	int* tmp = malloc(sizeof(int)*n);
//
//	_MergeSort(a, 0, n - 1, tmp);
//
//	free(tmp);
//}

void MergeSort1(int* a, int n, int* tmp)
{
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += gap * 2)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + gap * 2 - 1;
			int insert = i;
			//右区间可能不够--调整右区间的边界
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			//右区间可能不存在
			if (begin2 >= n)
				break;

			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
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
			for (int j = 0; j < end2; j++)
			{
				a[j] = tmp[j];
			}
		}
		gap *= 2;
	}
	free(tmp);
}
void MergeSort(int* a, int n)
{
	int* tmp = malloc(sizeof(int)*n);
	MergeSort1(a, n, tmp);
}
int main()
{
	//int n = 100000;
	//srand((unsigned)time(NULL));
	//int* arr1 = malloc(sizeof(int) * n);
	//for (int i = 0; i < n; i++)
	//{
	//	arr1[i] = rand();
	//}

	int arr[] = { 0,-1,5,8,3,7,4,6,2,-9,5,5,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	//InsertSort(arr, size);
	
	//ShellSort(arr, size);

	//HeapSort(arr, size);

	//SelectSort(arr, size);

	//BubbleSort(arr, size);

	//Qsort2(arr, 0, size - 1);

	//Qsort3(arr, 0, size - 1);

	MergeSort(arr, size);

	//Qsort4(arr, size);
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);

	return 0;
}