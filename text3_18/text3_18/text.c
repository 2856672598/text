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
//	printf("大小写转换\n");
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

//#include<stdio.h>
//int  main()
//{
//
//	//int a = 1234;
//	//int c = a / 100 % 10;
//	//printf("%d", c);
//	//char a = 97, b;
//	//b = a + '8' - '3';
//	//printf("%c", b);
//	//double a = 123.45676789;
//	//printf("%f", a);
//	int a = 65, b = 97;
//	double m = 3.14159;
//	printf("%c-%d\n%c-%d\n",a,a,b,b);//A 65 a 97
//	printf("a=%06d,b=%-6d\n", a, b);//000065   97
//	printf("a=%d,a=%o,a=%x\n", a, a, a);//65 八进制  十六进制
//	printf("m=%lf\n", m);//3.141590
//	printf("m=%4.3lf\n", m);//3.142
//	printf("m=%06.3lf\n", m);//3.142
//	return 0;
//}

////浮点数在内存中的存储
//#include<stdio.h>
//#include<float.h>
//int main()
//{
//	float a;
//	//a = 340282346638528859811704183484516925440.000000;
//	//a = 34028234663852885.000000;
//	a = 12345678.4353;
//	//101.1
//	//(-1)^0  1.011  2^2
//	//s=0
//	//m=0.11
//	//e=2
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 b0 00 00
//
//	//0 11111110 11111111111111111111111
//	//1.9999998807907104   128
//	//6e6 eeee
//
//	//0.199 9999 88079 07104*2^127
//	//3.4028234663853037e+37
//	printf("%f", a);
//	printf("%f", FLT_MAX);
//	return 0;
//}

//#include<stdio.h>
//#include<float.h>
//int main()
//{
//	float a = 1234567837483832472829374382992842.123;
//	111010110111100110100010101.0001111101111100111011011
//
//	1.11010110111100110100010 1010001111101111100111011011*2^26
//
//	printf("%f\n", a);
//	float b = 340282346638528859811704183484516925440.000000;
//	float d = 15432098.00;
//	printf("%f", d);
//	printf("%f\n", FLT_MAX);
//	return 0;
//}

//#include<stdio.h>
//#include<float.h>
//#include<limits.h>
//int main()
//{
//	//float a = 3402823466385288598117041834904516925440.000000;
//	float b;
//	b = 16777215.00f;
//	//float d = 16777217.00;
//	float c = 340282359938528859811704183184519999999.000000;
//	float e = 340282346638528859811704183484516925440.000000f;
//	float f = 340282346638528859811704183484516815555.000000f;
//	printf("%f\n",c);
//	printf("%f\n", e);
//	printf("%f\n", f);
//	return 0;
//}

////二进制中一的个数
//#include<stdio.h>
//int count_one_bit(unsigned int x)
//{
//	int count = 0;
//	while (x)
//	{
//		if (x % 2 == 1)
//			count++;
//		x /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_one_bit(num);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = -1;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 8, count = 0;
//	scanf("%d", &num);
//	if (num >= 0)
//	{
//		while (num)
//		{
//			num = num & (num - 1);
//			count++;
//		}
//	}
//	else
//	{
//		//-2
//		//1000 0000 0000 0000 0000 0000 0000 0010
//		//1111 1111 1111 1111 1111 1111 1111 1101
//		//1111 1111 1111 1111 1111 1111 1111 1110
//
//		//-4
//		//1000 0000 0000 0000 0000 0000 0000 0100
//		//1111 1111 1111 1111 1111 1111 1111 1011
//		//1111 1111 1111 1111 1111 1111 1111 1100
//
//		//-8
//		//1000 0000 0000 0000 0000 0000 0000 1000
//		//1111 1111 1111 1111 1111 1111 1111 0111
//		//1111 1111 1111 1111 1111 1111 1111 1000
//		int tmp = num;
//		while (tmp)
//		{
//			if (tmp % 2 == 0)
//				count++;
//			else
//				break;
//			tmp /= 2;
//		}
//	}
//	if (count == 1 && num >= 0)
//		printf("%d是2的n次方数\n", num);
//	else if (count >= 1 && num <= 0)
//		printf("%d是2的n次方数\n", num);
//	else
//		printf("NO\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'a'&&ch <= 'z')
//		ch -= 32;
//	else if (ch >= 'A'&&ch <= 'Z')
//		ch += 32;
//	printf("%c", ch);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int countDigitOne(int n)
//{
//	if (n <= 0)
//		return 0;
//	int tmp = n;
//	int num = 0;
//	int count = 0;
//	while (tmp)
//	{
//		tmp /= 10;
//		num++;
//	}
//	int i = 0;
//	while (num)
//	{
//		int base = (int)pow(10, i);
//		int cur = (n / base) % 10;
//		int next = n / (int)pow(10, i + 1);
//		int till = n % base;
//		if (cur == 1)
//		{
//			count += next * base + till + 1;
//		}
//		else if (cur > 1)
//		{
//			count += (next + 1) * base;
//		}
//		else
//		{
//			count += next * base;
//		}
//		i++;
//		num--;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int len = countDigitOne(n);
//	printf("%d", len);
//	return 0;
//}



//#include<stdio.h>
////int main()
////{
////	int n = 0;
////	scanf("%d", &n);
////	int sum = 0;
////	for (int i = 1; i <= n; i++)
////	{
////		sum += i;
////	}
////	printf("%d", sum);
////	return 0;
////}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = (1 + n)*n / 2;
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void  text1()
//{
//	int i = 10;
//	while (i)
//	{
//		printf("%d\n", rand());
//		i--;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//text1();
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%lld\n", time(NULL) % 10);
//	}
//	return 0;
//}



#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
typedef struct snake
{
	int x;
	int y;
	struct snake * next;
}snake;
struct snake* InitSnake()
{
	snake* head = malloc(sizeof(snake));
	if (head)
	{
		head->x = 8;
		head->y = 10;
		head->next = NULL;
		return head;
	}
	return NULL;
}
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void createfood()
{
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % 10;
		y = rand() % 10;
		if (x % 2 == 0 && x > 2 && y > 2);
			break;
	}
	gotoxy(x, y);
	printf("★");
}
void text()
{
	srand((unsigned int)time(NULL));
	int n = 30;
	snake* head = InitSnake();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (j == 0 || j == n - 1 || i == 0 || i == n - 1)
				printf("■");
			else
				printf("  ");
		}
		printf("\n");
	}
	createfood();
	/**
	*控制台按键所代表的数字
	*“↑”：72
	*“↓”：80
	*“←”：75
	*“→”：77
	*/

	for (int i = 2; i <= 15; i++)
	{
		head->x = 10;
		head->y = 5;
		for (int j = 5; j < 15; j++)
		{
			Sleep(300);
			head->x = head->x;
			head->y = head->y + 1;
			gotoxy(head->x, head->y);
			printf("■");
			gotoxy(head->x, head->y - 1);
			//printf("  ");
			int key1 = 0, key2 = 0;
			if (_kbhit())
			{
				key1 = _getch();
				key2 = _getch();
			}
			if (key2 == 77)
			{
				while (1)
				{
					Sleep(300);
					head->x += 2;
					head->y = head->y;
					gotoxy(head->x, head->y);
					printf("■");
					gotoxy(head->x - 2, head->y);
					printf("  ");
				}
			}
		}
	}
}
int main()
{
	text();
	return 0;
}