#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////杨辉三角
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[50][50];
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			if (j == 0 || j == i)//判断是否为首位数字，每行的第一个数字和最后一个数字为1；
//			{
//				arr[i][j] = 1;
//				printf("%5d",1);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%5d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//井字棋
//#include<stdio.h>
//char tag;
//int main()
//{
//	char arr[3][3];
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%c", &arr[i][j]);
//			getchar();
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][2] == arr[i][1])//竖直方向
//		{
//			tag = arr[i][0];
//			break;
//		}
//		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])//水平
//		{
//			tag = arr[0][i];
//			break;
//		}
//		if (arr[0][0] == arr[1][1] && arr[2][2] == arr[1][1])//正对角线
//			tag = arr[0][0];
//		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])//反
//			tag = arr[0][2];
//	}
//	if (tag == 'B')
//		printf("BoBo wins!\n");
//	else
//		if (tag == 'K')
//			printf("KiKi wins!\n");
//		else
//			printf("No winner!\n");
//	return 0;
//}

//10进制转6进制
//#include<stdio.h>
//void fun(int x)
//{
//	int m;
//	if (x == 0)
//		;
//	else
//	{
//		m = x % 6;
//		fun(x / 6);//利用递归倒序输出
//		printf("%d", m);
//	}
//
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}


//关于Σ的计算
//#include<stdio.h>
//int main()
//{
//	long int n;
//	scanf("%ld", &n);
//	printf("%ld", n*(n + 1) / 2);//累加
//	return 0;

//#include<stdio.h>
//int main()
//{
//	int hour, minute, k;
//	scanf("%d:%d %d", &hour, &minute, &k);
//	minute += k;
//	hour = (hour + minute / 60) % 24;
//	minute = minute % 60;
//	printf("%02d:%02d", hour, minute);
//	return 0;
//}

//乘坐电梯
//#include<stdio.h>
//int main()
//{
//	int n;
//	int mins=0;
//	scanf("%d", &n);
//	mins = n / 12.0;
//	printf("%d", mins * 4 + 2);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n,i=0;
	int arr[100];
	scanf("%d", &n);
	while (n > 0)
	{
		if (n % 2 == 0)
		{
			arr[i] = 0;
			i++;
		}
		else
		{
			arr[i] = 1;
			i++;
		}
		n = n / 10;
	}
	i = i - 1;
	for (;i>=0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}