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

//#include<stdio.h>
//int main()
//{
//	int letter = 0, blank = 0, digit = 0, other = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		char ch = getchar();
//		if (ch<= '9'&&ch >= '0')
//		{
//			digit += 1;
//		}
//		else if (ch <= 'Z'&&ch >= 'A' || ch >= 'a'&&ch <= 'z')
//		{
//			letter += 1;
//		}
//		else if (ch == ' ' || ch == '\n')
//		{
//			blank += 1;
//		}
//		else
//		{
//			other += 1;
//		}
//	}
//	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
//	return 0;
//}

//#include<stdio.h>
//enum name
//{
//	exit,
//	apple,
//	pear,
//	orange,
//	grape
//};
//void menu()
//{
//	printf("[1] apple\n");
//	printf("[2] pear\n");
//	printf("[3] orange\n");
//	printf("[4] grape\n");
//	printf("[0] exit\n");
//}
//int main()
//{
//	menu();
//	int i = 5, input = 0;
//	//int apple = 3.0, pear = 2.5, orange = 4.1, grape = 10.2;
//	while (i)
//	{
//		scanf("%d", &input);
//		switch (input)
//		{
//		case apple:
//			printf("price = 3.00\n");
//			break;
//		case pear:
//			printf("price = 2.50\n");
//			break;
//		case orange:
//			printf("price = 4.10\n");
//			break;
//		case grape:
//			printf("price = 10.20\n");
//			break;
//			printf("price = 3.0\n");
//		case exit:
//			return 0;
//			break;
//		default:
//			printf("price = 0.00\n");
//			break;
//		}
//		i--;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char c = getchar();
//	int flag = 0, count = 0;
//	while (c != '\n')
//	{
//		if (c != ' '&&flag==0)
//		{
//			flag = 1;
//			count += 1;
//		}
//		else if (c == ' ')
//		{
//			flag = 0;
//		}
//		c = getchar();
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	int sum = 0, flag = 0, sign = 1;
//	while ((ch = getchar()) != '#')
//	{
//		if (ch >= 'a'&&ch <= 'f')
//		{
//			sum = sum * 16 + (ch - 'a' + 10);
//			flag = 1;
//		}
//		else if (ch >= 'A'&&ch <= 'F')
//		{
//			sum = sum * 16 + (ch - 'A' + 10);
//			flag = 1;
//		}
//		else if (ch <= '9'&&ch >= '0')
//		{
//			sum = sum * 16 + (ch - '0');
//			flag = 1;
//		}
//		if (ch == '-'&&flag == 0)//判断有无负号
//		{
//			sign = -1;
//		}
//	}
//	printf("%d", sum*sign);
//	return 0;
//}

//#include<stdio.h>
//int DaysAnd(int* arr,int month)
//{
//	int total = 0;
//	for (int i = 0; i < month - 1; i++)
//	{
//		total += arr[i + 1];
//	}
//	return total;
//}
//int main()
//{
//	int year, month, day;
//	int days = 0;
//	scanf("%d/%d/%d", &year, &month, &day);
//	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,32 };
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		arr[2] = 29;
//		days = DaysAnd(arr, month);
//	}
//	else
//	{
//		arr[2] = 28;
//		days = DaysAnd(arr, month);
//	}
//	days += day;
//	printf("%d", days);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[6][6] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max = 0, min = 0, row = 0, col = 0, flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		max = arr[i][0];
//		flag = 1;
//		//找出每行最大的元素
//		for (j = 0; j < n; j++)
//		{
//			if (max <= arr[i][j])
//			{
//				max = arr[i][j];
//				row = i;
//				col = j;
//			}
//		}
//		//查看最大元素所在的列中是否是最小的
//		for (int z = 0; z < n; z++)
//		{
//			min = max;
//			if (arr[z][col] < min)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d %d", row, col);
//			return 0;
//		}
//	}
//	printf("NONE\n");
//	return 0;
//}


//#include<stdio.h>
//#define PI 3.14
//int main()
//{
//	float r;
//	double c, s;
//	printf("输入圆的半径\n");
//	scanf("%f", &r);
//	c = 2 * r * PI;
//	s = PI * r*r;
//	printf("c= %.2f,s = %.2f", c, s);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[6][6] = { 0 };
//	int m, n, sum = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		sum = 0;
//		for (j = 0; j < n; j++)
//		{
//			sum += arr[i][j];
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0, n = 0, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i != n - 1 && j != n - 1 && j != n - i - 1)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m, n;
//	int arr[6][6] = { 0 };
//	scanf("%d %d", &m, &n);
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//		int flog = m;
//		while (flog)
//		{
//			int tmp = arr[i][j - 1];
//			int z = 0;
//			for (z = n - 1; z > 0; z--)
//			{
//				arr[i][z] = arr[i][z - 1];
//			}
//			arr[i][z] = tmp;
//			flog--;
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//double fact(int x)
//{
//	double sum = 1.0;
//	while (x)
//	{
//		sum *= x;
//		x--;
//	}
//	return sum;
//}
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	double result = fact(n) / (fact(m)*fact(n - m));
//	printf("result = %.0f", result);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 0, m;
	int i = 0, arr[10][10] = { 0 };
	scanf("%d", &m);
	while (m)
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}
		int flog = 1;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if (j < i)
				{
					if (arr[i][j] != 0)
					{
						flog = 0;
						break;
					}
				}
			}
		}
		if (flog)
			printf("YES\n");
		else
			printf("NO\n");
		m--;
	}
	return 0;
}
