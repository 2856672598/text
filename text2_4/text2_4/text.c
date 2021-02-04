#define _CRT_SECURE_NO_WARNINGS 1
//练习7-2 求最大值及其下标 
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int n , i = 0, max = 0;
//	int sub = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			sub = i;
//		}
//	}
//	printf("%d %d", max, sub);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, i = 0;
//	int arr[11];
//	scanf("%d", &n);
//	for (i = n; i > 0; i--)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d", arr[i]);
//		if (i != n)
//			printf(" ");
//	}
//	return 0;
//}

//练习7 - 3 将数组中的数逆序存放
//#include<stdio.h>
//int main()
//{
//	int n, i = 0;
//	int arr[10];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//		if (i != n - 1)
//			printf(" ");
//	}
//	return 0;
//}

//练习7-4 找出不是两个数组共有的元素
#include<stdio.h>
int main()
{
	int n1, n2, k = 0;
	int arr1[20], arr2[20], arr3[20];
	scanf("%d", &n1);
	int i = 0;
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	scanf("%d", &n2);
	for (i = 0; i < n2; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < n1; i++)//arr2里没有arr1
	{
		int j = 0;
		for (j = 0; j < n2; j++)
			if (arr2[j] == arr1[i])
				break;
		if (j == n2)
			arr3[k++] = arr1[i];
	}
	for (i = 0; i < n2; i++)
	{
		int j = 0;
		for (j = 0; j < n1; j++)
			if (arr1[j] == arr2[i])
				break;
		if (j == n1)
			arr3[k++] = arr2[i];
	}
	/*for (i = 0; i < k; i++)
	{
		int j = 0;
		for (j = i+1; j < k; j++)
		{
			if (arr3[i] == arr3[j])
				break;
		}
		if (j == k)
			printf(" %d", arr3[i]);
	}*/
	printf("%d", arr3[0]);
	for (i = 1; i < k; i++)
	{
		int j = 0;
		for (j = 0; j < i; j++)//查重，看看有没有重复的 
			if (arr3[i] == arr3[j])
				break;
		if (j == i)
			printf(" %d", arr3[i]);
	}
	return 0;
}