#pragma once

//EasyX 图形库（需要使用 C++ 编译）
#include <graphics.h>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <stdbool.h>

//常量定义----------------------------------------------------------------------------------------------------
//窗口大小
extern const int WIN_WIDTH;
extern const int WIN_HEIGHT;
//玩家属性
extern const int PLAYER_WIDTH;
extern const int PLAYER_HEIGHT;
extern const int PLAYER_SPEED;
//子弹属性
extern const int BULLET_WIDTH;
extern const int BULLET_HEIGHT;
extern const int BULLET_SPEED;
extern const int MAX_BULLET_NUM;
//敌机属性
extern const int ENEMY_WIDTH;
extern const int ENEMY_HEIGHT;
extern const int ENEMY_SPEED;
extern const int MAX_ENEMY_NUM;
//生成间隔（帧）
extern const int ENEMY_SPAWN_INTERVAL;
extern const int BULLET_SHOOT_INTERVAL;

//结构体定义------------------------------------------------------------------------------------------------------

/**
 * 功能：表示玩家飞机的结构体。
 * @member x      飞机左上角 x 坐标
 * @member y      飞机左上角 y 坐标
 * @member width  飞机宽度
 * @member height 飞机高度
 * @member hp     飞机生命值
 * @member alive  飞机是否存活（true 表示存活）
 */
typedef struct Player
{
    int  x;
    int  y;
    int  width;
    int  height;
    int  hp;
    bool alive;
} Player;

/**
 * 功能：表示玩家子弹的结构体。
 * @member x      子弹左上角 x 坐标
 * @member y      子弹左上角 y 坐标
 * @member width  子弹宽度
 * @member height 子弹高度
 * @member active 子弹是否正在飞行（true 表示有效）
 */
typedef struct Bullet
{
    int  x;
    int  y;
    int  width;
    int  height;
    bool active;
} Bullet;

/**
 * 功能：表示敌机的结构体。
 * @member x      敌机左上角 x 坐标
 * @member y      敌机左上角 y 坐标
 * @member width  敌机宽度
 * @member height 敌机高度
 * @member active 敌机是否激活（true 表示在场景中）
 */
typedef struct Enemy
{
    int  x;
    int  y;
    int  width;
    int  height;
    bool active;
} Enemy;

// 全局变量声明（定义在 game.cpp）------------------------------------------------------------------------------------------


/**
 * 功能：全局玩家对象，表示当前玩家的状态。
 */
extern Player g_player;

/**
 * 功能：全局子弹数组，管理所有玩家子弹。
 */
extern Bullet g_bullets[];

/**
 * 功能：全局敌机数组，管理所有敌机。
 */
extern Enemy  g_enemies[];

/**
 * 功能：当前总得分。
 */
extern int    g_score;

/**
 * 功能：当前帧计数（游戏运行帧数累积）。
 */
extern int    g_frameCount;

/**
 * 功能：主循环是否继续运行的标志位。
 */
extern bool   g_running;

/**
 * 功能：上一帧射击时的帧数，用于限制射击频率。
 */
extern int    g_lastShootFrame;

/**
 * 功能：上一架敌机生成时的帧数，用于限制敌机生成频率。
 */
extern int    g_lastEnemySpawn;

// 工具函数声明---------------------------------------------------------------------------------------------------------

/**
 * 功能：在指定矩形区域内绘制带圆角的填充矩形，用作红色主题元素。
 * @param left   矩形左边界 x 坐标
 * @param top    矩形上边界 y 坐标
 * @param right  矩形右边界 x 坐标
 * @param bottom 矩形下边界 y 坐标
 * @param color  填充颜色（RGB）
 * @return 无返回值
 * 负责人:吴思涵
 */
void DrawRoundedRect(int left, int top, int right, int bottom, COLORREF color);

/**
 * 功能：判断两个轴对齐矩形是否发生碰撞（相交）。
 * @param ax 第一个矩形左上角 x 坐标
 * @param ay 第一个矩形左上角 y 坐标
 * @param aw 第一个矩形宽度
 * @param ah 第一个矩形高度
 * @param bx 第二个矩形左上角 x 坐标
 * @param by 第二个矩形左上角 y 坐标
 * @param bw 第二个矩形宽度
 * @param bh 第二个矩形高度
 * @return 如果发生碰撞返回 true，否则返回 false
 * 负责人:
 */
bool CheckRectCollision(int ax, int ay, int aw, int ah,
    int bx, int by, int bw, int bh);

// 初始化与重置函数声明------------------------------------------------------------------------------------------------------

/**
 * 功能：初始化玩家数据，包括位置、大小、生命值等。
 * @param player 指向玩家结构体的指针，函数会修改该结构体的成员。
 * @return 无返回值
 * 负责人:
 */
void InitPlayer(Player* player);

/**
 * 功能：初始化所有子弹为未激活状态。
 * @param bullets 子弹数组指针
 * @param size    数组长度（最大子弹数量）
 * @return 无返回值
 * 负责人:
 */
void InitBullets(Bullet* bullets, int size);

/**
 * 功能：初始化所有敌机为未激活状态。
 * @param enemies 敌机数组指针
 * @param size    数组长度（最大敌机数量）
 * @return 无返回值
 * 负责人:
 */
void InitEnemies(Enemy* enemies, int size);

/**
 * 功能：重置整个游戏状态（开始或重新开始时调用）。
 * @param 无参数
 * @return 无返回值
 * 负责人:
 */
void ResetGame();

// 玩家操作与移动函数声明------------------------------------------------------------------------------------------------

/**
 * 功能：根据键盘按键控制玩家移动（WASD 或 方向键）。
 * @param player 指向玩家结构体的指针，函数会根据输入更新其坐标。
 * @return 无返回值
 * 负责人:吴思涵
 */
void HandlePlayerInput(Player* player);

/**
 * 功能：限制玩家位置在窗口范围内，防止飞出屏幕。
 * @param player 指向玩家结构体的指针，函数会调整坐标使其不越界。
 * @return 无返回值
 * 负责人:
 */
void ClampPlayerPosition(Player* player);

// 子弹与敌机生成 / 更新函数声明----------------------------------------------------------------------------------------

/**
 * 功能：玩家发射一颗子弹（如果有空闲子弹槽位且达到射击间隔）。
 * @param player   指向玩家结构体的指针，用于确定子弹生成位置。
 * @param bullets  子弹数组指针。
 * @param size     数组长度（最大子弹数量）。
 * @param frameNow 当前帧数，用于判断射击间隔。
 * @return 无返回值
 * 负责人:
 */
void PlayerShoot(Player* player, Bullet* bullets, int size, int frameNow);

/**
 * 功能：更新所有子弹的位置与状态（向上移动，离开屏幕后失效）。
 * @param bullets 子弹数组指针。
 * @param size    数组长度（最大子弹数量）。
 * @return 无返回值
 * 负责人:
 */
void UpdateBullets(Bullet* bullets, int size);

/**
 * 功能：尝试生成一架新的敌机（达到生成间隔且有空闲敌机槽位时）。
 * @param enemies   敌机数组指针。
 * @param size      数组长度（最大敌机数量）。
 * @param frameNow  当前帧数，用于判断生成间隔。
 * @return 无返回值
 * 负责人:
 */
void SpawnEnemy(Enemy* enemies, int size, int frameNow);

/**
 * 功能：更新所有敌机的位置与状态（向下移动，离开屏幕后失效）。
 * @param enemies 敌机数组指针。
 * @param size    数组长度（最大敌机数量）。
 * @param player  指向玩家结构体的指针，用于判断是否撞到玩家。
 * @return 如果在本帧中玩家被撞击导致死亡，返回 true；否则返回 false。
 * 负责人:
 */
bool UpdateEnemies(Enemy* enemies, int size, Player* player);

// 碰撞检测与分数函数声明-----------------------------------------------------------------------------------------------------

/**
 * 功能：检测玩家子弹与敌机之间的碰撞，并更新得分。
 * @param bullets 子弹数组指针。
 * @param bSize   子弹数组长度。
 * @param enemies 敌机数组指针。
 * @param eSize   敌机数组长度。
 * @param score   指向分数变量的指针，命中敌机时会增加分数。
 * @return 无返回值
 * 负责人:
 */
void HandleBulletEnemyCollision(Bullet* bullets, int bSize,
    Enemy* enemies, int eSize,
    int* score);

// 绘制相关函数声明---------------------------------------------------------------------------------------------------------

/**
 * 功能：绘制 “十五五” 相关的红色主题背景，包括大面积红色、星星、口号等。
 * @param 无参数
 * @return 无返回值
 * 负责人:吴思涵
 */
void DrawRedThemeBackground();

/**
 * 功能：绘制玩家飞机，采用金黄色机身和红色尾焰，突出红色主题。
 * @param player 指向玩家结构体的指针，函数根据其坐标和尺寸绘制飞机。
 * @return 无返回值
 * 负责人:吴思涵
 */
void DrawPlayer(const Player* player);

/**
 * 功能：绘制所有激活的子弹，统一使用亮黄色或金色，象征希望的火种。
 * @param bullets 子弹数组指针。
 * @param size    数组长度（最大子弹数量）。
 * @return 无返回值
 * 负责人:吴思涵
 */
void DrawBullets(const Bullet* bullets, int size);

/**
 * 功能：绘制所有激活的敌机，采用深红色或灰红色方块，象征需要“攻克”的困难。
 * @param enemies 敌机数组指针。
 * @param size    数组长度（最大敌机数量）。
 * @return 无返回值
 * 负责人:吴思涵
 */
void DrawEnemies(const Enemy* enemies, int size);

/**
 * 功能：绘制 HUD（分数、生命值、标题标语等 UI 文本）。
 * @param score 当前分数
 * @param hp    当前生命值
 * @return 无返回值
 * 负责人:吴思涵
 */
void DrawHUD(int score, int hp);

/**
 * 功能：在游戏结束时绘制“再接再厉，奋进十四五”结算界面，并给出重新开始提示。
 * @param score 本局最终得分
 * @return 无返回值
 * 负责人:吴思涵
 */
void DrawGameOverScreen(int score);

