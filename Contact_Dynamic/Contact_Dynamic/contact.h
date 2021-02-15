#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define SZ 1
//#define INCREASE 2
//#define MAX_NAME 10
//#define MAX_SEX 5
//#define MAX_TETL 12
//#define MAX_ADDR 20
//#define MAX_AGE 4
enum
{
	SZ=1,
	INCREASE=2,
	MAX_NAME=10,
	MAX_SEX =5,
	MAX_TETL =12,
	MAX_ADDR =20,
	MAX_AGE =4
};
enum menu
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tetl[MAX_TETL];
	char addr[MAX_ADDR];
	int age;
}PeoInfo;
typedef struct Contact
{
	PeoInfo *data;
	int size;
	int capacity;
}Contact;

//添加
void Contact_Add(Contact* ps);
//打印
void Contact_Show(Contact* ps);
//初始化
void Contact_Init(Contact* ps);
//删除
void Contact_Del(Contact* ps);
//查找
void Contact_Search(Contact* ps);
//修改
void Contact_Modify(Contact* ps);
//开辟的动态内存释放
void Release(Contact* ps);
int Check(Contact* ps);