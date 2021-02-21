#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	//预定义符号
//	printf("%s\n", __FILE__);
//	printf("%s\n", __TIME__);//文件被编译的时间
//	printf("%d\n", __LINE__);//文件当前的行号
//	printf("%s\n", __DATE__);//文件被编译的日期
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//		return 0;
//	int arr[5];
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = i;
//		//日志
//		fprintf(pf, "file:%s date: %s time: %s line: %d i: %d\n",
//			__FILE__, __DATE__, __TIME__, __LINE__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#define ADD(x,y) x+y
//int main()
//{
//	int x = 5, y = 2, z = 2;
//	int ret = z * ADD(x, y);
//	//宏是替换而不是传参
//	printf("%d", ret);//12
//	return 0;
//}

//#include<stdio.h>
//#define ADD(x,y) (x+y)
//int main()
//{
//	int x = 5, y = 2, z = 2;
//	int ret = z * ADD(x, y);
//	printf("%d", ret);//14
//	return 0;
//}

//     #----把一个宏参数变成对应的字符串
//#include<stdio.h>
//#define PRINT(x) printf("the value of "#x" is %d\n",x);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

//    ##----可以把它两边的符号合成一个符号
//#include<stdio.h>
//#define CAT(x,y) x##y
//int main()
//{
//	int Class2021 = 100;
//	printf("%d", CAT(Class, 2021));
//	return 0;
//}


//带副作用的宏参数
//#include<stdio.h>
//#define MAX(x,y) (x)>(y)?(x):(y)
//int main()
//{
//	int a = 9;
//	int b = 10;
//	int max = MAX(a++, b++);
//	//max = a++ > b++ ? a++ : b++;
//	printf("%d\n", max);//11
//	printf("%d\n", a);//10
//	printf("%d\n", b);//12
//	return 0;
//}

//宏的参数可以是类型
//宏不可以调试
//#include<stdio.h>
//#define SIZE(type) sizeof(type)
//int main()
//{
//	int ret = SIZE(int);
//	printf("%d", ret);
//	return 0;
//}


//条件编译
//#include<stdio.h>
////#define DEBUG
//int main()
//{
////条件编译----如果定义了 常量 DEBUG则进行编译
////#ifdef DEBUG
////	printf("hehe\n");
////#endif
//
////判断是否被定义
////#if defined(DUBUG)
////	printf("haha\n");
////#endif
//
////#if !defined(DEBUG)
////	printf("嘿嘿\n");
////#endif
//
////如果未定义DEBUG则进行编译
//// ifdef-----ifndef;加上一个n
////#ifndef DEBUG
////	printf("嘿嘿\n");
////#endif
//
////常量表达式由预处理器求值
////多分支的条件编译
//
////#if  常量表达式
////	//
////#elif 常量表达式
////	//
////#else
////	//
////#endif
//
////#if 1==2
////	printf("haha\n");
////#elif 2==2
////	printf("hehe\n");
////#else
////	printf("嘿嘿\n");
////#endif
//
////嵌套指令
//#if defined(DUBUG)
//	#ifdef OPTION
//		option();
//	#endif
//	#ifdef OPTION1
//		option1();
//	#endif
//#elif defined(MAX)
//	#ifdef OPTION2
//		option2();
//	#endif
//#endif
//	return 0;
//}

////适用于引用库函数
////直接在标准位置查找头文件，查找不到提示编译错误
//#include<stdio.h>
////适用于引用自己写的头文件
////查找策略： 会现在源文件所在的目录下查找，如果该头文件未找到，编译器就像查找库函数头文件一样
////在标准位置下查找头文件，如果找不到则提示编译错误
//#include"text.h"
//int main()
//{
//	int len = Add(3, 4);
//	printf("%d", len);
//	return 0;
//}


//offsetof  宏实现
#include<stdio.h>
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name *)0)->member_name)
struct S
{
	int a;
	char b;
	double c;
};
int main()
{
	int len = OFFSETOF(struct S, b);
	printf("%d ", len);
	return 0;
}