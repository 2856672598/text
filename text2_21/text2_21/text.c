//#include<stdio.h>
//int main()
//{
//	printf("%d", 54 >> 2);
//	return 0;
//}

//二分查找
//#include<stdio.h>
////int search(int arr[10], int n, int sz)
////{
////	int left = 0;
////	int right = sz;
////	while (left <= right)
////	{
////		int mid = left + (right - left) / 2;
////		if (arr[mid] > n)
////			right = mid - 1;
////		else if (arr[mid] < n)
////			left = mid + 1;
////		else
////			return mid;
////	}
////	return 0;
////}
//int search(int* p, int n, int sz)
//{
//	int left = 0;
//	int right = sz;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (*(p + mid) > n)
//			right = mid - 1;
//		else if (*(p + mid) < n)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,8,9,13,43,46,99 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = search(arr, 100, sz);
//	if (len != 0)
//		printf("%d", arr[len]);
//	else
//		printf("未找到\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//int a = 2013;
//	//if (a == (float)a)
//	//	printf("haha");
//	
//	int a = 123;
//	float b = 123.00;
//	if (a == b)
//		printf("haha");
//	return 0;
//}
#include<stdio.h>
int foo(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return 1;
	}

	if (y % 2 == 0)
	{
		return 2 * foo(x - 3, y / 3);
	}
	else
	{
		return 3 * foo(x - 2, y / 2);
	}
}
int main()
{
	printf("%d\n", foo(9, 12));
	return 0;
}