//#include<stdio.h>
//int main()
//{
//	//int a, b, c, d;
//	//a = 10;
//	//b = 10;
//	//c = a++;
//	//d = --b;
//	//printf("%d %d %d %d", a, b, c, d);
//
//	int a = 1;
//	a *= a -= 5;
//	printf("%d", a);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char a;
//	printf("´óÐ¡Ð´×ª»»\n");
//	scanf("%c", &a);
//	if (a >= 'a'&&a <= 'z')
//	{
//		a -= 32;
//		printf("%c", a);
//	}
//	else if (a >= 'A'&&a <= 'Z')
//	{
//		a += 32;
//		printf("%c", a);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	while (ch = getchar())
//	{
//		if (ch <= 'z'&&ch >= 'a')
//		{
//			ch -= 32;
//		}
//		else if (ch <= 'Z'&&ch >= 'A')
//		{
//			ch += 32;
//		}
//		printf("%c", ch);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 10;
	int* b = &a;
	printf("%p", b);
	return 0;
}