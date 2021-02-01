#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int n, random, guess;
//	int count = 0;
//	scanf("%d %d", &random, &n);
//	int num = n;
//	do
//	{
//		scanf("%d", &guess);
//		num--; 
//		if (guess < 0)
//		{
//			printf("Game Over\n");
//			break;
//		}
//		else if (guess > random)
//		{
//			printf("Too big\n");
//			count++;
//		}
//		else if (guess < random)
//		{
//			printf("Too small\n");
//			count++;
//		}
//		else
//		{
//			count++;
//			if (count == 1)
//			{
//				printf("Bingo!\n");
//				break;
//			}
//			else if (count <= 3)
//			{
//				printf("Lucky You!\n");
//				break;
//			}
//			else if (count <= n)
//			{
//				printf("Good Guess!\n");
//				break;
//			}
//		}
//		if (n == 0)
//		{
//			printf("Game Over\n");
//			break;
//		}
//	} while (n);
//	return 0;
//}


//练习4 - 7 求e的近似值(15分)
//#include<stdio.h>
//int main()
//{
//	int  n;
//	scanf("%d", &n);
//	int i = 0;
//	double x = 1, y = 0, sum = 1;//sum定义为int类型会导致溢出；
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		sum = 1;
//		for (j = 1; j <= i; j++)
//		{
//			sum *= j;
//		}
//		x += 1.0 / sum;
//	}
//	printf("%.8f", x);
//	return 0;
//}


//练习4-10 找出最小值
//#include<stdio.h>
//int main()
//{
//	int n = 0, min, input;
//	scanf("%d", &n);
//	int  i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &input);
//		if (!i)
//			min = input;
//		if (input < min)
//			min = input;
//	}
//	printf("%d", min);
//	return 0;
//}

//练习4-11 统计素数并求和
#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int i = 0, temp = 0, sum = 0, count = 0;
	for (i = n; i <= m; i++)
	{
		if (i == 2)
		{
			count++;
			sum += i;
		}
		int j = 0;
		for (j = 2; j <= i-1; j++)
		{
			temp = 1;
			if (i%j == 0)
			{
				temp = 0;
				break;
			}
		}
		if (temp == 1)
		{
			sum += i;
			count++;
		}
	}
	printf("%d %d", count, sum);
	return 0;
}