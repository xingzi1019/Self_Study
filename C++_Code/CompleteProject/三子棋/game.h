#pragma once
#include <stdio.h>
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisPlayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL],int row,int col);

//人机下棋
void ComputerMove(char board[ROW][COL],int row,int col);

//胜利判断
//玩家获胜'*'
//人机获胜'#'
//平局'Q'
//游戏继续'C'
char IsWin(char board[ROW][COL],int row,int col);