#include"string.h"
void InitString(SString* add)
{
	add->length = 0;
}
void StrCopy(SString* add, char* x)
{
	while (*x != '\0')
	{
		add->arr[add->length] = *x;
		add->length += 1;
		x += 1;
	}
	add->arr[add->length] = '\0';
}

void StrAssign(SString* add, char x)
{
	add->arr[add->length] = x;
	add->length += 1;
	add->arr[add->length] = '\0';
}

void next(char* sub, int* arr, int size)
{
	int i = 0, j = 1;
	for (j = 1; j < size; j++)
	{
		while (sub[i] != sub[j] && i > 0)
		{
			i = arr[i - 1];
		}
		if (sub[i] == sub[j])
			i++;
		arr[j] = i;
	}
}
int SubString(SString* add, char* sub)
{
	int arr[10] = { 0 };
	int i = 0, j = 0;
	int sizes = strlen(sub);
	next(sub, arr, sizes);
	while (i < sizes&&j < add->length)
	{
		if (add->arr[j] != sub[i] && i > 0)
		{
			i = arr[i - 1];
		}
		else
		{
			i++;
			j++;
		}
	}
	if (i >= sizes && j <= add->length)
		return j - i+1;
	else
		return -1;
}

void Clear(SString* add)
{
	while (add->length>=0)
	{
		add->arr[add->length] = 0;
		add->length -= 1;
	}
	add->length = 0;
}
//比较两个字符串的大小
//int StrCompare(SString* add, char* T)
//{
//	int i = 0;
//	while (*(add->arr + i) != '\0' && *(T + i) != '\0')
//	{
//		if (strcmp(add->arr + i, T + i) == 0)
//			i++;
//		else if (strcmp(add->arr + i, T + i) > 0)
//			return 1;
//		else
//			return 2;
//	}
//	if (*(add->arr + i) == *(T + i))
//		return 0;
//	else if (*(add->arr + i) == '\0')
//		return 2;
//	else
//		return 1;
//	return 0;
//}
int StrCompare(SString* add, char* T)
{
	int i = 0;
	for (i = 0; i < add->length && i < (int)strlen(T); i++)
	{
		if (add->arr[i] != *(T + i))
			return add->arr[i] - *(T + i);
	}
	return add->length - strlen(T);
}
void Print(SString* add)
{
	printf("%s", add->arr);
}