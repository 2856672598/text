#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//				arr[j] = 0;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == 0)
//			;
//		else
//
//			printf("%d ", arr[i]);
//	}
//}

//输入一组数（1~100）之间进行去重和排序
//#include<stdio.h>
//int main()
//{
//	int  n;
//	int i = 0;
//	int tmp = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);//把输入的数字放到对应 的数组中
//		arr[tmp] = tmp;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int b;
	float a = 1.0;
	b= (int)a + 1.0;
	printf("%d", b);
	return 0;
}
