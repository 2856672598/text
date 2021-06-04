#include<stdio.h>
#include<stdbool.h>

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
void Qsort(int* a, int left, int right)
{
	int begin = left, end = right;

	if (left > right)
		return;

	int key = a[begin];
	int pivot = begin;
	while (begin < end)
	{
		//找小放到左边
		while (begin < end&& a[end] >= key)
		{
			--end;
		}
		//进坑
		a[pivot] = a[end];
		pivot = end;

		//找大进坑
		while (begin < end&& a[begin] <= key)
		{
			begin++;
		}
		a[pivot] = a[begin];
		pivot = begin;
	}
	//找到key的位置
	a[pivot] = key;
	Qsort(a, left, pivot - 1);
	Qsort(a, pivot + 1, right);
}
int main()
{
	int arr[] = { 0,-1,5,8,3,7,4,6,2,-9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	//InsertSort(arr, size);
	
	//ShellSort(arr, size);

	//HeapSort(arr, size);

	//SelectSort(arr, size);

	//BubbleSort(arr, size);

	Qsort(arr, 0, size - 1);
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	return 0;
}