#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = 0;
//	b = a >> 1;
//	//原码：10000000000000000000000000000001
//	//反码：11111111111111111111111111111110
//	//补码：11111111111111111111111111111111
//	printf("%d", b);
//}

//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int b = 0;
//	b = num >> -2;//这种是错误的，不能移动负数位
//	printf("%d", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 3;
//	//&按位与    同时为1才为1
//	//00000000000000000000000000000101
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//int c = a & b;
//	//printf("%d", c);
//	//|按位或   同时为0才为0，否则为1；
//	//00000000000000000000000000000101
//	//00000000000000000000000000000011
//	//00000000000000000000000000000111
//	//int c = a | b;
//	//printf("%d", c);
//	
//	//^按位异或    相同为0，相异为1；
//	//00000000000000000000000000000101
//	//00000000000000000000000000000011
//	//00000000000000000000000000000110
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//}

//在不使用第三个变量的情况下交换两个数
//#include<stdio.h>
//int main()
//{
//	//加减法局限性就是可能会溢出
//	int a = 3;
//	int b = 5;
//	printf("交换前a= %d b= %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后a= %d b= %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//异或方法交换局限性就是代码可读性差，效率比较低
//	int a = 3; 
//	int b = 5;
//	printf("交换前a= %d b= %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a= %d b= %d\n", a, b);
//	return 0;
//}

//输入一个数统计其在计算机存储中有几个1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//整数在计算机中存储的是补码
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((a >> i) & 1))
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 10;
	//sizeof中是不进行运算的；
	//printf("%d\n", sizeof(a = b + 5));//4
	//printf("%d\n", a);//0
	//printf("%d\n", ++a);//1  前置++，先++在使用
	//printf("%d", a++);//0    后置++，先使用后++；
	//return 0;
//}

//#include<stdio.h>
//void text1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void text2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10];
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	//在传参的过程中传过去的是 首元素的地址   ----->指针  指针大小为4或者8
//	text1(arr);//4/8
//	text2(ch);//4/8
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 1, c = 1;
//	//i = a++  && ++b && c++;
//	//在&&中 左边一但为假，右面将不再进行运算
//	//printf("%d %d %d", a, b, c);//1   1  1
//	i = a++ || ++b || c++;
//	printf("%d %d %d", a, b, c);//
//	return 0;
//}

//三目操作符
//#include<stdio.h>
//int main()
//{
//	int max;
//	int a = 10;
//	int b = 20;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = (a > b ? a : b);
//	printf("%d", max);
//	return 0;
//}

#include<stdio.h>
int get_max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 20;
	int b = 10;
	int max = get_max(a, b);
	printf("%d", max);
	return 0;
}