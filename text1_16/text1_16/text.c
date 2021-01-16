#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//i为全局变量，不初始化默认为0；
//int i;
//int main()
//{
//	i--;
	//sizeof计算的是所占空间的大小 返回值为无符号整形
//	if (i > sizeof(i))
//		printf(">");
//	else
//		printf("<");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 32; i++)
//	{
//		/*if ((n >> i) & 1 == 1)
//			count++;*/
//		((n >> i) & 1)==1 ? count++: 0;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//两个数二进制数中不同的位数
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &a, &b);
//	int tmp = a ^ b;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//求二进制中的奇数位和偶数位
//#include<stdio.h>
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int i = 0;
//	printf("奇数位为:\n");
//	for (i = 1; i <= 32; i += 2)
//	{
//		printf("%d ", m >> i & 1);
//	}
//	printf("\n偶数位为:\n");
//	for (i = 2; i <= 32; i += 2)
//	{
//		printf("%d ", m >> i & 1);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 6;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d  %d", a, b);
//	return 0;
//}

//用指针打印数组内容
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p + i);
//	}
//	return 0;
//}

//打印一个数的每一位
//#include<stdio.h>
//void get_print(int x)
//{
//	int input;
//	input = x % 10;
//	x = x / 10;
//	/*if (x > 0)
//	{
//		get_print(x);
//	}*/
//	(x > 0 ? get_print(x) : 0);
//	printf("%d ", input);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	get_print(n);
//	return 0;
//}

//逆序输出字符串（用递归和非递归）
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char arr[])
//{
//	int sz = strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[sz - 1];
//	arr[sz - 1] = '\0';
//	if (sz > 1)
//		reverse_string(arr + 1);
//	arr[sz - 1] = tmp;
//
//}
//int main()
//{
//	char arr[] = "helloword";
	//int sz = strlen(arr);
	//int left = 0;
	//int right = sz - 1;
	//while (left < right)
	//{
	//	int tmp = arr[left];
	//	arr[left] = arr[right];
	//	arr[right] = tmp;
	//	left++;
	//	right--;
	//}
//	reverse_string(arr);
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//计算一个数的每位之和;用两种方法
//递归
//#include<stdio.h>
//int sum(int x)
//{
//	if (x > 9)
//	{
//		return sum(x / 10) + x % 10;
//	}
//	else
//		return x;
//}
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int ret = sum(m);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m;
//	int sum = 0;
//	scanf("%d", &m);
//	while (m>=1)
//	{
//		if (m > 9)
//		{
//			sum += m % 10;
//			m = m / 10;
//		}
//		else
//		{
//			sum += m;
//			break;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//递归实现n的k次方
//#include<stdio.h>
//double power(int x, int y)
//{
//	if (y < 0)
//	{
//		return (1.0 / power(x, -y));
//	}
//	else if (y == 0)
//		return 1;
//	else
//	{
//		return x * power(x, y - 1);
//	}
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	double ret = power(n, k);
//	printf("%.3f", ret);
//	return 0;
//}
//#include<stdio.h>
//void solit(int x)
//{
//	int a = 0;
//	if (x >= 1)
//	{
//		a = x % 10;
//		printf("%d", a);
//		solit(x / 10);
//		
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	solit(n);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n=0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		printf("pow(%d,%d) = %d\n", n, i, (int)pow(n, i));
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n > 50)
	{
		printf("cost = %.2f", 50 * 0.53 + (n - 50)*0.58);
	}
	else if (n > 0 && n <= 50)
		printf("cost = %.2f", n*0.53);
	else
		printf("Invalid Value!\n");
	return 0;
}