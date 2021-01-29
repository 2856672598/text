#include<stdio.h>
#include<assert.h>
#include<string.h>
//strncpy模拟实现----->通过拷贝的字符数num;
char* my_strncpy(char*dest, char* ret, int num)
{
	while (num&&(*dest++ = *ret++))//如果当num>源字符后此条件为假，或者是num--为0了
		num--;
	if (num)
		while (--num)
			*dest++ = '\0';
	return dest;
}
//strcpy模拟实现----->通过\0;
char* my_strcpy(char*dest, char*ret)
{
	while (*dest++ = *ret++);
	return dest;
}

//strncat模拟实现
char* my_strncat(char*dest, char*ret, int num)
{
	while (*dest++);
	dest--;
	while (num--)
	{
		if (!(*dest++ = *ret++))
		{
			return dest;
		}
	}
	*dest = '\0';
	return dest;
}
//strncmp模拟实现
int my_strncmp(const char* string1, const char*string2, int sum)
{
	while (sum-- && (*string1++ == *string2++));
	string1--;
	string2--;
	return *string1 - *string2;
}
//int main()
//{
//	//char arr1[20] = "hellojf\0sdksjkfj";
//	//char arr2[10]= "word";
//	/*strncat(arr1,arr1,2);
//	strcpy(arr1, arr1);*/
//	//strncpy(arr1, arr2, 2);
//
//	/*my_strncpy(arr1, arr2, 6);*/
//
//	//my_strcpy(arr1, arr2);
//
//	//my_strncat(arr1, arr2, 8);
//
//	char arr1[] = "qwertygfd";
//	char arr2[] = "qwerguihg";
//	int len = my_strncmp(arr1, arr2, 6);
//	printf("%d", len);
//	return 0;
//}




//char* my_strstr(const char*arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	if (arr2 == NULL)
//		return arr1;
//	while (*arr1)
//	{
//		while ((*arr1!='\0')&&(*arr2!='\0')&&(*arr1 == *arr2))
//		{
//			arr1++;
//			arr2++;
//		}
//		if (*arr2 == '\0')
//			return arr1;//除此的arr1已经的判断的过程中向后移动了三个字符；
//		arr1++;
//	}
	//return NULL;
//}

//strstr模拟实现
char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1&&arr2);
	const char* s1 = arr1;
	const char* s2 = arr2;
	const char* cur = arr1;
	assert(arr1 && arr2);
	if(!*arr2)
	//if (arr2 == NULL)
		return (char*)s1;
	while (*cur)
	{
		s1 = cur;
		s2 = arr2;
		while (*s1&&*s2 && !(*s1 - *s2))
		//while ((*s1 != '\0') && (*s2 != '\0') && (*s1== *s2))
		{
			s1++;
			s2++;
		}
		if (! *s2)
			return (char*)cur;//找到子串
		if (!*s2)
			return NULL;//当s2为\0时，直接跳出循环
		cur++;
	}
	return NULL;//没有找到子串
}
int main()
{
	char arr1[] = "abccccce";
	char arr2[] = "hhtyr";
	//char* len = my_strstr(arr1, arr2);

	char* len = strstr(arr1, arr2);
	printf("%s", len);
	return 0;
}