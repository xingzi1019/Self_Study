#pragma once
//引用的头文件-------------------------------------------------------------------------------------------------
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//宏定义------------------------------------------------------------------------------------------------------
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//类型的声明---------------------------------------------------------------------------------------------------
typedef struct PeoInfo//人的信息
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact//通讯录
{
	PeoInfo data[MAX];//存放人的信息
	int count;//记录当前通讯录中人的个数
}Contact;

//函数声明-----------------------------------------------------------------------------------------------------
//初始化通讯录
void InitContact(Contact* pc);
//增加联系人的通讯录
void AddContact(Contact* pc);
//显示通讯录的信息
void ShowContact(const Contact* pc);
//删除指定联系人
void DelContact(Contact* pc);
//查找指定联系人
void SearchContact(const Contact* pc);
//修改指定联系人
void ModifyContact(Contact* pc);
//排序通讯录的内容
void SortContact(Contact* pc);