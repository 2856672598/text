#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void InsertSort(int* number, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int tmp = number[i + 1];
		int end = i;
		while (end >= 0)
		{
			if (number[end] > tmp)
			{
				number[end + 1] = number[end];
				end--;
			}
			else
				break;
		}
		number[end + 1] = tmp;
	}
}

void Print(int*nums, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", nums[i]);
	}
}

void ShellSort(int * nums, int size)
{
	int gap = size;
	//当gap为1时即为插入排序
	while (gap > 1)
	{
		gap /= 2;
		for (int i = 0; i < size - gap; i++)
		{
			int end = i;
			int tmp = nums[end + gap];
			while (end >= 0)
			{
				if (nums[end] > tmp)
				{
					nums[end + gap] = nums[end];
				}
				else
					break;
				end -= gap;
			}
			nums[end + gap] = tmp;
		}
	}
}

void swap(int* a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//void SelectSort(int * number, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int maxi = 0;
//		for (int j = 0; j < size - i; j++)
//		{
//			if (number[j] > number[maxi])
//			{
//				maxi = j;
//			}
//		}
//		swap(&number[size - i - 1], &number[maxi]);
//	}
//}


//选择排序优化
void SelectSort(int * number, int size)
{
	int left = 0, right = size - 1;
	while (left < right)
	{
		int maxi = left, mini = left;
		for (int i = left; i <= right; i++)
		{
			if (number[i] > number[maxi])
				maxi = i;
			if (number[i] < number[mini])
				mini = i;
		}
		swap(&number[left], &number[mini]);
		if (maxi == left)
		{
			maxi = mini;
		}
		swap(&number[right], &number[maxi]);
		left++;
		right--;

	}
}

void AdjustDown(int* nums, int pos, int size)
{
	int parent = pos;
	int child = pos * 2 + 1;//默认为左子树
	while (child <= size)
	{
		//判断右子树是否大于左子树
		if (child + 1 <= size&&nums[child] < nums[child + 1])
			child++;
		//和parent作比较
		if (nums[child] > nums[parent])
		{
			swap(&nums[child], &nums[parent]);
		}
		else
			break;
		parent = child;
		child = parent * 2 + 1;
	}
}

void AdjustUp(int* nums, int pos)
{
	int child = pos;
	int parent = (child - 1) / 2;
	while (parent >= 0)
	{
		if (nums[parent] < nums[child])
		{
			swap(&nums[parent], &nums[child]);
		}
		else
			break;
		child = parent;
		parent = (child - 1) / 2;
	}
}

void HeapSort(int* nums, int size)
{
	//大堆 -->升序
	//建堆
	for (int i = (size - 2) / 2; i >= 0; i--)
	{
		AdjustDown(nums, i, size-1);
	}

	int end = size - 1;
	while (end > 0)
	{
		swap(&nums[end], &nums[0]);
		end--;
		AdjustDown(nums, 0, end);
	}
}

void BubbleSort(int* nums, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				flag = 1;
				swap(&nums[j], &nums[j + 1]);
			}
		}
		if (flag == 0)
			break;
	}
}

void PartSort(int * nums, int left, int right)
{
	if (left >= right)
		return;
	int keyi = left;
	int end = right;
	int key = nums[left];
	while (left < right)
	{
		//右面先走，在右面找小于key的值
		while (left < right)
		{
			if (nums[right] < key)
				break;
			right--;
		}

		//左面找大于key的值
		while (left < right)
		{
			if (nums[left] > key)
				break;
			left++;
		}

		//交换left和right
		if (left < right)
		{
			swap(&nums[left], &nums[right]);
		}
	}
	if (left == right)
	{
		swap(&nums[keyi], &nums[left]);
		PartSort(nums, keyi, left - 1);
		PartSort(nums, left + 1, end);
	}
}

void partion1(int* nums, int left, int right)
{
	if (left >= right)
		return;
	int key = nums[left];
	int prev = left - 1, cur = left;
	while (cur <= right)
	{
		if (nums[cur] < key)
		{
			prev++;
			swap(&nums[cur], &nums[prev]);
		}
		cur++;
	}
	nums[++prev] = key;
	partion1(nums, left, prev - 1);
	partion1(nums, prev + 1, right);
}

void QuickSort(int * nums, int left, int right)
{
	//PartSort(nums, left, right - 1);
	partion1(nums, left, right - 1);
}

//int main()
//{
//	int nums[] = { 10,6,3,9,1,3,7,2 };
//	//int nums[] = { 10,10,10,10 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	//InsertSort(nums, size);
//
//	//ShellSort(nums, size);
//
//	//SelectSort(nums, size);
//
//	//HeapSort(nums, size);
//	//BubbleSort(nums, size);
//
//	QuickSort(nums, 0, size);
//	Print(nums, size);
//	return 0;
//}
