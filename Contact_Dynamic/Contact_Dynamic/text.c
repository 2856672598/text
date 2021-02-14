#include"contact.h"
void menu(void)
{
	printf("*******************************\n");
	printf("******1.add        2.del ******\n");
	printf("******3.search     4.modify****\n");
	printf("******5.show       0.exit  ****\n");
	printf("*******************************\n");
}
int main()
{
	int input;
	//创建通讯录
	Contact con;

	//初始化通讯录
	Contact_Init(&con);
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Contact_Add(&con);
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			Contact_Show(&con);
			break;
		case EXIT:
			break;
		}
	} while (input);
	return 0;
}