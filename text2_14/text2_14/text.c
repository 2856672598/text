#include<stdio.h>
#include<stdlib.h>
//柔性数组
//方案1
//struct S
//{
//	int i;
//	int arr[];
//};
//int main()
//{
//	struct S s;
//	struct S* ps = malloc(sizeof(s) + sizeof(int) * 5);
//	int i = 0;
//	if (ps != NULL)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			ps->arr[i] = i;
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//方案2
struct S
{
	int i;
	int* arr;
};
int main()
{
	struct S *ps = malloc(sizeof(struct S));
	ps->arr = malloc(sizeof(int) * 5);
	if (ps->arr != NULL)
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			ps->arr[i] = i;
			printf("%d ", ps->arr[i]);
		}
	}
	int* str = realloc(ps->arr, sizeof(int) * 10);
	if (str != NULL)
	{
		ps->arr = str;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			ps->arr[i] = i;
			printf("%d ", ps->arr[i]);
		}
	}
	//注意先后释放顺序
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}