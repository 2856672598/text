#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void menu()
//{
//	printf("*************************\n");
//	printf("**1.add           2.sub**\n");
//	printf("**3.mul           4.div**\n");
//	printf("*******  0.exit   ********\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void fun(int(*p)(int, int))
//{
//	int x, y;
//	printf("请输入两个操作数>\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", (*p)(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			fun(add);
//			break;
//		case 2:
//			fun(sub);
//			break;
//		case 3:
//			fun(mul);
//			break;
//		case 4:
//			fun(div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}

//对任何数进行排序
//冒泡排序仅限于整数
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct stu
//{
//	int age;
//	char name[20];
//}s;
//int sort_int(const void* s1,const void* s2)
//{
//	return (*(int*)s1 - *(int*)s2);
//}
//int sort_float(const void* s1, const void* s2)
//{
//	//return (int)(*(float*)s1 - *(float*)s2);//升序
//	return (int)(*(float*)s2 - *(float*)s1);//降序
//}
//int sort_char(const void* s1, const void* s2)
//{
//	//return ((struct stu*)s1)->age - ((struct stu*)s1)->age;
//	return strcmp(((struct stu*)s1)->name, ((struct stu*)s1)->name);
//}
//void text1()
//{
//	int arr[] = { 1,2,4,5,3,6,7,9,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), sort_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void text2()
//{
//	float arr[] = { 2.0,3.0,5.0,4.0,8.0,6.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), sort_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.2f ", arr[i]);
//	}
//}
//void text3()
//{
//	struct stu s[3] = { {10 ,"zhangming"},{30,"lihua"},{25,"zhangsan"} };
//	int sz = sizeof(s)/ sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), sort_char);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//}
//int main()
//{
//	//text1();
//	text2();
//	//text3();
//	return 0;
//}

//
#include<stdio.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;
	int id;
};
void swap(void*p1, void*p2,int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1+i);
		*((char*)p1+i)= *((char*)p2+i);
		*((char*)p2+i) = tmp;
	}
}
int sort_int(void* s1, void* s2)//数字比较
{
	return (*(int*)s1 - *(int*)s2);
}
int sort_char(void* s1, void* s2)//字符串比较
{
	return strcmp((char*)s1, (char*)s2);
}
int sort_age(void* m1, void* m2)//结构体
{
	//return (((struct stu*)m1)->age - ((struct stu*)m2)->age);
	return strcmp(((struct stu*)m1)->name, ((struct stu*)m2)->name);//结构体以姓名排序
}
void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
{
	int i = 0;
	for (i = 0; i < count; i++)
	{
		int j = 0;
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1)*size) > 0)
			{
				swap((char*)base + j * size, (char*)base + (j + 1)*size,size);
			}
		}
	}
}
void text1()
{
	int arr[] = { 2,4,6,3,5,7,8,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz, sizeof(arr[0]), sort_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void text2()
{
	struct stu s1[3] = { {"后羿",18,2021122},
	{"李白",60,20201112},{"猴子",50,19990392} };
	int sz = sizeof(s1) / sizeof(s1[0]);
	bubble(s1, sz, sizeof(s1[0]), sort_age);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s1[i].name);
	}
}
int main()
{
	text1();
	text2();
	return 0;
}


