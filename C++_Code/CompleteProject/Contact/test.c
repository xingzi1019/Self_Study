#define _CRT_SECURE_NO_WARNINGS 1
//需求如下
//实现一个静态通讯录:
//人的信息:
//名字+年龄+性别+电话+地址
//其他功能:
//1.存放100个人的信息
//2.增加联系人
//3.删除指定联系人
//4.查找联系人
//5.修改联系人
//6.排序
//7.显示联系人
//一共有3个版本 此为一版本
//1.静态的版本
//2.动态的版本  //动态内存管理
//3.文件的版本
#include "Contact.h"//包含自定义的头文件
void menu()
{
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@                           @@@@@@\n");
	printf("@@@@@@@    1.Add       2.Del      @@@@@@\n");
	printf("@@@@@@@    3.Search    4.Modify   @@@@@@\n");
	printf("@@@@@@@    5.show      6.Sort     @@@@@@\n");
	printf("@@@@@@@           0.Exit          @@@@@@\n");
	printf("@@@@@@@                           @@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}
int main()
{
	int input = 0;
	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误请重新选择\n");
		}
	} while (input);
	return 0;
}

//排序可以按照意愿来 可以是 名字 年龄 电话等   完成
//清空屏幕看着清爽
//一次性多修改几个联系人的信息