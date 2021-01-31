#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void main() {
//	char str[] = "S\065AB";
//	printf("\n%d", sizeof(str));
//}

//char* getMem(void) {
//	char p[] = "helloword";
//	p[5] = 0x0;
//	return p;
//}
//int main()
//{
//	char *s = 0x0;
//	s = getMem();
//	printf(s);//不确定
//}

//求结构体所占空间
//typedef struct stu
//{
//	float b;
//	short c;
//	char a;
//	char d;
//}stu;
//
//int main()
//{
//	printf("结构体大小%d ", sizeof(stu));//8
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
	//char arr1[20] = "hhhhhello";
	//char arr2[10] = "hell";
	//strcpy(arr2, arr1);
	//strncat(arr1, arr1,5);
	//int ret = strcmp(arr1, arr2);
	//int ret = strncmp(arr1, arr2, 4);
	//memcpy(arr2, arr1, 5);

	//strncat(arr1, arr1, 9);
	//char* p = strstr(arr1, arr2);

	//char  arr1[] = "28566.47%.8.2.df$#.dsd@";
	//char arr2[] = ".@%#$";
	//char*p = NULL;
	//for (p = strtok(arr1, arr2); p != NULL; p = strtok(NULL, arr2))
	//{
	//	printf("%s\n", p);
	//}
//	char *p = NULL;
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		p = strerror((int)pf);
//	}
//	printf("%s\n", p);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int qsort_int(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,2,99,6,3 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, num, sizeof(arr[0]), qsort_int);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//PTA练习题
//#include<stdio.h>
//int main()
//{
//	int arr[3];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3 - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	printf("%d->%d->%d", arr[0], arr[1], arr[2]);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int speed, limit;
//	scanf("%d %d", &speed, &limit);
//	double rate = 100 * fabs(limit - speed) / limit;
//	if (rate >= 10 && rate < 50)
//		printf("Exceed %.0f%%. Ticket 200", rate);
//	else if (rate >= 50)
//		printf("Exceed %.0f%%. License Revoked", rate);
//	else
//		printf("OK");
//	return 0;
//}

//习题3-3 出租车计价 (15分)
//#include<stdio.h>
//int main()
//{
//	float mil;
//	int time;
//	double price;
//	scanf("%f %d", &mil, &time);
//	if (mil <= 3)
//		price = 10;
//	else if (mil < 10)
//		price = 10 + (mil - 3) * 2.0;
//	else
//		price = 10 + (10 - 3)*2.0 + (mil - 10)*3.0;
//	price += time / 5 * 2.0;
//	printf("%.0f", price);
//	return 0;
//}

//习题3-4 统计学生成绩
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;;
//	int arr[1000];
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] >= 90&&arr[i]<=100)
//			a++;
//		else if (arr[i] >= 80 && arr[i] < 90)
//			b++;
//		else if (arr[i] >= 70 && arr[i] < 80)
//			c++;
//		else if (arr[i] >= 60 && arr[i] < 70)
//			d++;
//		else
//			e++;
//	}
//	printf("%d %d %d %d %d", a, b, c, d, e);
//	return 0;
//}

//习题3-5 三角形判断 (15分)
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double x1, x2, x3, y1, y2, y3;
//	double a, b, c, L,S,p;
//	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
//	a = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
//	b = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));
//	c = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));
//	if (a + b <= c || a + c <= b || b + c <= a)
//		printf("Impossible");
//	else
//	{
//		L = a + b + c;
//		p = L / 2;//半周长，利用海伦公式求面积
//		S = sqrt(p*(p - a)*(p - b)*(p - c));
//		printf("L = %.2f, A = %.2f", L, S);
//	}
//	return 0;
//}


//练习4-3 求给定精度的简单交错序列部分和 (15分)
#include<stdio.h>
#include<math.h>
int main()
{
	double eps, sum = 0, item = 1;
	int flag = 1, i = 1;
	scanf("%lf", &eps);
	do
	{
		item = flag * 1.0 / i;
		sum += item;
		flag = -flag;
		i += 3;
	} while (eps < fabs(item));
	printf("sum = %.6f", sum);
	return 0;
}
