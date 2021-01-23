//#include<stdio.h>
//int main()
//{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));//4/8
	//printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a + 1));//4/8
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4/8
	//printf("%d\n", sizeof(*&a));//16----
	//printf("%d\n", sizeof(&a + 1));//4/8
	//printf("%d\n", sizeof(&a[0]));//4/8
	//printf("%d\n", sizeof(&a[0] + 1));//4/8

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4/8   ----
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0));//随机值
	////printf("%d\n", strlen(*arr));//err报错
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//随机值

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5

	//char *p = "abcdef";//p里存放的是a 的地址
	//printf("%d\n", sizeof(p));//4/8
	//printf("%d\n", sizeof(p + 1));//4/8    p+1得到的是字符b的地址
	//printf("%d\n", sizeof(*p));//1   *p得到的是a
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5

//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}

#include<stdio.h>
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知结构体的大小是20个字节
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//100014
	printf("%p\n", (unsigned long)p + 0x1);//100001
	printf("%p\n", (unsigned int*)p + 0x1);//100004  指针类型决定着加多少
	return 0;
}