#define _CRT_SECURE_NO_WARNINGS 1
//习题4-1 求奇数和
//#include<stdio.h>
//int main()
//{
//	int x, sum = 0;
//	int i = 0;
//	for (i = 0;; i++)
//	{
//		scanf("%d", &x);
//		if (x <= 0)
//			break;
//		else if (x % 2 != 0)
//			sum += x;
//	}
//	printf("%d", sum);
//	return 0;
//}

//习题4-2 求幂级数展开的部分和 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double x;
//	double num = 1, sum = 1, tmp;
//	scanf("%lf", &x);
//	int  i = 0;
//	for (i = 1;; i++)
//	{
//		int j = 0;
//		double ret = pow(x, i);
//		num = 1;
//		for (j = 1; j <= i; j++)
//		{
//			num *= j;
//		}
//		tmp = ret / num;
//		sum += tmp;
//		if (tmp < 0.00001)
//			break;
//	}
//	printf("%f", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int  i = 0;
//	double mole = 2, deno = 1;
//	double sum = mole / deno;
//	for (i = 2; i <= n; i++)
//	{
//		double num = mole + deno;
//		deno = mole;
//		mole = num;
//		sum += mole / deno;
//	}
//	printf("%.2f", sum);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, a;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	double sum = 0, s = 0;
//	for (i = 1; i <= n; i++)
//	{
//		double count = pow(10, i-1);
//		s += a * count;
//		sum += s;
//	}
//	printf("s = %d", (int)sum);
//	return 0;
//}


//习题4-5 换硬币 (20分)
//#include<stdio.h>
//int main()
//{
//	int n, a, b, c;
//	int count = 0;
//	scanf("%d", &n);
//	//for (a = n / 5; a > 0; a--)
//	//{
//	//	for (b = n / 2; b > 0; b--)
//	//	{
//	//		for (c = n; c > 0; c--)
//	//		{
//	//			if (a * 5 + b * 2 + c == n)
//	//			{
//	//				printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", a, b, c,a+b+c);
//	//				count++;
//	//			}
//	//		}
//	//	}
//	//}
//
//	for(a=n/5;a>0;a--)
//		for(b=n/2;b>0;b--)
//			for(c=n;c>0;c--)
//				if (a * 5 + b * 2 + c == n)
//				{
//					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", a, b, c, a + b + c);
//					count++;
//				}
//	printf("count = %d\n", count);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, x, sum = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = pow(10, n - 1); i < pow(10, n); i++)
//	{
//		int tmp = i;
//		sum = 0;
//		while (tmp)
//		{
//			x = tmp % 10;
//			sum += pow(x, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//最大公约数最小公倍数
#include<stdio.h>
int main()
{
	int x = 6, y = 12, z = 0;
	scanf("%d %d", &x, &y);
	//while (y!=0)
	//{
	//	z = x % y;
	//	x = y;
	//	y = z;
	//}
	int x1 = x, y1 = y;
	while (x != y)
	{
		if (x > y)
			x = x - y;
		else if (x < y)
			y = y - x;
	}
	z = x1 * y1 / x;
	printf("%d %d", x,z);
	return 0;
}