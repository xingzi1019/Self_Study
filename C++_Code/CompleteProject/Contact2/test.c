#define _CRT_SECURE_NO_WARNINGS 1
//动态文件的版本
#include "Contact2.h"
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
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
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestoryContact(&con);
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