#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//									保留第一版本
// 
//void DisPlayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i=0;i<row;i++)
//	{
//		//打印数据
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//打印分割数据
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}
//								第二版本
void DisPlayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割数据
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
			//printf("---|---|---\n");
		}
	}
}
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家请输入：>\n");
	while (1)
	{
		printf("请输入坐标：>\n");
		scanf("%d %d", &x, &y);
		//判断坐标输入是否合理
		//判断坐标是否在有效范围内
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用\n请重新输入\n");
				break;
			}
		}
		else
		{
			printf("坐标超出范围\n请重新输入\n");
			break;
		}
	}
}
//人机下棋
//难度一：随机空位下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
	int x = 0;
	int y = 0;
	
	while (1)
	{
		x = rand() % row;//0-2
		y = rand() % col;//0-2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}
//胜利判断  版本一:全部判断 且只适用于3x3的棋盘
//满了返回1 不满返回0
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
			//在这里就return 有一个落子就直接判断了
		}
	}
	return 1;//因此就在这里返回
}
char IsWin(char board[ROW][COL], int row, int col)
{
	//先判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//再判断列
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//再对角线				'\'
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	//                      '/'
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	//若上述程序并未返回
	//需要判断游戏要继续还是判断平局
	//判断棋盘是否满了
	if (IsFull(board,row,col))
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}