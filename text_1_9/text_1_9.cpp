#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char arr[8000] = { 0 };
//	long long c = 0;
//	long long ch = 0;
//	long long chn = 0;
//	scanf("%s", arr);
//	char * p = arr;
//	while (*p)
//	{
//		//CCHNCHN
//		if (*p == 'C')
//			c++;
//		else if (*p == 'H')
//			ch += c;
//		else if (*p == 'N')
//			chn += ch;
//		p++;
//	}
//	printf("%lld", chn);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	int sum = 0;
//	for (i = m; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//菲波那切数列
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100] = {};
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		if (i < 3)
//		{
//			arr[i] = i;
//		}
//		else
//		{
//			arr[i] = arr[i - 1] + arr[i - 2];
//		}
//	}
//	printf("%d", arr[n]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float a, b, c;
//	scanf("%f %f %f", &a, &b, &c);
//	float sum = a + b + c;
//	printf("%.2f %.2f", sum, sum / 3);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[4];
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3];
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	if (sum / 3.0 >= 60)
//		printf("NO\n");
//	else
//		printf("YES\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 90 && n <= 100)
//		printf("A\n");
//	else if (n >= 80 && n <= 89)
//		printf("B\n");
//	else if (n >= 70 && n <= 79)
//		printf("C\n");
//	else if (n >= 60 && n <= 69)
//		printf("D\n");
//	else if (n >= 0 && n <= 59)
//		printf("E\n");
//	else
//		printf("F\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, n;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		if ((a + b + c) / 3.0 < 60)
//			sum++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[100];
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//#include<stdio.h>
//int max3(int a, int b, int c)
//{
//	int max = a;
//	if (b>max)
//		max = b;
//	if (c>max)
//		max = c;
//	return max;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	float m = ((float)max3(a + b, b, c)) / (max3(a, c + b, c) + max3(a, b, b + c));
//	printf("%.2f", m);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	int i = 0;
//	int a = 0;
//	int arr[100] = {0};
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		arr[a]++;//把获取到的数放到对应的数组中
//	}
//	int x = 0;//要查找的数x
//	scanf("%d", &x);
//	printf("%d", arr[x]);
//	return 0;
//}

//转义字符的应用
//#include<stdio.h>
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	double sum = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
//	printf("%.1f\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("Happy new year!Good luck!\n");
//	}
//	return 0;
//}

//三个数比较最大值
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = a;
//	if (b > max)
//		max = b;
//	if (c > max)
//		max = c;
//	printf("%d ", max);
//	return 0;
//}

//求质数
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i < 999; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//对一组数进行去重和排序
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[100];
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i+1; j < n; j++)
//		{
//			if (arr[i] == arr[j])//去重   把重复的数赋值为0
//				arr[j] = 0;
//			if (arr[i] > arr[j])
//			{
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//		if(arr[i]!=0)//如过不为0 输出
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int arr[10][10];
	int n;
	scanf("%d", &n);
	int i = 0;
	int a=1;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			if (arr[i] > arr[j] && arr[i][j] != 0)
				a = 0;
		}
	}
	if (a == 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;

}