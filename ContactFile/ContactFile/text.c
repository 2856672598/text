#include"Contact.h"
void menu()
{
	printf("*******************************\n");
	printf("******1.add        2.del ******\n");
	printf("******3.search     4.modify****\n");
	printf("******5.show       6.save  ****\n");
	printf("*******   0.exit    ***********\n");
}
int main()
{
	//创建通讯录
	Contact data;
	//初始化通讯录
	InitContact(&data);
	int input;
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			ContactAdd(&data);
			break;
		case DEL:
			ContactDel(&data);
			break;
		case SEARCH:
			ContactSearch(&data);
			break;
		case MODIFY:
			ContactModify(&data);
			break;
		case SHOW:
			ContactShow(&data);
			break;
		case SAVE:
			ContactSave(&data);
			break;
		case EXIT:
			//退出之前自动保存
			ContactSave(&data);
			//释放掉开辟的动态内存
			Release(&data);
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新选择>\n");
			break;
		}

	} while (input);
	return 0;
}