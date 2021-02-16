#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//打开文件
//	FILE* ps = fopen("text.txt", "w");
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('h', ps);
//	fclose(ps);
//	ps = NULL;
//	return 0;
//}

//stdin   stdout  stderr 默认打开的三个流
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	int ch = fgetc(stdin);
//	fputc(ch, pf);
//	//fputc(ch,stdout);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

#include<stdio.h>
#define M(x,y)  x-y
void main()
{
	int a = 4, b = 3, c = 5;
	printf("%d", a*M(b, c));
	return 0;
}
