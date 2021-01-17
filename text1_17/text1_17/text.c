#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//typedef struct stu       //struct stu是结构体的类型
//{
//	char name[20];
//	int age;
//	char num[12];
//}stu;
//void a(struct stu* ps)
//{
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->num);
//	printf("%d\n", ps->age);
//}
//int main()
//{
//	stu s1 = { "张明",18,"17349883343" };
//	//printf("%d", s1.age);
//	a(&s1);
//	/*stu* p = &s1;
//	printf("%s\n", p->num);
//	printf("%s\n", p->name);*/
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1478;
//	//10111000110
//	//0x5c6
//	return 0;
//}

//判断当前机器字节序是大小端
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float a;
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%f", &a);
//		sum += a;
//	}
//	printf("%.2f %.2f", sum, sum / 3.0);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,0,4,0,5,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		/*if (arr[i] == 0)
//			arr[i] = 6;*/
//		(arr[i] == 0 ? arr[i] = 6 :0);
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//PTA习题2-4 求交错序列前N项和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	double sum = 0;
//	int a = 1;
//	int b = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i * a*1.0 / b;
//		b += 2;
//		a = -a;
//	}
//	printf("%.3f", sum);
//	return 0;
//}

//PTA习题2-5 求平方根序列前N项和 (
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += sqrt(i);
//	}
//	printf("sum = %.2f", sum);
//	return 0;
//}

//习题2-6 求阶乘序列前N项和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		int output = 1;
//		for (j = i + 1; j > 0; j--)
//		{
//			output = output * j;
//		}
//		sum += output;
//	}
//	printf("%d",sum);
//	return 0;
//}

#include<stdio.h>
int get_sum(int x)
{
	int sum = 1;
	int i = x;
	if (x > 0)
	{
		while (i)
		{
			sum = sum * i;
			i--;
		}
		return sum+get_sum(x - 1);
	}
	return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = get_sum(n);
	printf("%d", sum);
	return 0;
}
