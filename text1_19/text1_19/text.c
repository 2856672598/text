#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	//死循环
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello,word\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	float*p = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *p);
//	*p = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int output = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		int sum = 1;
//		for (j = 1; j <= i + 1;j++)
//		{
//			sum = sum * j;
//		}
//		output += sum;
//	}
//	printf("%d", output);
//	return 0;
//}

//PTA练习3-2 计算符号函数的值#include<stdio.h>
//void sign(int x)
//{
//	if (x > 0)
//		printf("sign(%d) = %d", x, 1);
//	if (x == 0)
//		printf("sign(%d) = 0\n", x);
//	if (x < 0)
//		printf("sign(%d) = -1\n", x);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	sign(n);
//	return 0;
//}
//练习3-3 统计学生平均成绩与及格人数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int input = 0;
//	int i = 0, count = 0;
//	double sum = 0;
//	double average = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &input);
//		input >= 60 ? count++ : 0;
//		sum += input;
//	}
//	average = n != 0 ? sum / n : 0;
//	printf("average = %.1f\n", average);
//	printf("count = %d\n", count);
//	return 0;
//}

//练习3-5 输出闰年
#include<stdio.h>
int main()
{
	int input = 0, count = 0;
	scanf("%d", &input);
	if (input >= 2000 && input <= 2100)
	{
		int i = 0;
		for (i = 2001; i <= input; i++)
		{
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			{
				printf("%d\n", i);
				count++;
			}
		}
		if (count == 0)
			printf("None\n");
	}
	else
	{
		printf("Invalid year!\n");
	}
	return 0;
}