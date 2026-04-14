//简易的贪吃蛇
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

// 方向定义
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

// 蛇的结构体
typedef struct {
    int x;
    int y;
} Snake;

// 全局变量
Snake snake[100];  // 蛇的身体
int length;        // 蛇的长度
int direction;     // 当前方向
int next_dir;      // 下一个方向
int food_x, food_y;// 食物位置
int score;         // 分数
int max_x, max_y;  // 游戏区域大小（宽、高）
int game_over;     // 游戏结束标志

// 设置控制台光标位置
void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// 隐藏控制台光标
void hide_cursor() 
{
    CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

// 设置控制台窗口大小
void set_window_size(int width, int height) 
{
    SMALL_RECT rect = { 0, 0, width - 1, height - 1 };
    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &rect);
    COORD coord = { width, height };
    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// 初始化游戏
void init_game() 
{
    // 设置窗口大小（宽40，高20）
    max_x = 40;
    max_y = 20;
    set_window_size(max_x, max_y + 2);  // +2用于显示分数
    hide_cursor();

    // 初始化蛇
    length = 3;
    snake[0].x = max_x / 2;
    snake[0].y = max_y / 2;
    snake[1].x = snake[0].x - 1;
    snake[1].y = snake[0].y;
    snake[2].x = snake[0].x - 2;
    snake[2].y = snake[0].y;

    direction = RIGHT;
    next_dir = RIGHT;
    score = 0;
    game_over = 0;

    // 生成第一个食物
    srand(time(NULL));
    food_x = rand() % (max_x - 2) + 1;
    food_y = rand() % (max_y - 2) + 1;
}

// 绘制游戏界面
void draw_game() {
    system("cls");  // 清屏

    // 绘制边框
    for (int i = 0; i < max_x; i++) 
    {
        gotoxy(i, 0);
        printf("#");
        gotoxy(i, max_y - 1);
        printf("#");
    }
    for (int i = 0; i < max_y; i++) 
    {
        gotoxy(0, i);
        printf("#");
        gotoxy(max_x - 1, i);
        printf("#");
    }

    // 绘制蛇
    for (int i = 0; i < length; i++) 
    {
        gotoxy(snake[i].x, snake[i].y);
        if (i == 0) {
            printf("O");  // 蛇头
        }
        else {
            printf("o");  // 蛇身
        }
    }

    // 绘制食物
    gotoxy(food_x, food_y);
    printf("*");

    // 显示分数和操作说明
    gotoxy(0, max_y);
    printf("Score: %d | 方向键控制 | Q退出", score);
}

// 处理用户输入（使用conio.h的非阻塞输入）
void handle_input() 
{
    if (_kbhit()) 
    {  // 检测是否有按键输入
        int key = _getch();
        // 方向键的ASCII码需要二次读取
        if (key == 224) 
        {
            key = _getch();
            switch (key) 
            {
            case 72:  // 上
                if (direction != DOWN)
                    next_dir = UP;
                break;
            case 80:  // 下
                if (direction != UP)
                    next_dir = DOWN;
                break;
            case 75:  // 左
                if (direction != RIGHT)
                    next_dir = LEFT;
                break;
            case 77:  // 右
                if (direction != LEFT)
                    next_dir = RIGHT;
                break;
            }
        }
        else if (key == 'q' || key == 'Q') 
        {
            game_over = 1;
        }
    }
}

// 更新游戏状态
void update_game() 
{
    direction = next_dir;  // 更新方向

    // 保存旧位置，用于移动身体
    int prev_x = snake[0].x;
    int prev_y = snake[0].y;
    int temp_x, temp_y;

    // 移动蛇头
    switch (direction) 
    {
    case UP:
        snake[0].y--;
        break;
    case DOWN:
        snake[0].y++;
        break;
    case LEFT:
        snake[0].x--;
        break;
    case RIGHT:
        snake[0].x++;
        break;
    }

    // 移动蛇身
    for (int i = 1; i < length; i++) 
    {
        temp_x = snake[i].x;
        temp_y = snake[i].y;
        snake[i].x = prev_x;
        snake[i].y = prev_y;
        prev_x = temp_x;
        prev_y = temp_y;
    }

    // 检测是否吃到食物
    if (snake[0].x == food_x && snake[0].y == food_y) 
    {
        length++;
        score += 10;

        // 生成新食物（避免出现在蛇身上）
        int on_snake;
        do {
            on_snake = 0;
            food_x = rand() % (max_x - 2) + 1;
            food_y = rand() % (max_y - 2) + 1;

            for (int i = 0; i < length; i++) 
            {
                if (snake[i].x == food_x && snake[i].y == food_y) 
                {
                    on_snake = 1;
                    break;
                }
            }
        } while (on_snake);
    }

    // 检测是否撞墙
    if (snake[0].x <= 0 || snake[0].x >= max_x - 1 ||
        snake[0].y <= 0 || snake[0].y >= max_y - 1) 
    {
        game_over = 1;
    }

    // 检测是否撞到自己
    for (int i = 1; i < length; i++) 
    {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) 
        {
            game_over = 1;
            break;
        }
    }
}

// 游戏结束界面
void game_over_screen() 
{
    system("cls");
    gotoxy(max_x / 2 - 5, max_y / 2);
    printf("Game Over!");
    gotoxy(max_x / 2 - 8, max_y / 2 + 1);
    printf("Final Score: %d", score);
    gotoxy(max_x / 2 - 10, max_y / 2 + 2);
    printf("Press any key to exit");
    _getch();  // 等待按键
}

// 主函数
int main() 
{
    init_game();

    // 游戏主循环
    while (!game_over) 
    {
        draw_game();
        handle_input();
        update_game();
        Sleep(100);  // 控制速度（毫秒）
    }

    game_over_screen();
    return 0;
}
