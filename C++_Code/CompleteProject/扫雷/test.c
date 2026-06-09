#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"
//#include <row.idl>
void menu()
{
	printf("************************************\n");
	printf("***********                  *******\n");
	printf("***********       1.play     *******\n");
	printf("***********       0.exit     *******\n");
	printf("***********                  *******\n");
	printf("************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出雷的信息
	//初始化数组的内容为指定的内容
	//mine数组在没有布置雷的时候都是'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show在没有排查雷的时候都是'*'
	InitBoard(show, ROWS, COLS, '*');

	//设置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	DisplayBoard(mine, ROW, COL);//为了方便测试搞的
	//排查雷
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入选项(1/0):_");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			system("cls");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n请重新输入");
			break;
		}
	} while (input);
	return 0;
}
//后续补一下功能 优化一下用户体验
//一下子展开一大片 控制台实现扫雷 
//有一个错误 读取雷的数量不对