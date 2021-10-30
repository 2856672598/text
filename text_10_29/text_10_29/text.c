#include"Stack.h"

char pairs(char ch)
{
	if (ch == '}')
		return '{';
	else if (ch == ')')
		return '(';
	else
		return '[';
}

bool isValid(char * s)
{
	//创建一个栈
	ST st;
	Init(&st);
	for (int i = 0; i < (int)strlen(s); i++)
	{
		if (s[i] == '{' || s[i] == '(' || s[i] == '[')
		{
			Push(&st, s[i]);
		}
		else
		{
			//判断此时栈是否为空
			if (Empty(&st))
			{
				return false;
			}
			else
			{
				//栈中不为空，判断括号是否匹配
				if (Top(&st) == pairs(s[i]))
				{
					Pop(&st);
				}
				else
					return false;
			}
		}
	}

	//判断此时栈是否为空了
	if (Empty(&st))
		return true;
	return false;
}
//int main()
//{
//	char arr[] = "{[]}";
//	printf("%d ", isValid(arr));
//	return 0;
//}