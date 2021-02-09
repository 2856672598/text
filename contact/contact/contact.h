#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//通讯录容量
#define MAX 1000

//通讯录内容的大小
#define MAX_NAME 20
#define MAX_SEX 4
#define MAX_TETL 12
#define MAX_ADDR  20


//存放的数据
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tetl[MAX_TETL];
	char addr[MAX_ADDR];
	char age;
};
//
struct Contact
{
	struct PeoInfo data[MAX];//存放1000条信息
	int size;//记录已经有的个数
};
enum menu
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show
};
//初始化
void InitContact(struct Contact* ps);
//添加
void Contact_Add(struct Contact* ps);
//打印
void Contact_Show(const struct Contact* ps);
//删除
void Contact_Del( struct Contact* ps);

//搜索
void Contact_Search(const struct Contact* ps);

//修改
void Contarct_Modify(struct Contact* ps);