#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int x = 0, y = 0;
//		x = sqrt(i + 100);
//		y = sqrt(i + 268);
//		if (y*y == i + 268 && x*x == i + 100)
//			printf("%d ",i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int count = input;
//	int empty = 0;
//	empty = input;
//	while (empty>=2)
//	{
//		count += empty / 2;
//		empty = empty % 2 + empty / 2;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>//错误代码
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int  i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello.word\n");
//	}
//	return 0;
//}



//方法1
//#include<stdio.h>
//int main()
//{
//	int i = 0,j = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr1[30];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			arr1[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			arr1[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//方法2
//#include<stdio.h>
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//找奇数
//		while ((left<=right)&&(arr[left]%2 == 0))//防止全是偶数造成越界访问
//		{
//			left++;
//		}
//		//找偶数
//		while ((left<=right)&&(arr[right]%2 == 1))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {2,4,6,8,2,4,6,7};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//unigned char 表示的范围是0~255；当超过255后会进行截断
//	unsigned char a = 100;
//	unsigned char b = 200;
//	unsigned char c = 0;//‭0001 00101100‬ 
//	c = a + b;
//	printf("%d %d", a + b, c);//300 44 会进行整型提升
//	return 0;
//}
// 0x1234
//‭00010010  00110100‬
//
//#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char p = *(unsigned char*)&a;
//	printf("%d", p);
//	return 0;
//}

//杨辉三角
#include<stdio.h>
int main()
{
	int arr[20][20] = { 1 };
	int i = 0, j = 0;
	int n = 0;
	printf("请输入杨辉三角的行数>");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		arr[i][1] = 1;//把第一列设置为1；
		for (j = 1; j <=i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			printf("%5d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

