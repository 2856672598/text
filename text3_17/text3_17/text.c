#include"stack.h"
void change(SqStack*head, int n)
{
	int number = 0;
	printf("请输入您要转换的数\n");
	scanf("%d", &number);
	while (number / 2)
	{
		Push(head, number % n);
		number /= n;
	}
	Push(head, number % n);
	Print(head);
}
int main()
{
	SqStack s;
	InitStack(&s);
	int n = 0;
	printf("请输入您要转换的进制\n");
	scanf("%d", &n);
	change(&s, n);
	Destory(&s);
	return 0;
}