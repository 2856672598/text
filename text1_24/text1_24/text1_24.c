#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);//
//	int *ptr2 = (int *)((int)a + 1);//转换成整形后 +1 是往后移动了一个字节；
//	printf("%x,%x", ptr1[-1], *ptr2);//4   2000000
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//1   p[ 0 ] = *(p + 0)
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc    -4 
//	//&p[4][2]=*(*(p+4)+2)
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10   5
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char* *cp[] = { c + 3,c + 2,c + 1,c };
//	char** *cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *--*++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}

//逆序输出字符串
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void revese(char* ret)
//{
//	assert(ret);
//	char* left = ret;
//	int sz = strlen(ret);
//	char* right = ret + sz - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[255] = { 0 };
//	/*scanf("%s", arr);*/
//	gets(arr);
//	revese(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, n;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = a;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//自幂数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//求出位数
//		int tmp = i;
//		int counst = 1;
//		int sum = 0;
//		while (tmp/10)
//		{
//			counst++;
//			tmp /= 10;
//		}
//		//求出每位数
//		tmp = i;
//		while (tmp)//123
//		{
//			sum += pow(tmp % 10 ,counst);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", sum);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 5;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n - i-1; j++)
		{
			printf(" ");
		}
		int z = 0;
		for (z = 0; z < i + 1; z++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		int z = 0;
		for (z = 0; z < n - i-1; z++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}