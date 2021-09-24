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

//#include<stdio.h>
//int main()
//{
//	int a = 3, b = 4, c = 5, t = 99;
//
//	if (b < a && a < c) t = a; a = c; c = t;
//
//	if (a < c && b < c) t = b; b = a; a = t;
//
//	printf("%d %d %d\n", a, b, c);//4 5 99
//	return 0;
//}
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



#include<stdio.h>
#include<assert.h>
void* my_memcpy(void*des, const void* sour, size_t n)
{
	assert(des&&sour);
	void* ret = des;
	while (n--)
	{
		*((char*)des)++ = *((char*)sour)++;
	}
	return ret;
}

char* my_strstr(char* str1, const char* str2)
{
	assert(str1&& str2);
	char* p1 = NULL;
	const char* p2 = NULL;
	char* p = str1;

	while (p)
	{
		p1 = p;
		p2 = str2;

		while (*p1 != '\0'&&*p2 != '\0'&&*p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return p;
		p++;
	}
	return NULL;
}

char * my_strcat(char * destination, const char * source)
{
	assert(destination);
	char* ret = destination;
	//走到\0
	while (*destination++);

	while (*destination++ = *source++);
	return ret;
}

int my_strcmp(const char* str1, const char*str2)
{
	assert(str1&& str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

char* my_strcpy(char* des, const char* sour)
{
	char* ret = des;
	assert(des&&sour);
	while (*des++ = *sour++);
	return ret;
}

size_t my_strlen(const char* str)
{
	assert(str);
	size_t count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}

void* my_memmove(void *dest, const void *src, size_t count)
{
	assert(dest&&src);
	void* tmp = dest;
	if (dest <= src)
	{
		while (count--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	else
	{
		//倒着拷贝
		(char*)dest += count - 1;
		(char*)src += count - 1;

		while (count--)
		{
			*((char*)dest)-- = *((char*)src)--;
		}
	}
	return tmp;
}

char * strncat(char * destination, const char * source, size_t num)
{
	char* tmp = destination;
	while (*destination != '\0')
		destination++;
	for (int i = 0; i < (int)num && source[i]; i++)
	{
		*destination++ = source[i];
	}
	return tmp;
}

char * strncpy(char * destination, const char * source, size_t num)
{
	int i = 0;
	for (i = 0; i < (int)num&&source[i]; i++)
	{
		destination[i] = source[i];
	}
	if (i < (int)num)
		destination[i] = '\0';
	return destination;
}
void text1()
{
	char nums1[] = "hello word";
	char nums2[] = "word";
	printf("%s ", my_strstr(nums1, nums2));
}

void text2()
{
	char nums1[] = "abcdef";
	char nums2[] = "abcdef";

	printf("%d ", my_strcmp(nums1, nums2));
}

void text3()
{
	char nums1[] ={ "hello" };
	char nums2[20] = "\0";
	my_strcpy(nums2, nums1);
	printf("%s ", nums2);
}

void text4()
{
	char nums[] = "hello";
	printf("%d ", my_strlen(nums));
}

void text5()
{
	char nums[10] = "hello";
	printf("%s", strncat(nums, "wor", 4));
}

void text6()
{
	char nums[10] = "hello";
	printf("%s", strncpy(nums, "word", 2));
}

int main()
{
	//int nums1[] = { 1,2,3,4,5 };
	//int nums2[5];
	//int sz = sizeof(nums1) / sizeof(nums1[0]);
	//my_memcpy(nums2, nums1, sizeof(int) * sz);
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%d ", nums2[i]);
	//}

	//text1();

	//text2();

	//text3();

	//text4();

	//text5();

	text6();
	return 0;
}