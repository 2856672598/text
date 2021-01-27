#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void reverse(char* arr1, char* p)
//{
//	while (arr1 < p)
//	{
//		char tmp = *arr1;
//		*arr1 = *p;
//		*p = tmp;
//		arr1++;
//		p--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	int sz = strlen(arr);
//	reverse(arr, arr + k-1);
//	reverse(arr + k, arr+sz-1);
//	reverse(arr, arr+sz-1);
//}
//int main()
//{
//	char arr[50] = "abcde";
//	int n = 0;
//	printf("请输入您要旋转的字符串>");
//	scanf("%s", arr);
//	printf("请输入您要旋转的位数>");
//	scanf("%d", &n);
//	left_move(arr, n);
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void reverse(char* x, char* y)
//{
//	while (x < y)
//	{
//		char tmp = *x;
//		*x = *y;
//		*y = tmp;
//		x++;
//		y--;
//	}
//}
//void left_move(char* p,int x)
//{
//	int sz = strlen(p);
//	reverse(p, p + x - 1);
//	reverse(p + x, p+sz - 1);
//	reverse(p, p+sz - 1);
//}
//int is_move_left(char* arr1, char* arr2)
//{
//	int sz = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		left_move(arr1,1);
//		if (strcmp(arr2,arr1))
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_move_left(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//
//}

//方法2
//#include<stdio.h>
//#include<string.h>
//int is_left_move(char* arr1, char* arr2)
//{
//	int sz1 = strlen(arr1);
//	int sz2 = strlen(arr2);
//	if (sz1 != sz2)
//		return 0;
//	strncat(arr1, arr1, sz1);
//	char* tmp = strstr(arr1, arr2);
//	if (tmp == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefaB";
//	int ret = is_left_move(arr1, arr2);
//	//ret == 0 ? printf("N0\n") : printf("YES\n");
//	if (ret == 0)
//		printf("NO\n");
//	else
//		printf("YES\n");
//	return 0;
//}


#include<stdio.h>
int find(int arr[][4], int n,int* px,int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px-1 && y>=0)
	{
		if (arr[x][y] > n)
		{
			y--;
		}
		else if (arr[x][y] < n)
		{
			x++;
		}
		if (arr[x][y] == n)
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	int n = 2;
	int x = 3, y = 4;
	int len = find(arr, n, &x, &y);
	if (len == 1)
	{
		printf("找到了下标为%d %d", x, y);
	}
	else
		printf("没找到\n");
	return 0;
}