#include "game.h"

//常量定义（具体数值放在 game.cpp）-------------------------------------------------------------------------------------
//窗口大小
const int WIN_WIDTH = 480;
const int WIN_HEIGHT = 720;
//玩家属性
const int PLAYER_WIDTH = 40;
const int PLAYER_HEIGHT = 40;
const int PLAYER_SPEED = 8;
//子弹属性
const int BULLET_WIDTH = 6;
const int BULLET_HEIGHT = 16;
const int BULLET_SPEED = 12;
const int MAX_BULLET_NUM = 128;
//敌机属性
const int ENEMY_WIDTH = 36;
const int ENEMY_HEIGHT = 36;
const int ENEMY_SPEED = 4;
const int MAX_ENEMY_NUM = 64;
//生成间隔（帧）
const int ENEMY_SPAWN_INTERVAL = 35;
const int BULLET_SHOOT_INTERVAL = 8;

//全局变量定义-------------------------------------------------------------------------------------------------------

Player g_player;                         //玩家
Bullet g_bullets[MAX_BULLET_NUM];        //玩家子弹数组
Enemy  g_enemies[MAX_ENEMY_NUM];         //敌机数组
int    g_score = 0;                      //当前得分
int    g_frameCount = 0;                 //帧计数
bool   g_running = true;                 //游戏主循环是否继续
int    g_lastShootFrame = 0;             //上一次射击的帧数
int    g_lastEnemySpawn = 0;             //上一次生成敌机的帧数

//工具函数实现-------------------------------------------------------------------------------------------------------

void DrawRoundedRect(int left, int top, int right, int bottom, COLORREF color)
{
    int radius = 8;
    setfillcolor(color);
    solidroundrect(left, top, right, bottom, radius, radius);
}

bool CheckRectCollision(int ax, int ay, int aw, int ah,
    int bx, int by, int bw, int bh)
{
    // 分离轴：如果在某个轴上不重叠，则不碰撞
    if (ax + aw < bx) return false;
    if (bx + bw < ax) return false;
    if (ay + ah < by) return false;
    if (by + bh < ay) return false;
    return true;
}

// 初始化与重置实现-------------------------------------------------------------------------------------------------------

void InitPlayer(Player* player)
{
    if (!player) return;
    player->width = PLAYER_WIDTH;
    player->height = PLAYER_HEIGHT;
    player->x = WIN_WIDTH / 2 - player->width / 2;
    player->y = WIN_HEIGHT - player->height - 40;
    player->hp = 3;
    player->alive = true;
}

void InitBullets(Bullet* bullets, int size)
{
    for (int i = 0; i < size; ++i)
    {
        bullets[i].active = false;
        bullets[i].width = BULLET_WIDTH;
        bullets[i].height = BULLET_HEIGHT;
        bullets[i].x = 0;
        bullets[i].y = 0;
    }
}

void InitEnemies(Enemy* enemies, int size)
{
    for (int i = 0; i < size; ++i)
    {
        enemies[i].active = false;
        enemies[i].width = ENEMY_WIDTH;
        enemies[i].height = ENEMY_HEIGHT;
        enemies[i].x = 0;
        enemies[i].y = 0;
    }
}

void ResetGame()
{
    InitPlayer(&g_player);
    InitBullets(g_bullets, MAX_BULLET_NUM);
    InitEnemies(g_enemies, MAX_ENEMY_NUM);
    g_score = 0;
    g_frameCount = 0;
    g_lastShootFrame = 0;
    g_lastEnemySpawn = 0;
    g_running = true;
}

//玩家输入与移动实现------------------------------------------------------------------------------------------------------

void HandlePlayerInput(Player* player)
{
    if (!player || !player->alive) return;

    // 使用 GetAsyncKeyState 获取键盘状态
    if (GetAsyncKeyState(VK_LEFT) & 0x8000 || GetAsyncKeyState('A') & 0x8000)
    {
        player->x -= PLAYER_SPEED;
    }
    if (GetAsyncKeyState(VK_RIGHT) & 0x8000 || GetAsyncKeyState('D') & 0x8000)
    {
        player->x += PLAYER_SPEED;
    }
    if (GetAsyncKeyState(VK_UP) & 0x8000 || GetAsyncKeyState('W') & 0x8000)
    {
        player->y -= PLAYER_SPEED;
    }
    if (GetAsyncKeyState(VK_DOWN) & 0x8000 || GetAsyncKeyState('S') & 0x8000)
    {
        player->y += PLAYER_SPEED;
    }
}

void ClampPlayerPosition(Player* player)
{
    if (!player) return;

    if (player->x < 0) player->x = 0;
    if (player->y < 0) player->y = 0;
    if (player->x + player->width > WIN_WIDTH)
        player->x = WIN_WIDTH - player->width;
    if (player->y + player->height > WIN_HEIGHT)
        player->y = WIN_HEIGHT - player->height;
}

// 子弹与敌机生成 / 更新实现------------------------------------------------------------------------------------------------

void PlayerShoot(Player* player, Bullet* bullets, int size, int frameNow)
{
    if (!player || !player->alive) return;
    // 按下空格发射，且满足射击间隔
    if ((GetAsyncKeyState(VK_SPACE) & 0x8000) &&
        frameNow - g_lastShootFrame >= BULLET_SHOOT_INTERVAL)
    {
        for (int i = 0; i < size; ++i)
        {
            if (!bullets[i].active)
            {
                bullets[i].active = true;
                bullets[i].x = player->x + player->width / 2 - bullets[i].width / 2;
                bullets[i].y = player->y - bullets[i].height;
                g_lastShootFrame = frameNow;
                break;
            }
        }
    }
}

void UpdateBullets(Bullet* bullets, int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (!bullets[i].active) continue;
        bullets[i].y -= BULLET_SPEED;
        if (bullets[i].y + bullets[i].height < 0)
        {
            bullets[i].active = false;
        }
    }
}

void SpawnEnemy(Enemy* enemies, int size, int frameNow)
{
    if (frameNow - g_lastEnemySpawn < ENEMY_SPAWN_INTERVAL)
        return;
    for (int i = 0; i < size; ++i)
    {
        if (!enemies[i].active)
        {
            enemies[i].active = true;
            enemies[i].x = rand() % (WIN_WIDTH - enemies[i].width);
            enemies[i].y = -enemies[i].height;
            g_lastEnemySpawn = frameNow;
            break;
        }
    }
}

bool UpdateEnemies(Enemy* enemies, int size, Player* player)
{
    bool playerHit = false;
    for (int i = 0; i < size; ++i)
    {
        if (!enemies[i].active) 
            continue;
        enemies[i].y += ENEMY_SPEED;
        if (enemies[i].y > WIN_HEIGHT)
        {
            enemies[i].active = false;
            continue;
        }
        // 与玩家碰撞检测
        if (player && player->alive &&
            CheckRectCollision(enemies[i].x, enemies[i].y,
                enemies[i].width, enemies[i].height,
                player->x, player->y,
                player->width, player->height))
        {
            enemies[i].active = false;
            player->hp--;
            if (player->hp <= 0)
            {
                playerHit = true;
            }
        }
    }
    return playerHit;
}

// 碰撞检测与分数实现-----------------------------------------------------------------------------------------------------

void HandleBulletEnemyCollision(Bullet* bullets, int bSize,
    Enemy* enemies, int eSize,
    int* score)
{
    if (!score) return;

    for (int i = 0; i < bSize; ++i)
    {
        if (!bullets[i].active) continue;
        for (int j = 0; j < eSize; ++j)
        {
            if (!enemies[j].active) continue;
            if (CheckRectCollision(bullets[i].x, bullets[i].y,
                bullets[i].width, bullets[i].height,
                enemies[j].x, enemies[j].y,
                enemies[j].width, enemies[j].height))
            {
                bullets[i].active = false;
                enemies[j].active = false;
                *score += 10;
                break;
            }
        }
    }
}

// 绘制相关实现-----------------------------------------------------------------------------------------------------------

void DrawRedThemeBackground()
{
    // 绘制背景渐变红
    for (int i = 0; i < WIN_HEIGHT; ++i)
    {
        int r = 180 + (i * 75 / WIN_HEIGHT); // 从深红到亮红
        int g = 0;
        int b = 0;
        setlinecolor(RGB(r, g, b));
        line(0, i, WIN_WIDTH, i);
    }
    // 绘制左上角五星（象征国旗与奋斗目标）
    setfillcolor(RGB(255, 215, 0));
    solidcircle(40, 40, 15);
    // 右上角绘制几颗小星
    solidcircle(WIN_WIDTH - 40, 40, 8);
    solidcircle(WIN_WIDTH - 70, 65, 6);
    solidcircle(WIN_WIDTH - 20, 80, 5);
    // 绘制底部横幅，写上十五五相关标语
    RECT sloganRect = { 0, WIN_HEIGHT - 80, WIN_WIDTH, WIN_HEIGHT };
    setfillcolor(RGB(160, 0, 0));
    solidrectangle(sloganRect.left, sloganRect.top, sloganRect.right, sloganRect.bottom);
    settextcolor(WHITE);
    settextstyle(22, 0, L"黑体");
    drawtext(L"奋进新征程  建功“十五五”  红色空战演练", &sloganRect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}

void DrawPlayer(const Player* player)
{
    if (!player || !player->alive) return;

    // 机身主体（金黄色）
    DrawRoundedRect(player->x, player->y,
        player->x + player->width,
        player->y + player->height,
        RGB(255, 215, 0));

    // 机头（红色）
    setfillcolor(RGB(220, 20, 60));
    POINT nose[3] =
    {
        { player->x,                      player->y + player->height },
        { player->x + player->width,     player->y + player->height },
        { player->x + player->width / 2, player->y - player->height / 2 }
    };
    solidpolygon(nose, 3);

    // 两翼（更深的红色）
    setfillcolor(RGB(150, 0, 0));
    solidrectangle(player->x - 10, player->y + 10,
        player->x + 10, player->y + player->height - 5);
    solidrectangle(player->x + player->width - 10, player->y + 10,
        player->x + player->width + 10, player->y + player->height - 5);

    // 尾焰（橙黄色，象征前进的动力）
    setfillcolor(RGB(255, 140, 0));
    solidellipse(player->x + player->width / 4,
        player->y + player->height,
        player->x + player->width * 3 / 4,
        player->y + player->height + 20);
}

void DrawBullets(const Bullet* bullets, int size)
{
    setfillcolor(RGB(255, 255, 0));
    for (int i = 0; i < size; ++i)
    {
        if (!bullets[i].active) continue;
        solidrectangle(bullets[i].x, bullets[i].y,
            bullets[i].x + bullets[i].width,
            bullets[i].y + bullets[i].height);
    }
}

void DrawEnemies(const Enemy* enemies, int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (!enemies[i].active) continue;

        // 敌机为深红色方块，边缘略带黑色描边
        setlinecolor(BLACK);
        setfillcolor(RGB(120, 0, 0));
        solidrectangle(enemies[i].x, enemies[i].y,
            enemies[i].x + enemies[i].width,
            enemies[i].y + enemies[i].height);
    }
}

void DrawHUD(int score, int hp)
{
    // 分数显示
    wchar_t buf[64] = { 0 };
    settextcolor(WHITE);
    settextstyle(20, 0, L"微软雅黑");
    swprintf_s(buf, L"分数：%d", score);
    outtextxy(10, 10, buf);
    // 生命值显示
    swprintf_s(buf, L"生命：%d", hp);
    outtextxy(10, 35, buf);
    // 右上角显示操作提示
    swprintf_s(buf, L"[WASD/方向键] 移动  [Space] 开火  [R] 重新开始  [ESC] 退出");
    outtextxy(10, 60, buf);
}

void DrawGameOverScreen(int score)
{
    // 半透明遮罩（这里直接用纯黑覆盖）
    setbkcolor(RGB(0, 0, 0));
    setfillcolor(RGB(0, 0, 0));
    setlinecolor(RGB(0, 0, 0));
    solidrectangle(0, 0, WIN_WIDTH, WIN_HEIGHT);
    // 居中显示结束文字
    settextcolor(RGB(255, 215, 0));
    settextstyle(32, 0, L"黑体");
    RECT r1 = { 0, WIN_HEIGHT / 2 - 120, WIN_WIDTH, WIN_HEIGHT / 2 - 40 };
    drawtext(L"再接再厉  奋进“十四五”", &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    settextcolor(WHITE);
    settextstyle(24, 0, L"微软雅黑");
    wchar_t buf[64] = { 0 };
    RECT r2 = { 0, WIN_HEIGHT / 2 - 30, WIN_WIDTH, WIN_HEIGHT / 2 + 30 };
    swprintf_s(buf, L"本局得分：%d", score);
    drawtext(buf, &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    RECT r3 = { 0, WIN_HEIGHT / 2 + 40, WIN_WIDTH, WIN_HEIGHT / 2 + 120 };
    drawtext(L"按 [R] 键重启红色空战  按 [ESC] 退出游戏", &r3,
        DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}

