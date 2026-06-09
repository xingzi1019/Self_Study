#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include <stdio.h>
void menu()//打印菜单
{
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@             @@@@@@@@@@@\n");
	printf("@@@@@@@@@@@    1.开始   @@@@@@@@@@@\n");
	printf("@@@@@@@@@@@    0.退出   @@@@@@@@@@@\n");
	printf("@@@@@@@@@@@             @@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘的函数
	InitBoard(board, ROW, COL);
	DisPlayBoard(board, ROW, COL);
	//下棋
	while (1)//0为假非0为真
	{
		PlayerMove(board, ROW, COL);
		//胜利判断
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisPlayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		//胜利判断
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisPlayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("人机获胜\n");
	}
	else
	{
		printf("平局\n");
	}
	DisPlayBoard(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请输入选择（1或者0）:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n开始三子棋游戏\n");
			game();
			break;
		case 0:
			printf("\n退出游戏\n");
			break;
		default:
			printf("\n选择错误\n请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}