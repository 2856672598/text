//#include<stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c", killer);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	int e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (
//							((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)
//								)
//						{
//							if (a*b*c*d*e == 120)
//								printf("%d %d %d %d %d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//旋转字符串
#include<stdio.h>
void left_move(char* arr, int k)
{
	int i = 0;
	int sz = strlen(arr);
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j < sz-1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[sz - 1] = tmp;
	}
}
int main()
{
	char arr[] = "hello";
	left_move(arr, 2);
	printf("%s", arr);
	return 0;
}