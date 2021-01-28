#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* str1, const char* str2)
//{
//	char* tmp = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello";
//	char* tmp = strcpy(arr1, arr2);
//	//my_strcpy(arr1, arr2);
//	//printf("%s ", arr1);
//	//printf("%s", tmp);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "word";
//	int sz = my_strlen(arr1);
//	if (strlen(arr2) - strlen(arr1) >0 )//strlen返回值为无符号的整型unsigned int
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//#include<stdio.h>
//void my_strcat(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//}
//int main()
//{
//	char arr1[15] = "hello";
//	char arr2[] = "wor d";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//strcmp及strcmp模拟实现
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdwf";
//	char arr2[] = "abceffffffffff";
//	int ret = strcmp(arr1, arr2);
//	printf("ret = %d", ret);
//	return 0;
//}

#include<stdio.h>
int my_strcmp(char* ret1, char* ret2)
{
	while (ret1 == ret2)
	{
		if (ret1 == '\0')
			return 0;
		ret1++;
		ret2++;
	}
	if (*ret1 > *ret2)
		return 1;
	else
		return -1;
}
int main()
{
	char arr1[] = "abc";
	char arr2[] = "abcceeeeee";
	int ret = my_strcmp(arr1, arr2);
	printf("ret = %d", ret);
	return 0;
}