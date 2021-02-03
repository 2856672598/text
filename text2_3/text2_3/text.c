#define _CRT_SECURE_NO_WARNINGS 1

//习题4-8 高空坠球 
//#include<stdio.h>
//int main()
//{
//	int n;
//	double x, sum = 0, h=0;
//	scanf("%lf %d", &x, &n);
//	int i = 0;
//	if (n != 0)
//	{
//		h = x;
//		sum = x;
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		h = h / 2;
//		sum += 2*h;
//	}
//	printf("%.1f %.1f", sum, h/2);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int tmp = n / 2 + 1;
//	int i = 0;
//	for (i = 1; i <= tmp; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= tmp - i; j++)
//			printf("  ");
//		int z = 0;
//		for (z = 0; z < 2 * i - 1; z++)
//			printf("* ");
//		printf("\n");
//	}
//	for (i = 1; i <=tmp-1 ; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("  ");
//		int z = 0;
//		for (z = 0; z < (tmp - i) * 2 - 1; z++)
//			printf("* ");
//		printf("\n");
//	}
//	return 0;
//}

//习题4-10 猴子吃桃问题 
//#include<stdio.h>
//int main()
//{
//	int n, x = 1;
//	scanf("%d", &n);
//	int n1 = n - 1;
//	while (n1)
//	{
//		x = (x + 1) * 2;
//		n1--;
//	}
//	printf("%d", x);
//	return 0;
//}


//习题4-11 兔子繁衍问题 
//斐波那契数列问题
// 1 1  2  3  5  8  13  21   34   .....
//#include<stdio.h>
//int main()
//{
//	int n = 0, count = 1;
//	scanf("%d", &n);
//	int  x1 = 1, x2 = 1, sum = 0;
//	if (n == 1)
//		printf("%d", 1);
//	else
//	{
//		while (x2 < n)
//		{
//			count++;
//			int tmp = x1;
//			x1 = x2;
//			x2 = tmp + x1;
//		}
//		printf("%d", count + 1);
//	}
//	return 0;
//}


// 习题6 - 7 简单计算器
#include<stdio.h>
int main()
{
	char n = 0;
	int sum = 0, i;
	scanf("%d", &sum);
	while (n!='=')
	{
		scanf("%c", &n);
		if (n == '=') 
		{
			printf("%d", sum);
			break;
		}
		scanf("%d", &i);
		if (n == '+')
			sum += i;
		else if (n == '-')
			sum -= i;
		else if (n == '*')
			sum *= i;
		else if (n == '/')
		{
			if (i == 0)
			{
				printf("ERROR\n");
				break;
			}
			sum /= i;
		}
		else
		{
			printf("ERROR\n");
			break;
		}
	}
	return 0;
}
