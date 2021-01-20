#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char arr[100] = "abcde";
//	char arr1[] = { 1,2,3,4 };
//	char*p = arr;
//	char*pc = arr1;
//	scanf("%s", arr);
//	printf("%s", p);
//	/*
//	printf("%c\n", *p);
//	printf("%d\n", *pc);*/
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	const char*p1 = "abcde";
//	const char*p2 = "abcde";//常量字符串
//	p1 == p2 ? printf("hehe\n") : printf("haha\n");//打印呵呵
//	if (arr1 == arr2)//这比较的是首元素的地址
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");//输出的是哈哈
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include<stdio.h>
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}