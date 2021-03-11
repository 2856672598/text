#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	printf("hello word!\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	double sum = 0;
//	scanf("%d %d", &m, &n);
//	while (m <= n)
//	{
//		sum += m * m + 1.0 / m;
//		m += 1;
//	}
//	printf("sum = %.6f", sum);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int letter = 0, blank = 0, digit = 0, other = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		char ch = getchar();
		if (ch<= '9'&&ch >= '0')
		{
			digit += 1;
		}
		else if (ch <= 'Z'&&ch >= 'A' || ch >= 'a'&&ch <= 'z')
		{
			letter += 1;
		}
		else if (ch == ' ' || ch == '\n')
		{
			blank += 1;
		}
		else
		{
			other += 1;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
	return 0;
}