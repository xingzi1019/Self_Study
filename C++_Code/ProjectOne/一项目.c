#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#define ROW 15
#define COL 15
/*
	负责人:星子
	功能: menuView: 展示选项, 玩家可以在这里选择进入游戏, 进入设置或退出游戏
		while(1){
	 1. 展示选项
			   2. 用户输入
			   3. 根据输入进行对应处理
	 switch     进入游戏: 调用游戏界面函数gameView();break;
				进入设置: 调用void SettingsInterface()
				退出游戏: 调用exit(0);
				团队介绍：调用void ShowTeamInfo();
				排行榜 :  调用void ShowRank()；
		}
	参数: void
	返回值: void
*/
void menuView();
void menuView()
{
	int xz_choice;  // 用于存储用户的选择
	while (1)
	{
		// 无限循环，直到用户选择退出
		// 1. 展示选项
		printf("\n===== 游戏主菜单 =====\n");
		printf("1. 进入游戏\n");
		printf("2. 进入设置\n");
		printf("3. 团队介绍\n");
		printf("4. 排行榜\n");
		printf("5. 退出游戏\n");
		printf("======================\n");
		printf("请输入您的选择 (1-5): ");
		// 2. 用户输入
		scanf("%d", &xz_choice);
		// 清除输入缓冲区，防止错误输入导致的问题
		while (getchar() != '\n');
		// 3. 根据输入进行对应处理
		switch (xz_choice)
		{
		case 1:
			printf("正在进入游戏界面...\n");
			gameView();  // 调用游戏界面函数
			break;
		case 2:
			printf("正在进入设置界面...\n");
			SettingsInterface();  // 调用设置界面函数
			break;
		case 3:
			printf("正在展示团队介绍...\n");
			ShowTeamInfo();  // 调用团队介绍函数  //兄弟们可以留下一些好玩的在团队介绍那里
			break;
		case 4:
			printf("正在展示排行榜...\n");
			ShowRank();  // 调用排行榜函数
			break;
		case 5:
			printf("感谢您的游玩与支持，再见!\n");
			exit(0);  // 退出游戏
			break;
		default:
			printf("无效的选择，请输入1-5之间的数字!\n");
			break;
		}
	}
}