#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "sd&..jsd.dsd@.ysd&dsd";
//	char*p = ".@&";
//	char* ret = NULL;
//	/*len = strtok(arr, p);*/
//	for (ret = strtok(arr, p); ret!= NULL; ret=strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	printf("%s", arr);
//	return 0;
//}

//sterror应用
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (!pf)
//	{
//		printf("%s", strerror((int)pf));
//	}
//	else
//		printf("%s","open");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>


//memcpy模拟实现
//void* my_memcpy(void*dest, const void*src, int sz)
//{
//	void* ret = dest;
//	assert(src);
//	while (sz--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}


//memmove模拟实现
//void* my_memmove(void*dest, const void* src, size_t sz)
//{
//	void* tmp = dest;
//	assert(src);
//	//if (dest <= src || ((char*)dest >= (char*)src + sz));
//	if (dest <=src)//从前往后拷贝
//	{
//		while (sz--)
//		{
//			*(((char*)dest)++) = *(((char*)src)++);
//			/*++(char*)dest;
//			++(char*)src;*/
//		}
//	}
//	else
//	{//从后往前拷贝
//		//dest = (char*)dest + sz - 1;
//		//src = (char*)src + sz - 1;
//		//while (sz--)
//		//{
//		//	*(char*)dest = *(char*)src;
//		//	--(char*)dest;
//		//	--(char*)src;
//		//}
//
//		while (sz--)
//		{
//			*((char*)dest+sz )= *((char*)src + sz);
//		}
//	}
//	return tmp;
//}
//struct stu 
//{
//	char name[20];
//	int age;
//	int id[10];
//};
//int main()
//{
//	//char arr1[] = { 1,2,3,4,5 };
//	//char arr2[6] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(arr1, arr2, sizeof(arr1));
//
//	//struct stu s1[] = { {"zhangsan",18,1734988533},{"lisi",29,1800338456} };
//	//struct stu s2[3];
//	//my_memcpy(s2, s1, sizeof(s1));
//
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10};
//	void* p = my_memmove (arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "helle";
//	// int memcmp(const void* buf1 , const void* buf2 , size_t count);
//	//此处的const指的是字符数
//	int ret = memcmp(arr1, arr2, 5);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//int arr[10];
//	char arr[10];
//	//void* memset(void* dest,int c,size_t count);
//	//count 单位为字节    c为要设置的字符     返回值为dest
//	memset(arr, 'a', 40);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 3, b = 4, c = 5, t = 99;

	if (b < a && a < c) t = a; a = c; c = t;

	if (a < c && b < c) t = b; b = a; a = t;

	printf("%d %d %d\n", a, b, c);//4 5 99
	return 0;
}
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//释放内存块，释放后内容不会清空
//	if (str != NULL)
//	{
//		strcpy(str, "word");    //所以运行后会产生未定义行为
//		printf(str);
//	}
//}
