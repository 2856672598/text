//#include<stdio.h>
//int check_sys()
//{
//	//返回值为1，为小端；
//	//返回值为0，大端；
//	int i = 1;
//	char*p = (char*)&i;
//	return *p;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a = -1;
//	unsigned char b = -1;
//	signed char c = -1;
//	//因为打印为%d，所以char需要进行整形提升
//	printf("%d %d %d", a, b, c);//  -1   255   -1
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	char b = 128;
//	printf("%u ", a);//4294967168
//	printf("%u ", b);
//	/*printf("%d", sizeof(long ));*/
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//此处为死循环
//	unsigned int i = 1;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d", strlen(arr));//255     srtlen遇到 \0停止；
//	return 0;
//}

#include<stdio.h>
int main()
{
	unsigned int i = 0;
	for (i = 0; i <= 255; i++)
	{
		printf("helloword\n");
	}
	return 0;
}