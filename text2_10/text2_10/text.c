#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int *p = malloc(n * sizeof(int));
//	if (p == NULL)
//		printf("%s", strerror(errno));
//	else
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p+i));
//		}
//	}
//	free(p);//释放开辟的动态空间
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int* p = malloc(n * sizeof(int));
//	if (p == NULL)
//		printf("");
//	else
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", p + i);
//		}
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-i-1; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				int tmp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
void My_Sort(int* p,int n)
{

	if (p == NULL)
		;
	else
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%d", p + i);
		}
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n - i - 1; j++)
			{
				if (*(p + j) > *(p + j + 1))
				{
					int tmp = *(p + j);
					*(p + j) = *(p + j + 1);
					*(p + j + 1) = tmp;
				}
			}
		}
	}
}
void My_Print(int *p,int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int* p = malloc(n * sizeof(int));
	My_Sort(p, n);
	My_Print(p, n);
	free(p);
	p = NULL;
	return 0;
}