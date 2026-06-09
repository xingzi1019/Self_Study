#include "game.h"

/**
 * 功能：游戏入口函数，负责初始化 EasyX 图形环境并驱动整个游戏主循环
 * @param 无参数
 * @return 整型返回值，正常退出时返回 0
 */
int main()
{
    //初始化随机数种子，用于敌机随机位置
    srand((unsigned int)time(NULL));
    //创建窗口并初始化 EasyX
    initgraph(WIN_WIDTH, WIN_HEIGHT, SHOWCONSOLE);
    setbkcolor(RGB(180, 0, 0));//背景基调使用深红色
    cleardevice();
    //初始化游戏
    ResetGame();
    //启用透明背景文字，减少闪烁
    setbkmode(TRANSPARENT);
    //主循环
    while (g_running)
    {
        g_frameCount++;
        //1.处理输入（方向 + 射击）
        HandlePlayerInput(&g_player);
        ClampPlayerPosition(&g_player);
        PlayerShoot(&g_player, g_bullets, MAX_BULLET_NUM, g_frameCount);
        //2.刷新子弹/敌机位置和状态
        UpdateBullets(g_bullets, MAX_BULLET_NUM);
        SpawnEnemy(g_enemies, MAX_ENEMY_NUM, g_frameCount);
        {
            bool hitPlayer = UpdateEnemies(g_enemies, MAX_ENEMY_NUM, &g_player);
            if (hitPlayer)
            {
                g_player.alive = false;
            }
        }
        //3.碰撞检测（子弹 vs 敌机）
        HandleBulletEnemyCollision(g_bullets, MAX_BULLET_NUM,
            g_enemies, MAX_ENEMY_NUM,
            &g_score);
        //4.绘制
        BeginBatchDraw();
        //背景 & UI
        DrawRedThemeBackground();
        DrawPlayer(&g_player);
        DrawBullets(g_bullets, MAX_BULLET_NUM);
        DrawEnemies(g_enemies, MAX_ENEMY_NUM);
        DrawHUD(g_score, g_player.hp);
        EndBatchDraw();
        //如果玩家死亡，显示结算界面并等待输入
        if (!g_player.alive)
        {
            DrawGameOverScreen(g_score);
            FlushBatchDraw();
            //等待玩家选择重新开始或退出
            while (1)
            {
                if (_kbhit())
                {
                    int ch = _getch();
                    if (ch == 'r' || ch == 'R')
                    {
                        ResetGame();
                        break;
                    }
                    else if (ch == 27)//ESC退出
                    {
                        g_running = false;
                        break;
                    }
                }
                Sleep(10);
            }
        }
        //控制帧率（大约60FPS）
        Sleep(16);
    }
    closegraph();
    return 0;
}

