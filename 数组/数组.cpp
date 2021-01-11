#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int len = sizeof(arr) /sizeof(arr[2]);
//	printf("%d", len);
//	return 0;
//}

//一维数组在内存中的存储
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

//二维数组
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组在内存中的存放
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[ ] = "abc";
//	char arr2[ ] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1) / sizeof(arr1[0]));
//	printf("%d\n", sizeof(arr2) / sizeof(arr2[0]));
//	printf("%d\n", strlen(arr1)); 
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		max = c;
//	printf("%d\n", max);
//	return 0;
//}

//排序
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//冒泡排序
#include<stdio.h>
void sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int flag = 1;//用来判断当前数组是否已经有序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
int main()
{
	int arr[] = {9,1,2,3,4};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}