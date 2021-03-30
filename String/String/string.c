#include"string.h"
void InitString(SString* add)
{
	add->length = 0;
}
void StrAssign(SString* add, char* x)
{
	while (*x != '\0')
	{
		add->arr[add->length] = *x;
		add->length += 1;
		x += 1;
	}
	add->arr[add->length] = '\0';
}
void Print(SString* add)
{
	//for (int i = 0; i < add->length; i++)
	//{
	//	printf("%c ", add->arr[i]);
	//}
	printf("%s", add->arr);
}