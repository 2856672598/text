#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("请输入成绩\n");
//	scanf("%d", &n);
//	if (n > 100 || n < 0)
//		printf("成绩无效\n");
//	else if (n >= 90)
//		printf("优秀\n");
//	else if (n >= 80)
//		printf("良");
//	else if (n >= 70)
//		printf("中\n");
//	else if (n >= 60)
//		printf("及格\n");
//	else
//		printf("不及格\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = a;
//	if (a < b)
//	{
//		if (b < c)
//			max = c;
//		else
//			max = b;
//	}
//	else
//	{
//		if (a > c)
//			max = a;
//		else
//			max = c;
//	}
//	printf("%d", max);
//}

#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("一月\n");
		break;
	case 2:
		printf("二月\n");
		break;
	case 3:
		printf("三月\n");
		break;
	case 4:
		printf("四月\n");
		break;
	case 5:
		printf("五月\n");
		break;
	case 6:
		printf("六月\n");
		break;
	case 7:
		printf("七月\n");
		break;
	case 8:
		printf("八月\n");
		break;
	case 9:
		printf("九月\n");
		break;
	case 10:
		printf("十月\n");
		break;
	case 11:
		printf("十一月\n");
		break;
	case 12:
		printf("十二月\n");
		break;
	default:
		printf("error\n");
	}
	return 0;
}