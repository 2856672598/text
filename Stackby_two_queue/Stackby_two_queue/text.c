#define _CRT_SECURE_NO_WARNINGS
#include"Stackby_two_queue.h"
void text1()
{
	int input, data;
	Stack s;
	StackInit(&s);
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("退出");
			StackDestory(&s);
			return;
			break;
		case PUSH:
			printf("输入入栈的数据:");
			scanf("%d", &data);
			StackPush(&s, data);
			break;
		case POP:
			StackPop(&s);
			break;
		case STACKTOP:
			printf("栈顶元素为%d\n", StackTop(&s));
			break;
		default:
			printf("输出错误\n");
			break;
		}
	} while (input);
}
int main()
{
	text1();
	return 0;
}