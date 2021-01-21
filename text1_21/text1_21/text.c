#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//#include<stdio.h>
//int add(int x, int y)
//{
//	return  x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = &add;
//	int c = (*p)(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//void Print(char* a)
//{
//	printf("%s\n", a);
//}
//void Print1(char a[10])
//{
//	printf("%s\n", a);
//}
//int main()
//{
//	//void(*p)(char*) = Print;
//	//(*p)("helloword");
//	//char a[] = "helloword";
//	//Print1(a);
//	char a[] = "helloword";
//	/*Print1(a);*/
//
//	//char a[] = "helloword";
//	void(*p)(char*) = Print1;
//	(*p)(a);
//	p(a);//这样写也是正确的   ；
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////函数指针pf
//char* (*pf)(char*, char*);
////函数指针数组能够存放四个my_strcmp的函数地址
//char* (*pfArr[4])(char*, char*);

//计算器
#include<stdio.h>
void menu()
{
	printf("*************************\n");
	printf("**1.add           2.sub**\n");
	printf("**3.mul           4.div**\n");
	printf("*******  0.exit   ********\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int a, b, input;
	int(*pa[5])(int, int) = { 0,add,sub,mul,div };
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		while (getchar() != '\n');
		if (input >= 1 && input <= 4)
		{
			printf("请输入操作数\n");
			scanf("%d %d", &a, &b);
			while (getchar() != '\n');
			int output = pa[input](a, b);
			printf("%d\n", output);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	return 0;
}

//每日一道  练习3-7 成绩转换 
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (input >= 90 && input <= 100)
//		printf("A\n");
//	else if (input < 90 && input >= 80)
//		printf("B\n");
//	else if (input < 80 && input >= 70)
//		printf("C\n");
//	else if (input < 70 && input >= 60)
//		printf("D\n");
//	else if (input < 60 && input >= 0)
//		printf("E\n");
//	return 0;
//}