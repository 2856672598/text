//#include"LinkStack.h"
//int main()
//{
//	DataNode* phead = NULL;
//	LinkStack* head = InIn();
//	PushStack(&phead, head, 1);
//	PushStack(&phead, head, 2);
//	PushStack(&phead, head, 3);
//	PushStack(&phead, head, 4);
//	PushStack(&phead, head, 6);
//	PushStack(&phead, head, 7);
//	PushStack(&phead, head, 8);
//	PushStack(&phead, head, 9);
//	PushStack(&phead, head, 10);
//	Print(phead);
//
//	//Print(head);
//}

#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	c = 1000 * (b % 10) + 100 * (a % 10) + 10 * (b / 10) + (a / 10);
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[5] = "abcd";
//	char arr1[3] = "c";
//	int i = 0, j = 0;
//	for (int z = 0; z < 5; z++)
//	{
//		while (arr[i] == arr1[j])
//		{
//			i++;
//			j++;
//			if (j >= 1)
//			{
//				printf("找到了\n");
//				return 0;
//			}
//		}
//		i = i - j + 1;
//		j = 0;
//	}
//	printf("没找到\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[5] = { 0 };
//	scanf("%s", arr1);
//	int i = 0, j = 0;
//	while (i < (int)strlen(arr) && j < (int)strlen(arr1))
//	{
//		if (arr[i] == arr1[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//	if (j >= (int)strlen(arr1))
//		printf("找到了");
//	else
//		printf("没找到\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1, b;
//	b = (a = a * 2) + (a = a + 3);
//	printf("%d %d", a, b);//10
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	printf("%d %d %d %d", a++, ++a, a++, ++a);//6 7 4 7
//	return 0;
//}


//kmp
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void Getnext(char* arr, int* next, int sz)
{
	//i指向字符串前缀
	//j指向字符串后缀末尾
	int i = 0, j = 0;
	for (j = 1; j < sz; j++)
	{
		while (i > 0 && arr[i] != arr[j])
		{
			i = next[i - 1];
		}
		if (arr[i] == arr[j])
			i++;
		next[j] = i;
	}
}
bool kmp(char* string, int* next, char* arr, int sizea, int sizes)
{
	int i = 0, j = 0;
	while (i < sizes&&j < sizea)
	{
		if (string[i] != arr[j] && j > 0)
		{
			j = next[j - 1];
		}
		else
		{
			i++;
			j++;
		}
	}
	if (j >= sizea && i <= sizes)
		return true;
	else
		return false;
}
int main()
{
	int i = 0, j = 1;
	char arr[] = "abcaa/*ababc*/";
	int next[18] = { 0 };

	int sz = strlen(arr);
	Getnext(arr, next, sz);
	char string[] = "abababc";

	int sizes = strlen(string);
	bool flag = kmp(string, next, arr, sz, sizes);
	if (flag)
		printf("找到了\n");
	else
		printf("没找到\n");

	//i = 0, j = 0;
	//while (i < (int)strlen(arr1) && j < (int)strlen(arr))
	//{
	//	if (arr[j] != arr1[i] && j > 0)
	//	{
	//		j = next[j - 1];
	//	}
	//	else
	//	{
	//		i++;
	//		j++;
	//	}
	//}
	//if (j >= (int)strlen(arr))
	//	printf("找到了\n");
	//else
	//	printf("没找到\n");
	return 0;
}