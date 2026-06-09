#define  _CRT_SECURE_NO_WARNINGS
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// 定义棋盘大小和相关参数
#define BOARD_SIZE 15          
#define CELL_SIZE 40           
#define MARGIN 40              
#define WINDOW_WIDTH (MARGIN * 2 + CELL_SIZE * (BOARD_SIZE - 1))
#define WINDOW_HEIGHT (MARGIN * 2 + CELL_SIZE * (BOARD_SIZE - 1))

// 棋子类型
typedef enum {
    EMPTY,
    BLACK,
    WHITE
} ChessType;

// 评分权重
#define SCORE_FIVE 100000     
#define SCORE_FOUR 10000      
#define SCORE_THREE 1000      
#define SCORE_TWO 100         
#define SCORE_ONE 10          

// 棋盘数组
ChessType board[BOARD_SIZE][BOARD_SIZE] = { EMPTY };

// 函数声明
void initGame();
void drawBoard();
void drawChessman(int x, int y, ChessType type);
int getRow(int y);
int getCol(int x);
BOOL isWin(int row, int col, ChessType type);
void showWinner(ChessType winner);
void computerMove();
int evaluatePosition(int row, int col, ChessType type);
int countConsecutive(int row, int col, int dr, int dc, ChessType type, BOOL* blocked);

int main() {
    // 检查EasyX是否可用
    if (initgraph(WINDOW_WIDTH, WINDOW_HEIGHT) == NULL) {
        MessageBox(NULL, _T("初始化图形环境失败！请确保已安装EasyX库。"), _T("错误"), MB_ICONERROR);
        return 1;
    }

    initGame();

    ChessType currentPlayer = BLACK;
    MOUSEMSG m;
    BOOL gameOver = FALSE;

    while (TRUE) {
        // 玩家回合
        if (currentPlayer == BLACK && !gameOver) {
            if (MouseHit()) {
                m = GetMouseMsg();

                if (m.uMsg == WM_LBUTTONDOWN) {
                    int row = getRow(m.y);
                    int col = getCol(m.x);

                    if (row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE &&
                        board[row][col] == EMPTY) {
                        board[row][col] = currentPlayer;
                        drawChessman(col, row, currentPlayer);

                        if (isWin(row, col, currentPlayer)) {
                            showWinner(currentPlayer);
                            gameOver = TRUE;
                        }
                        else {
                            currentPlayer = WHITE;
                        }
                    }
                }
            }
        }
        // 电脑回合
        else if (currentPlayer == WHITE && !gameOver) {
            computerMove();

            // 找到电脑最后落子的位置
            int lastRow = -1, lastCol = -1;
            for (int i = 0; i < BOARD_SIZE && lastRow == -1; i++) {
                for (int j = 0; j < BOARD_SIZE; j++) {
                    if (board[i][j] == WHITE) {
                        lastRow = i;
                        lastCol = j;
                        break;
                    }
                }
            }

            if (lastRow != -1 && isWin(lastRow, lastCol, WHITE)) {
                showWinner(WHITE);
                gameOver = TRUE;
            }
            else {
                currentPlayer = BLACK;
            }
        }

        // 按ESC键退出游戏
        if (_kbhit()) {
            int key = _getch();
            if (key == 27) {
                break;
            }
        }

        // 短暂延时，降低CPU占用
        Sleep(10);
    }

    closegraph();
    return 0;
}

void initGame() {
    SetWindowText(GetHWnd(), _T("五子棋 - 人机对战"));
    setbkcolor(RGB(245, 222, 179));
    cleardevice();

    // 初始化棋盘
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = EMPTY;
        }
    }

    srand((unsigned int)time(NULL));
    drawBoard();
}

void drawBoard() {
    setlinecolor(RGB(139, 69, 19));
    setlinestyle(PS_SOLID, 2);

    // 绘制横线和竖线
    for (int i = 0; i < BOARD_SIZE; i++) {
        line(MARGIN, MARGIN + i * CELL_SIZE,
            MARGIN + (BOARD_SIZE - 1) * CELL_SIZE, MARGIN + i * CELL_SIZE);
        line(MARGIN + i * CELL_SIZE, MARGIN,
            MARGIN + i * CELL_SIZE, MARGIN + (BOARD_SIZE - 1) * CELL_SIZE);
    }

    // 绘制天元和星位
    setfillcolor(RGB(139, 69, 19));
    solidcircle(MARGIN + 7 * CELL_SIZE, MARGIN + 7 * CELL_SIZE, 5);
    solidcircle(MARGIN + 3 * CELL_SIZE, MARGIN + 3 * CELL_SIZE, 5);
    solidcircle(MARGIN + 3 * CELL_SIZE, MARGIN + 11 * CELL_SIZE, 5);
    solidcircle(MARGIN + 11 * CELL_SIZE, MARGIN + 3 * CELL_SIZE, 5);
    solidcircle(MARGIN + 11 * CELL_SIZE, MARGIN + 11 * CELL_SIZE, 5);
}

void drawChessman(int x, int y, ChessType type) {
    int centerX = MARGIN + x * CELL_SIZE;
    int centerY = MARGIN + y * CELL_SIZE;

    if (type == BLACK) {
        setfillcolor(BLACK);
        solidcircle(centerX, centerY, CELL_SIZE / 2 - 2);
    }
    else {
        setfillcolor(WHITE);
        solidcircle(centerX, centerY, CELL_SIZE / 2 - 2);
        setlinecolor(BLACK);
        circle(centerX, centerY, CELL_SIZE / 2 - 2);
    }
}

int getRow(int y) {
    int row = (y - MARGIN + CELL_SIZE / 2) / CELL_SIZE;
    return (row >= 0 && row < BOARD_SIZE) ? row : -1;
}

int getCol(int x) {
    int col = (x - MARGIN + CELL_SIZE / 2) / CELL_SIZE;
    return (col >= 0 && col < BOARD_SIZE) ? col : -1;
}

BOOL isWin(int row, int col, ChessType type) {
    int dirs[4][2] = { {0, 1}, {1, 0}, {1, 1}, {1, -1} };

    for (int i = 0; i < 4; i++) {
        int count = 1;

        int r = row + dirs[i][0];
        int c = col + dirs[i][1];
        while (r >= 0 && r < BOARD_SIZE && c >= 0 && c < BOARD_SIZE && board[r][c] == type) {
            count++;
            r += dirs[i][0];
            c += dirs[i][1];
        }

        r = row - dirs[i][0];
        c = col - dirs[i][1];
        while (r >= 0 && r < BOARD_SIZE && c >= 0 && c < BOARD_SIZE && board[r][c] == type) {
            count++;
            r -= dirs[i][0];
            c -= dirs[i][1];
        }

        if (count >= 5) {
            return TRUE;
        }
    }

    return FALSE;
}

void showWinner(ChessType winner) {
    setbkmode(TRANSPARENT);
    settextcolor(RED);
    settextstyle(40, 0, _T("微软雅黑"));

    TCHAR* msg;
    if (winner == BLACK) {
        msg = _T("恭喜你获胜！按ESC退出");
    }
    else {
        msg = _T("电脑获胜！按ESC退出");
    }

    int x = (WINDOW_WIDTH - textwidth(msg)) / 2;
    int y = (WINDOW_HEIGHT - textheight(msg)) / 2;

    setfillcolor(WHITE);
    setlinestyle(PS_NULL);
    solidrectangle(x - 20, y - 10, x + textwidth(msg) + 20, y + textheight(msg) + 10);
    setlinestyle(PS_SOLID, 1);

    outtextxy(x, y, msg);
}

int countConsecutive(int row, int col, int dr, int dc, ChessType type, BOOL* blocked) {
    int count = 0;
    int r = row + dr;
    int c = col + dc;
    *blocked = FALSE;

    while (r >= 0 && r < BOARD_SIZE && c >= 0 && c < BOARD_SIZE) {
        if (board[r][c] == type) {
            count++;
            r += dr;
            c += dc;
        }
        else if (board[r][c] == EMPTY) {
            break;
        }
        else {
            *blocked = TRUE;
            break;
        }
    }

    return count;
}

int evaluatePosition(int row, int col, ChessType type) {
    if (board[row][col] != EMPTY) return 0;

    int score = 0;
    int dirs[4][2] = { {0, 1}, {1, 0}, {1, 1}, {1, -1} };

    for (int i = 0; i < 4; i++) {
        BOOL blocked1 = FALSE, blocked2 = FALSE;

        int count1 = countConsecutive(row, col, dirs[i][0], dirs[i][1], type, &blocked1);
        int count2 = countConsecutive(row, col, -dirs[i][0], -dirs[i][1], type, &blocked2);

        int total = count1 + count2 + 1;

        if (total >= 5) {
            score += SCORE_FIVE;
        }
        else if (total == 4) {
            if (!blocked1 && !blocked2) {
                score += SCORE_FOUR;
            }
            else if (!blocked1 || !blocked2) {
                score += (int)(SCORE_FOUR * 0.8);
            }
        }
        else if (total == 3) {
            if (!blocked1 && !blocked2) {
                score += SCORE_THREE;
            }
            else if (!blocked1 || !blocked2) {
                score += (int)(SCORE_THREE * 0.7);
            }
        }
        else if (total == 2) {
            if (!blocked1 && !blocked2) {
                score += SCORE_TWO;
            }
            else if (!blocked1 || !blocked2) {
                score += (int)(SCORE_TWO * 0.7);
            }
        }
        else if (total == 1) {
            if (!blocked1 && !blocked2) {
                score += SCORE_ONE;
            }
        }
    }

    return score;
}

void computerMove() {
    int bestRow = -1, bestCol = -1;
    int maxScore = -1;

    // 检查电脑是否能一步获胜
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == EMPTY) {
                board[i][j] = WHITE;
                if (isWin(i, j, WHITE)) {
                    bestRow = i;
                    bestCol = j;
                    drawChessman(j, i, WHITE);
                    return;
                }
                board[i][j] = EMPTY;
            }
        }
    }

    // 检查玩家是否即将获胜
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == EMPTY) {
                board[i][j] = BLACK;
                if (isWin(i, j, BLACK)) {
                    bestRow = i;
                    bestCol = j;
                    board[i][j] = WHITE;
                    drawChessman(j, i, WHITE);
                    return;
                }
                board[i][j] = EMPTY;
            }
        }
    }

    // 评估所有空位
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == EMPTY) {
                int score = (int)(evaluatePosition(i, j, WHITE) * 1.2);
                score += evaluatePosition(i, j, BLACK);

                if (score > maxScore) {
                    maxScore = score;
                    bestRow = i;
                    bestCol = j;
                }
                else if (score == maxScore && rand() % 2 == 0) {
                    bestRow = i;
                    bestCol = j;
                }
            }
        }
    }

    // 开局随机落子
    if (bestRow == -1) {
        bestRow = rand() % 5 + 5;
        bestCol = rand() % 5 + 5;
        while (board[bestRow][bestCol] != EMPTY) {
            bestRow = rand() % BOARD_SIZE;
            bestCol = rand() % BOARD_SIZE;
        }
    }

    board[bestRow][bestCol] = WHITE;
    drawChessman(bestCol, bestRow, WHITE);
}
