#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	for (i = m; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int sum(int m, int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = m; i <= n; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//int main()
//{
//	int m, n;
//
//	scanf("%d %d", &m, &n);
//	printf("sum = %d\n", sum(m, n));
//
//	return 0;
//}

//#include<stdio.h>
//void pyramid(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j =n-i-1; j > 0; j--)
//		{
//			printf(" ");
//		}
//		int z = 0;
//		for (z = 0; z <=i; z++)
//		{
//			printf("%d ",i+1);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	pyramid(n);
//	return 0;
//}

//PAT练习2-3 输出倒三角图案
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		int z = 0;
//		for (z = 0; z < 4 - i; z++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int* p = &arr;
//	printf("%d\n", (arr+1));
//	printf("%p\n", &arr);
//	printf("%p\n",&arr+1);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", arr[8]);
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char*p = str;
//	char*end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - p;
//}
//int main()
//{
//	char arr[] = "helloword";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//数组与指针
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = { &a,&b,&c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//		printf("%p ", arr[i]);
//	}
//	return 0;
//}

//PTA练习2-4 温度转换
//#include<stdio.h>
//int main()
//{
//	int fahr = 150;
//	double celsius = 0;
//	celsius = 5*(fahr - 32) / 9.0;
//	printf("fahr = 150, celsius = %d", (int)celsius);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int g = 10;
//	double height = 0;
//	height = 0.5*g*3*3;
//	printf("height = %.2f", height);
//	return 0;
//}

//逆序
//#include<stdio.h>
//void reverse(int arr[],int len)
//{
//	int right = len-1;
//	int left = 0;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,len);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("a + b = %d\n", a + b);
//	printf("a - b = %d\n", a - b);
//	printf("a * b = %d\n", a*b);
//	printf("a / b = %d\n", a / b);
//	return 0;
//}

//练习2-10 计算分段函数[1]
//#include<stdio.h>
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	float result = (n != 0 ? 1 / n : 0);
//	printf("f(%.1f) = %.1f",n,result);
//	return 0;
//}

//求N分之一序列前N项和
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("%.6f", sum);
//	return 0;
//}

//练习2 - 14 求奇数分之一序列前N项和
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i = 0;
//	long double sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= 2*n; i += 2)
//	{
//		sum += 1.0 / i;
//	}
//	printf("sum = %.6lf", sum);
//	return 0;
//}

//练习4 - 6 猜数字游戏(15分)
#include<stdio.h>
int main()
{
	int n, random, guess;
	int count = 0;
	int num = n;
	scanf("%d %d", &random, &n);
	do
	{
		scanf("%d", &guess);
		num--;
		if (guess < 0)
		{
			printf("Game Over\n");
			break;
		}
		else if (guess > random)
		{
			printf("Too big\n");
			count++;
		}
		else if (guess < random)
		{
			printf("Too small\n");
			count++;
		}
		else
		{
			count++;
			if (count == 1)
			{
				printf("Bingo!\n");
				break;
			}
			else if (count <= 3)
			{
				printf("Lucky You!\n");
				break;
			}
			else if (count <= n)
			{
				printf("Good Guess!\n");
				break;
			}
		}
		if (n == 0)
		{
			printf("Game Over\n");
			break;
		}
	} while (n);
	return 0;
}