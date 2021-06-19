#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	int sum = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int sum = 1;
//		for (int j = 1; j <= i; j++)
//			sum *= j;
//		ret += sum;
//	}
//	printf("%d", ret);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1, sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == 17)
//			break;
//	}
//	if (i >= sz)
//		printf("没找到\n");
//	else
//		printf("下标为%d", i);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	int min = 0;
//	int n = 19;
//	while (left <= right)
//	{
//		min = (left + right) / 2;
//		if (arr[min] > n)
//		{
//			right = min - 1;
//		}
//		else if (arr[min] < n)
//			left = min + 1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("下标为%d", min);
//	else
//		printf("没有找到\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3] = { 0 };
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z')
//			arr[0]++;
//		else if (ch >= '0'&&ch <= '9')
//			arr[1]++;
//		else
//			arr[2]++;
//	}
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	int max = arr[0], min = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("最大值为%d ,最小值为%d", max, min);
//	return 0;
//}

//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b, max;
//	scanf("%d %d", &a, &b);
//	max = Max(a, b);
//	printf("最大值为%d", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i += 2)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20];
//	while (1)
//	{
//		printf("您的电脑将在一分钟内关机，输入我是猪暂停关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("取消关机\n");
//			break;
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 100;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int rem = 0;
//	scanf("%d %d", &a, &b);
//	while (b > 0)
//	{
//		rem = a % b;
//		a = b;
//		b = rem;
//	}
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int tmp = (int)sqrt(i);
//		for (int j = 2; j <= tmp; j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i <= 100; i++)
//	{
//		int n = i;
//		while (n)
//		{
//			if (n % 10 == 9)
//				sum++;
//			n /= 10;
//		}
//	}
//	printf("0-100中有%d个9", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double sum = 0.0;
//	double flag = 1.0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += 1 * flag / i;
//		flag *= -1;
//	}
//	printf("%lf ", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	int max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d ", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[11], n;
//	long long a, b, c;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%lld %lld %lld", &a, &b, &c);
//		if (a + b > c)
//			arr[i] = 1;
//		else
//			arr[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i])
//			printf("Case #%d: true\n", i);
//		else
//			printf("Case #%d: false\n", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int n;
//	scanf("%d", &n);
//	while (n)
//	{
//		arr[n % 10]++;
//		n /= 10;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d:%d\n", i, arr[i]);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000];
//	int sum[10] = { 0 };
//	scanf("%s", arr);
//	int size = strlen(arr);
//	for (int i = 0; i < size; i++)
//	{
//		sum[arr[i] - '0']++;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (sum[i] != 0)
//			printf("%d:%d\n", i, sum[i]);
//
//	}
//	return 0;
//}


#include<stdio.h>
int search(int* nums, int numsSize, int target)
{
	int left = 0, right = numsSize - 1;
	int num = 0;
	while (left <= right)
	{
		int min = (left + right) / 2;
		if (nums[min] > target)
			right = min - 1;
		else if (nums[min] < target)
			left = min + 1;
		else
		{
			int flag = min - 1;
			while (left <= flag)
			{
				if (nums[flag] == target)
					num++;
				else
					break;
				flag--;
			}
			flag = min + 1;
			while (flag <= right)
			{
				if (nums[flag] == target)
					num++;
				else
					break;
				flag++;
			}
			num += 1;
			return num;
		}
	}
	return num;
}
int main()
{
	int arr[] = { 5,7,7,8,8,10 };
	int target = 8;
	int flag = search(arr, 6, target);
	printf("%d", flag);
	return 0;
}