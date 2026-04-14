#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;//'*'
		}
	}
}

//要展示的棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------扫雷-------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------扫雷-------\n");
}

//埋雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//计算雷
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	board[x - 1][y] + board[x - 1][y - 1] + board[x - 1][y + 1] + board[x][y - 1] + board[x][y] + board[x][y + 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}

//扫雷过程的实现
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//找到非雷的个数
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:_");
		scanf("%d %d", &x, &y);
		system("cls");
		//判断输入的坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已被排查过\n不可重复排查\n");
			}
			else
			{
				if (mine[x][y] == '1')//是雷
				{
					printf("很遗憾，你踩到了地雷，游戏结束\n");
					DisplayBoard(mine, ROW, COL);
					Sleep(2000);
					int n = 0;
					printf("输入2返回主菜单:\n");
					scanf("%d", &n);
						if (n == 2)
						{
							break;
						}
						else
						{
							printf("无效的输入\n请重新输入\n");//这里有问题后期记得要来修改
						}
				}
				else//不是雷
				{
					//需要统计坐标附近有几个雷
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//转换成数字字符
					DisplayBoard(show, ROW, COL);
					win++;
				}
			}
		}
		else
		{
			printf("输入不在范围内 请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("游戏胜利 不愧是你\n");
		DisplayBoard(mine, ROW, COL);
	}
}
