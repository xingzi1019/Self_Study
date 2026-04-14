#pragma once
//引用的头文件-------------------------------------------------------------------------------------------------
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//宏定义------------------------------------------------------------------------------------------------------
#define DEFAULT_SZ 3
#define INC_SZ 2
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

//动态的版本
typedef struct Contact
{
	PeoInfo* data;
	int count;
	int capacity;
}Contact;

//函数声明-----------------------------------------------------------------------------------------------------
//初始化通讯录
void InitContact(Contact* pc);
//删除通讯录
void DestoryContact(Contact* pc);
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
//保存通讯录的信息到文件
void SaveContact(Contact* pc);
//加载文件的信息到通讯录
void LoadContact(Contact* pc);