#define _CRT_SECURE_NO_WARNINGS 1

//动态内存分配


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//malloc(10*sizeof(int));
//	int*p = (int*)calloc(10, sizeof(int));
//	//calloc会把创建的空间初始化为0；
//	if (p == NULL)
//		;
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));
//	if (p != NULL)
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	int* str = realloc(p, 40);
//	if (str != NULL)
//	{
//		p = str;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//一直开辟空间不释放，会造成内存泄漏
//错误代码
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//错误代码
//#include<stdio.h>
//void text()
//{
//	int* p = (int*)malloc(40);
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//}
//int main()
//{
//	text();
//	while (1);
//	return 0;
//}

//运行Text会有什么结果
//存在内存泄漏的问题
//程序会崩溃
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Text()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "helloword");
//	printf("%s", str);
//}
//int main()
//{
//	Text();
//	return 0;
//}

//方法一
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Text()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "helloword");
//	printf("%s", str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Text();
//	return 0;
//}

//方法二
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Text()
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "helloword");
//	printf("%s", str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Text();
//	return 0;
//}

//char *GetMemory(void)
//{
//	char p[] = "hello world";//栈区
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);//非法访问
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void GetMemory(char**p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Text()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Text();
//	return 0;
//}
void Text()
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放后str指向的空间并不会被置为NULL
	if (str != NULL)
	{
		//非法访问
		strcpy(str, "word");
		printf(str);
	}
}
int main()
{
	Text();
	return 0;
}