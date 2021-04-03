//#include"LinkStack.h"
//int main()
//{
//	DataNode* phead = NULL;
//	LinkStack* head = InIn();
//	PushStack(&phead, head, 1);
//	PushStack(&phead, head, 2);
//	PushStack(&phead, head, 3);
//	PushStack(&phead, head, 4);
//	PushStack(&phead, head, 6);
//	PushStack(&phead, head, 7);
//	PushStack(&phead, head, 8);
//	PushStack(&phead, head, 9);
//	PushStack(&phead, head, 10);
//	Print(phead);
//
//	//Print(head);
//}

#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	c = 1000 * (b % 10) + 100 * (a % 10) + 10 * (b / 10) + (a / 10);
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[5] = "abcd";
//	char arr1[3] = "c";
//	int i = 0, j = 0;
//	for (int z = 0; z < 5; z++)
//	{
//		while (arr[i] == arr1[j])
//		{
//			i++;
//			j++;
//			if (j >= 1)
//			{
//				printf("找到了\n");
//				return 0;
//			}
//		}
//		i = i - j + 1;
//		j = 0;
//	}
//	printf("没找到\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[5] = { 0 };
//	scanf("%s", arr1);
//	int i = 0, j = 0;
//	while (i < (int)strlen(arr) && j < (int)strlen(arr1))
//	{
//		if (arr[i] == arr1[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//	if (j >= (int)strlen(arr1))
//		printf("找到了");
//	else
//		printf("没找到\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1, b;
//	b = (a = a * 2) + (a = a + 3);
//	printf("%d %d", a, b);//10
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	printf("%d %d %d %d", a++, ++a, a++, ++a);//6 7 4 7
//	return 0;
//}


////kmp
//#include<stdio.h>
//#include<stdbool.h>
//#include<string.h>
//void Getnext(char* arr, int* next, int sz)
//{
//	//i指向字符串前缀
//	//j指向字符串后缀末尾
//	int i = 0, j = 0;
//	for (j = 1; j < sz; j++)
//	{
//		while (i > 0 && arr[i] != arr[j])
//		{
//			i = next[i - 1];
//		}
//		if (arr[i] == arr[j])
//			i++;
//		next[j] = i;
//	}
//}
//bool kmp(char* string, int* next, char* arr, int sizea, int sizes)
//{
//	int i = 0, j = 0;
//	while (i < sizes&&j < sizea)
//	{
//		if (string[i] != arr[j] && j > 0)
//		{
//			j = next[j - 1];
//		}
//		else
//		{
//			i++;
//			j++;
//		}
//	}
//	if (j >= sizea && i <= sizes)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int i = 0, j = 1;
//	char arr[] = "abcaa/*ababc*/";
//	int next[18] = { 0 };
//
//	int sz = strlen(arr);
//	Getnext(arr, next, sz);
//	char string[] = "abababc";
//
//	int sizes = strlen(string);
//	bool flag = kmp(string, next, arr, sz, sizes);
//	if (flag)
//		printf("找到了\n");
//	else
//		printf("没找到\n");
//
//	//i = 0, j = 0;
//	//while (i < (int)strlen(arr1) && j < (int)strlen(arr))
//	//{
//	//	if (arr[j] != arr1[i] && j > 0)
//	//	{
//	//		j = next[j - 1];
//	//	}
//	//	else
//	//	{
//	//		i++;
//	//		j++;
//	//	}
//	//}
//	//if (j >= (int)strlen(arr))
//	//	printf("找到了\n");
//	//else
//	//	printf("没找到\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	while (a != 0 && b != 0)
//	{
//		printf("hello,word");
//	}
//	printf("%d", a&&b);
//	return 0;
//}

////977. 有序数组的平方
////https://leetcode-cn.com/problems/squares-of-a-sorted-array/
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int compare(const void* a, const void*b)
//{
//	return *(int*)a - *(int*)b;
//}
//int* sortedSquares(int* nums, int numsSize, int* returnSize)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		nums[i] = (int)pow(nums[i], 2);
//	}
//
//	//for (int i = 0; i < numsSize; i++)
//	//{
//	//	for (int j = 0; j < numsSize - 1 - i; j++)
//	//	{
//	//		if (nums[j] > nums[j + 1])
//	//		{
//	//			int tmp = nums[j];
//	//			nums[j] = nums[j + 1];
//	//			nums[j + 1] = tmp;
//	//		}
//	//	}
//	//}
//	qsort(nums, numsSize, 4, compare);
//	*returnSize = numsSize;
//	return nums;
//}
//int main()
//{
//	int arr[] = { -4,-1,0,3,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int returnsize = 0;
//	sortedSquares(arr, size,&returnsize);
//	for (int i = 0; i < returnsize; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//快速排序
//#include<stdio.h>
//#include<stdlib.h>
//void mysort(int* arr, int left, int right)
//{
//	if (left >= right)
//		return ;
//	int L = left, R = right;
//	int pivot = arr[left];
//	while (left < right)
//	{
//		while (left < right&&arr[right] >= pivot)
//		{
//			right--;
//		}
//		if (left < right)
//			arr[left] = arr[right];
//		while (left < right&&arr[left] <= pivot)
//		{
//			left++;
//		}
//		if (left < right)
//			arr[right] = arr[left];
//		if (left >= right)
//			arr[left] = pivot;
//	}
//	mysort(arr, L, right-1);
//	mysort(arr, right + 1, R);
//}
//int main()
//{
//	int arr[] = { 6,2,9,1,5,8,34,12,0,45,24,90 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	mysort(arr, 0, size - 1);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
////double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
////{
////	int* new = malloc(sizeof(int)*(nums1Size + nums2Size));
////	int i = 0, n1 = 0, n2 = 0;
////	for (i = 0; i < nums1Size + nums2Size && n1 < nums1Size && n2 < nums2Size; i++)
////	{
////		if (nums1[n1] < nums2[n2])
////		{
////			new[i] = nums1[n1];
////			n1++;
////		}
////		else
////		{
////			new[i] = nums2[n2];
////			n2++;
////		}
////	}
////	if (n1 >= nums1Size&&n2 < nums2Size)
////	{
////		while (n2 < nums2Size)
////		{
////			new[i] = nums2[n2];
////			i++;
////			n2++;
////		}
////	}
////	else
////	{
////		while (n1 < nums1Size)
////		{
////			new[i] = nums1[n1];
////			i++;
////			n1++;
////		}
////	}
////	int nums = nums1Size + nums2Size;
////	if (nums % 2 == 0)
////	{
////		return (new[nums / 2] + new[(nums / 2) - 1]) / 2.0;
////	}
////	else
////	{
////		if (nums <= 1)
////			return new[0];
////		return new[nums / 2];
////	}
////}
//
//double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
//{
//	int numsize = nums1Size + nums2Size;
//	int len = numsize / 2;
//	int n1 = 0, n2 = 0, prev = 0, sum = 0;
//	for (int i = 0; i <= len; i++)
//	{
//		int a = 0, b = 0;
//		if (nums1Size != 0 && n1 < nums1Size)
//			a = nums1[n1];
//		if (nums2Size != 0 && n2 < nums2Size)
//			b = nums2[n2];
//		if (n2 >= nums2Size || nums2Size == 0 || a <= b && nums1Size != 0 && nums1Size > n1)
//		{
//			prev = sum;
//			sum = nums1[n1];
//			n1++;
//		}
//		else
//		{
//			prev = sum;
//			sum = nums2[n2];
//			n2++;
//		}
//	}
//	if (numsize % 2 == 0)
//		return (prev + sum) / 2.0;
//	else
//		return sum;
//}
//
//int main()
//{
//	int nums1[] = { 0,0 };
//	int nums2[] = { 0,0 };
//	double flag = findMedianSortedArrays(nums1, 2, nums2, 2);
//	printf("%f", flag);
//	return 0;
//}


////1535. 找出数组游戏的赢家
////https://leetcode-cn.com/problems/find-the-winner-of-an-array-game/submissions/
//#include<stdio.h>
////int getWinner(int* arr, int arrSize, int k)
////{
////	int flag = 0;
////	int max = arr[0];
////	while (flag < k)
////	{
////		if (arr[0] > arr[1])
////		{
////			int tmp = arr[1], i = 0;
////			for (i = 1; i < arrSize - 1; i++)
////			{
////				arr[i] = arr[i + 1];
////			}
////			arr[i] = tmp;
////			if (max = arr[0])
////				flag++;
////			else
////				flag = 0;
////		}
////		else if (arr[0] <= arr[1])
////		{
////			int i = 0;
////			int tmp = arr[0];
////			for (i = 0; i < arrSize - 1; i++)
////			{
////				arr[i] = arr[i + 1];
////			}
////			arr[i] = tmp;
////			max = arr[1];
////			flag++;
////		}
////	}
////	return arr[0];
////}
//
//int getWinner(int* arr, int arrSize, int k)
//{
//	int count = 0, i = 0;
//	for (i = 0; i < arrSize - 1 && count < k; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			count++;
//			//当第一个数大于第二个数时，将第一个数的值复制到第2个数的位置上
//			arr[i + 1] = arr[i];
//		}
//		else
//			count = 1;
//	}
//}
//int main()
//{
//	int arr[] = { 2,1,3,5,4,6,7 };
//	int len = getWinner(arr, 7, 2);
//	printf("%d\n", len);
//	return 0;
//}



//#include <stdio.h>
//void main()
//{
//	int x, k, i, p = 0, z = 0, m = 0;
//	printf("请输入待输入数据的个数: ");
//	scanf("%d", &k);
//	printf("请输入%d个整数: ", k);
//	while (k--)
//	{
//		scanf("%d", &x);
//		if (x > 0)
//			p++;
//		else if (x < 0)
//			m++;
//		else
//			z++;
//	}
//	printf("正数、零、负数个数分别为：%d,%d,%d\n", p, z, m);
//}



//#include <stdio.h>
//void main()
//{
//	int i, t = 1;
//	for (i = 1; i < 10; i++)
//	{
//		t = 2 * (t + 1);
//	}
//	printf("第一天桃子数量为: %d\n", t);
//}

//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int i = 9;
//	while (i--)
//	{
//		printf("%d\r", i);
//		fflush(stdout);
//		Sleep(300);
//	}
//	return 0;
//}


#include<stdio.h>
#include<math.h>
double myPow(double x, int n)
{
	double sum = 1;
	for (int i = 0; i < abs(n / 2); i++)
	{
		sum *= x;
	}
	if (n % 2 == 0)
		sum *= sum;
	else
		sum = sum * sum*x;
	if (n > 0)
		return sum;
	else if (n < 0)
		return 1 / sum;
	else
		return 1;
}
int main()
{
	int x, n;
	scanf("%d %d", &x, &n);
	double len = myPow(x, n);
	printf("%f", len);
	return 0;
}