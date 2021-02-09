//测试用的通讯录-----联系人姓名不能重复

#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("*******************************\n"); 
	printf("******1.add        2.del ******\n");
	printf("******3.search     4.modify****\n");
	printf("******5.show       0.exit  ****\n");
	printf("*******************************\n");
}
int main()
{
	//创建通讯录
	struct Contact con;
	
	//初始化通讯录
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			Contact_Add(&con);
			break;
		case Del:
			Contact_Del(&con);
			break;
		case Search:
			Contact_Search(&con);
			break;
		case Modify:
			Contarct_Modify(&con);
			break;
		case Show:
			Contact_Show(&con);
			break;
		case Exit:
			break;
		default:
			printf("输入错误\n");
		}
		
	} while (input);
	return 0;
}