#include"Stack.h"
char pairs(char a)
{
	if (a == ')')
		return '(';
	if (a == ']')
		return '[';
	if (a == '}')
		return '{';
	return 0;
}
bool isValid(char * s)
{
	int n = strlen(s);
	if (n % 2)
		return false;
	Stack S;
	StackInit(&S);
	int i = 0, flag = 0;
	while(*s != '\0')
	{
		if (*s == '[' || *s == '(' || *s == '{')
		{
			StackPush(&S, *s);
			flag++;
		}
		else
		{
			if (flag == 0 || S.head->data != pairs(*s))
			{
				//Ïú»ÙÕ»
				StackDestory(&S);
				return false;
			}
			StackPop(&S);
			flag--;
		}
		s++;
	}
	StackDestory(&S);
	return flag == 0 ? true : false;
}
int main()
{
	char arr[] = "((";
	if (isValid(arr))
		printf("Õæ\n");
	else
		printf("¼Ù\n");
	return 0;
}