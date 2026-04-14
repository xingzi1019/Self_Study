//#include <graphics.h>
//#include <conio.h>
//#include <time.h>
//#include <string.h>
//#include <stdlib.h>
//
//// 颜色定义（适配EasyX）
//#define COLOR_TITLE		RGB(220, 20, 60)	// 标题红
//#define COLOR_TEXT		RGB(30, 30, 30)		// 正文黑
//#define COLOR_HIGHLIGHT	RGB(0, 100, 200)	// 高亮蓝
//#define COLOR_WARM		RGB(255, 140, 0)	// 暖橙
//#define COLOR_SNOW		RGB(240, 248, 255)	// 雪花白
//#define COLOR_BACK		RGB(250, 250, 250)	// 背景白
//
//// 冬至诗词（传统文化）
//const char* poems[] = 
//{
//	"《冬至》\n"
//	"天时人事日相催，\n"
//	"冬至阳生春又来。\n"
//	"刺绣五纹添弱线，\n"
//	"吹葭六琯动浮灰。\n"
//	"——杜甫",
//
//	"《小至》\n"
//	"天时人事日相催，\n"
//	"冬至阳生春又来。\n"
//	"岸容待腊将舒柳，\n"
//	"山意冲寒欲放梅。\n"
//	"——杜甫",
//
//	"《邯郸冬至夜思家》\n"
//	"邯郸驿里逢冬至，\n"
//	"抱膝灯前影伴身。\n"
//	"想得家中夜深坐，\n"
//	"还应说着远行人。\n"
//	"——白居易"
//};
//
//// 方言祝福（个人情感）
//const char* dialect_blessings[] = 
//{
//	"【四川话】冬至到了，记得吃羊肉汤锅哦！一家人团团圆圆，热热和和的！",
//	"【广东话】冬至快乐！记得食汤圆，一家人齐齐整整，开开心心！",
//	"【上海话】冬至到了，侬要记得吃汤圆哦！一家人团团圆圆，和和美美！",
//	"【东北话】冬至了，记得吃饺子！一家人热热闹闹的，老好了！",
//	"【普通话】冬至快乐！记得吃饺子或汤圆，一家人团团圆圆，幸福美满！"
//};
//
//// 家庭回忆文字（个人情感）
//const char* family_memories[] = 
//{
//	"还记得小时候，每到冬至，奶奶总会包一大锅饺子，\n"
//	"全家人围坐在一起，热气腾腾的饺子配上蒜泥和醋，\n"
//	"那种温暖至今难忘...",
//
//	"冬至的夜晚，妈妈总会煮一锅热腾腾的汤圆，\n"
//	"一家人坐在电视机前，边吃边聊，\n"
//	"那是冬日里最温暖的时光...",
//
//	"小时候的冬至，爸爸会带我们去公园看雪，\n"
//	"虽然冷，但一家人在一起，心里总是暖暖的，\n"
//	"那是童年最美好的回忆..."
//};
//
//// 全局变量
//int g_width = 800;	// 窗口宽度
//int g_height = 600;	// 窗口高度
//
//// 延迟函数
//void delay(int ms) 
//{
//	Sleep(ms);
//}
//
//// 绘制圆角矩形（美化界面）
//void draw_round_rect(int x, int y, int w, int h, int r, COLORREF color) 
//{
//	setlinecolor(color);
//	setfillcolor(color);
//	// 绘制圆角
//	arc(x, y, x + 2 * r, y + 2 * r, 180, 270);
//	arc(x + w - 2 * r, y, x + w, y + 2 * r, 270, 0);
//	arc(x + w - 2 * r, y + h - 2 * r, x + w, y + h, 0, 90);
//	arc(x, y + h - 2 * r, x + 2 * r, y + h, 90, 180);
//	// 绘制直线
//	line(x + r, y, x + w - r, y);
//	line(x + w, y + r, x + w, y + h - r);
//	line(x + r, y + h, x + w - r, y + h);
//	line(x, y + r, x, y + h - r);
//	// 填充内部
//	solidrectangle(x + r, y + r, x + w - r, y + h - r);
//}
//
//// 打字机效果绘制文字
//void typewriter_draw(const char* text, int x, int y, int size, COLORREF color, int speed)
//{
//	settextstyle(size, 0, _T("微软雅黑"));
//	settextcolor(color);
//	
//	int curr_x = x;
//	int curr_y = y;
//	int char_w = textwidth(_T("字"));	// 单个字符宽度
//	int char_h = textheight(_T("字"));	// 单个字符高度
//
//	for (int i = 0; text[i] != '\0'; i++) 
//	{
//		if (text[i] == '\n') 
//		{
//			curr_x = x;
//			curr_y += char_h + 5;
//			delay(speed * 2);
//			continue;
//		}
//
//		TCHAR ch[2] = { (TCHAR)text[i], 0 };
//		outtextxy(curr_x, curr_y, ch);
//		curr_x += char_w;
//		
//		if (curr_x > g_width - 50) 
//		{	// 超出宽度自动换行
//			curr_x = x;
//			curr_y += char_h + 5;
//		}
//		delay(speed);
//	}
//}
//
//// 绘制雪花（动态效果）
//void draw_snowflake(int x, int y, int size, COLORREF color) 
//{
//	setlinecolor(color);
//	setfillcolor(color);
//
//	// 绘制雪花主体
//	circle(x, y, size / 6);
//	// 绘制雪花六瓣
//	line(x, y - size/2, x, y + size/2);
//	line(x - size/3, y - size/3, x + size/3, y + size/3);
//	line(x + size/3, y - size/3, x - size/3, y + size/3);
//}
//
//// 雪花飘落动画
//void snow_animation(int count) 
//{
//	struct Snow {
//		int x, y;
//		int size;
//		int speed;
//	};
//	
//	Snow snows[99];
//	// 初始化雪花
//	for (int i = 0; i < count; i++) {
//		snows[i].x = rand() % g_width;
//		snows[i].y = rand() % g_height;
//		snows[i].size = rand() % 5 + 2;
//		snows[i].speed = rand() % 3 + 1;
//	}
//
//	// 飘落动画
//	for (int frame = 0; frame < 100; frame++) 
//	{
//		cleardevice();
//		setbkcolor(COLOR_BACK);
//
//		for (int i = 0; i < count; i++) 
//		{
//			draw_snowflake(snows[i].x, snows[i].y, snows[i].size, COLOR_SNOW);
//			// 更新位置
//			snows[i].y += snows[i].speed;
//			snows[i].x += (rand() % 3 - 1);	// 左右轻微晃动
//			// 重置雪花位置
//			if (snows[i].y > g_height) 
//			{
//				snows[i].y = 0;
//				snows[i].x = rand() % g_width;
//			}
//		}
//		delay(30);
//	}
//}
//
//// 绘制菜单界面
//int draw_menu()
//{
//	cleardevice();
//	setbkcolor(COLOR_BACK);
//
//	// 绘制标题区域
//	draw_round_rect(50, 30, g_width - 100, 100, 20, COLOR_TITLE);
//	settextstyle(40, 0, _T("微软雅黑"));
//	settextcolor(RGB(255, 255, 255));
//	outtextxy(g_width/2 - textwidth(_T("冬至贺卡互动菜单"))/2, 60, _T("冬至贺卡互动菜单"));
//
//	// 绘制菜单选项
//	const char* menu_items[] = 
//	{
//		"1. 欣赏冬至诗词（传统文化）",
//		"2. 查看冬至习俗插画",
//		"3. 聆听方言祝福（个人情感）",
//		"4. 阅读家庭回忆（个人情感）",
//		"5. 观看动态效果演示",
//		"6. 完整贺卡展示",
//		"0. 退出"
//	};
//
//	settextstyle(24, 0, _T("微软雅黑"));
//	settextcolor(COLOR_TEXT);
//	int menu_y = 180;
//	for (int i = 0; i < 7; i++)
//	{
//		outtextxy(100, menu_y, _T(menu_items[i]));
//		menu_y += 50;
//	}
//
//	// 绘制提示文字
//	settextcolor(COLOR_HIGHLIGHT);
//	outtextxy(100, menu_y + 30, _T("请按对应数字键选择功能..."));
//
//	// 等待按键
//	int key = 0;
//	while (!_kbhit());
//	key = _getch() - '0';
//	return key;
//}
//
//// 显示冬至诗词
//void show_poems() 
//{
//	cleardevice();
//	setbkcolor(COLOR_BACK);
//
//	// 绘制标题
//	draw_round_rect(50, 30, g_width - 100, 80, 15, COLOR_HIGHLIGHT);
//	settextstyle(36, 0, _T("微软雅黑"));
//	settextcolor(RGB(255, 255, 255));
//	outtextxy(g_width/2 - textwidth(_T("冬至诗词欣赏"))/2, 50, _T("冬至诗词欣赏"));
//
//	// 逐首绘制诗词
//	int y = 150;
//	for (int i = 0; i < 3; i++) 
//	{
//		settextcolor(COLOR_WARM);
//		outtextxy(80, y, _T("【诗词 "));
//		TCHAR num[2] = { (TCHAR)('1' + i), 0 };
//		outtextxy(150, y, num);
//		outtextxy(170, y, _T("】"));
//		y += 40;
//
//		typewriter_draw(poems[i], 80, y, 20, COLOR_TEXT, 80);
//		y += 150;
//
//		if (i < 2) 
//		{
//			outtextxy(g_width/2 - textwidth(_T("按任意键继续..."))/2, g_height - 80, _T("按任意键继续..."));
//			while (!_kbhit());
//			_getch();
//			cleardevice();
//			setbkcolor(COLOR_BACK);
//			// 重新绘制标题
//			draw_round_rect(50, 30, g_width - 100, 80, 15, COLOR_HIGHLIGHT);
//			settextstyle(36, 0, _T("微软雅黑"));
//			settextcolor(RGB(255, 255, 255));
//			outtextxy(g_width/2 - textwidth(_T("冬至诗词欣赏"))/2, 50, _T("冬至诗词欣赏"));
//			y = 150;
//		}
//	}
//
//	// 返回提示
//	outtextxy(g_width/2 - textwidth(_T("按任意键返回菜单..."))/2, g_height - 80, _T("按任意键返回菜单..."));
//	while (!_kbhit());
//	_getch();
//}
//
//// 绘制冬至习俗插画
//void draw_custom_icons(int x, int y) 
//{
//	// 饺子图标
//	setfillcolor(RGB(255, 204, 153));
//	solidellipse(x, y, x + 60, y + 40);	// 饺子主体
//	setlinecolor(RGB(139, 69, 19));
//	line(x, y + 20, x + 60, y + 20);	// 饺子褶子
//	outtextxy(x - 40, y + 50, _T("吃饺子"));
//
//	// 汤圆图标
//	setfillcolor(RGB(255, 228, 225));
//	solidcircle(x + 120, y + 20, 20);	// 汤圆
//	outtextxy(x + 90, y + 50, _T("吃汤圆"));
//
//	// 雪花图标
//	draw_snowflake(x + 240, y + 20, 40, COLOR_HIGHLIGHT);
//	outtextxy(x + 210, y + 50, _T("赏雪景"));
//}
//
//// 显示习俗插画
//void show_customs_art()
//{
//	cleardevice();
//	setbkcolor(COLOR_BACK);
//
//	// 绘制标题
//	draw_round_rect(50, 30, g_width - 100, 80, 15, COLOR_WARM);
//	settextstyle(36, 0, _T("微软雅黑"));
//	settextcolor(RGB(255, 255, 255));
//	outtextxy(g_width/2 - textwidth(_T("冬至习俗插画"))/2, 50, _T("冬至习俗插画"));
//
//	// 绘制习俗图标
//	draw_custom_icons(g_width/2 - 150, 200);
//
//	// 绘制说明文字
//	settextstyle(20, 0, _T("微软雅黑"));
//	settextcolor(COLOR_TEXT);
//	outtextxy(100, 350, _T("冬至习俗：北方吃饺子，南方吃汤圆，寓意团团圆圆！"));
//
//	// 返回提示
//	outtextxy(g_width/2 - textwidth(_T("按任意键返回菜单..."))/2, g_height - 80, _T("按任意键返回菜单..."));
//	while (!_kbhit());
//	_getch();
//}
//
//// 显示方言祝福
//void show_dialect_blessings()
//{
//	cleardevice();
//	setbkcolor(COLOR_BACK);
//
//	// 绘制标题
//	draw_round_rect(50, 30, g_width - 100, 80, 15, COLOR_WARM);
//	settextstyle(36, 0, _T("微软雅黑"));
//	settextcolor(RGB(255, 255, 255));
//	outtextxy(g_width/2 - textwidth(_T("方言祝福（个人情感）"))/2, 50, _T("方言祝福（个人情感）"));
//
//	// 逐行绘制祝福
//	int y = 150;
//	for (int i = 0; i < 5; i++) 
//	{
//		settextcolor(COLOR_HIGHLIGHT);
//		outtextxy(80, y, _T("【方言 "));
//		TCHAR num[2] = { (TCHAR)('1' + i), 0 };
//		outtextxy(150, y, num);
//		outtextxy(170, y, _T("】"));
//		y += 40;
//
//		typewriter_draw(dialect_blessings[i], 80, y, 20, COLOR_TEXT, 60);
//		y += 60;
//
//		if (i < 4)
//		{
//			outtextxy(g_width/2 - textwidth(_T("按任意键继续..."))/2, g_height - 80, _T("按任意键继续..."));
//			while (!_kbhit());
//			_getch();
//			cleardevice();
//			setbkcolor(COLOR_BACK);
//			// 重新绘制标题
//			draw_round_rect(50, 30, g_width - 100, 80, 15, COLOR_WARM);
//			settextstyle(36, 0, _T("微软雅黑"));
//			settextcolor(RGB(255, 255, 255));
//			outtextxy(g_width/2 - textwidth(_T("方言祝福（个人情感）"))/2, 50, _T("方言祝福（个人情感）"));
//			y = 150;
//		}
//	}
//
//	// 返回提示
//	outtextxy(g_width/2 - textwidth(_T("按任意键返回菜单..."))/2, g_height - 80, _T("按任意键返回菜单..."));
//	while (!_kbhit());
//	_getch();
//}
//
//// 显示家庭回忆
//void show_family_memories() 
//{
//	cleardevice();
//	setbkcolor(COLOR_BACK);
//
//	// 绘制标题
//	draw_round_rect(50, 30, g_width - 100, 80, 15, COLOR_TITLE);
//	settextstyle(36, 0, _T("微软雅黑"));
//	settextcolor(RGB(255, 255, 255));
//	outtextxy(g_width/2 - textwidth(_T("家庭回忆（个人情感）"))/2, 50, _T("家庭回忆（个人情感）"));
//
//	// 逐段绘制回忆
//	int y = 150;
//	for (int i = 0; i < 3; i++)
//	{
//		settextcolor(COLOR_WARM);
//		outtextxy(80, y, _T("【回忆 "));
//		TCHAR num[2] = { (TCHAR)('1' + i), 0 };
//		outtextxy(150, y, num);
//		outtextxy(170, y, _T("】"));
//		y += 40;
//
//		typewriter_draw(family_memories[i], 80, y, 22, COLOR_TEXT, 100);
//		y += 100;
//
//		if (i < 2)
//		{
//			outtextxy(g_width/2 - textwidth(_T("按任意键继续..."))/2, g_height - 80, _T("按任意键继续..."));
//			while (!_kbhit());
//			_getch();
//			cleardevice();
//			setbkcolor(COLOR_BACK);
//			// 重新绘制标题
//			draw_round_rect(50, 30, g_width - 100, 80, 15, COLOR_TITLE);
//			settextstyle(36, 0, _T("微软雅黑"));
//			settextcolor(RGB(255, 255, 255));
//			outtextxy(g_width/2 - textwidth(_T("家庭回忆（个人情感）"))/2, 50, _T("家庭回忆（个人情感）"));
//			y = 150;
//		}
//	}
//
//	// 返回提示
//	outtextxy(g_width/2 - textwidth(_T("按任意键返回菜单..."))/2, g_height - 80, _T("按任意键返回菜单..."));
//	while (!_kbhit());
//	_getch();
//}
//
//// 显示动态效果演示
//void show_animations()
//{
//	cleardevice();
//	setbkcolor(COLOR_BACK);
//
//	// 绘制标题
//	draw_round_rect(50, 30, g_width - 100, 80, 15, COLOR_HIGHLIGHT);
//	settextstyle(36, 0, _T("微软雅黑"));
//	settextcolor(RGB(255, 255, 255));
//	outtextxy(g_width/2 - textwidth(_T("动态效果演示"))/2, 50, _T("动态效果演示"));
//
//	// 演示雪花动画
//	outtextxy(100, 150, _T("正在播放雪花飘落动画..."));
//	snow_animation(50);
//
//	// 演示打字机效果
//	cleardevice();
//	setbkcolor(COLOR_BACK);
//	draw_round_rect(50, 30, g_width - 100, 80, 15, COLOR_HIGHLIGHT);
//	settextstyle(36, 0, _T("微软雅黑"));
//	settextcolor(RGB(255, 255, 255));
//	outtextxy(g_width/2 - textwidth(_T("动态效果演示"))/2, 50, _T("动态效果演示"));
//
//	outtextxy(100, 150, _T("打字机效果演示："));
//	typewriter_draw("冬至快乐！愿您和家人团团圆圆，幸福美满！", 100, 200, 24, COLOR_TITLE, 50);
//
//	// 返回提示
//	outtextxy(g_width/2 - textwidth(_T("按任意键返回菜单..."))/2, g_height - 80, _T("按任意键返回菜单..."));
//	while (!_kbhit());
//	_getch();
//}
//
//// 完整贺卡展示
//void show_full_card() 
//{
//	cleardevice();
//	setbkcolor(COLOR_BACK);
//
//	// 1. 开场雪花动画
//	snow_animation(30);
//
//	// 2. 绘制贺卡标题
//	draw_round_rect(50, 30, g_width - 100, 100, 20, COLOR_TITLE);
//	settextstyle(48, 0, _T("微软雅黑"));
//	settextcolor(RGB(255, 255, 255));
//	outtextxy(g_width/2 - textwidth(_T("冬至贺卡"))/2, 50, _T("冬至贺卡"));
//	delay(1000);
//
//	// 3. 传统文化板块
//	settextstyle(32, 0, _T("微软雅黑"));
//	settextcolor(COLOR_HIGHLIGHT);
//	outtextxy(80, 150, _T("【传统文化】"));
//	settextstyle(20, 0, _T("微软雅黑"));
//	typewriter_draw(poems[0], 80, 200, 20, COLOR_TEXT, 50);
//	
//	// 绘制习俗图标
//	draw_custom_icons(g_width/2 - 150, 320);
//	delay(1500);
//
//	// 4. 个人情感板块
//	settextstyle(32, 0, _T("微软雅黑"));
//	settextcolor(COLOR_WARM);
//	outtextxy(80, 400, _T("【个人情感】"));
//	settextstyle(20, 0, _T("微软雅黑"));
//	typewriter_draw(dialect_blessings[4], 80, 450, 20, COLOR_TEXT, 50);
//	delay(1000);
//
//	// 5. 结尾祝福
//	cleardevice();
//	setbkcolor(COLOR_BACK);
//	snow_animation(20);
//
//	draw_round_rect(100, 100, g_width - 200, g_height - 200, 30, COLOR_TITLE);
//	settextstyle(36, 0, _T("微软雅黑"));
//	settextcolor(RGB(255, 255, 255));
//	outtextxy(g_width/2 - textwidth(_T("冬至快乐！"))/2, 200, _T("冬至快乐！"));
//	
//	settextstyle(24, 0, _T("微软雅黑"));
//	outtextxy(g_width/2 - textwidth(_T("愿您和家人团团圆圆，幸福美满！"))/2, 280, _T("愿您和家人团团圆圆，幸福美满！"));
//	outtextxy(g_width/2 - textwidth(_T("这个冬天，温暖如春！"))/2, 340, _T("这个冬天，温暖如春！"));
//
//	// 返回提示
//	settextcolor(COLOR_TEXT);
//	outtextxy(g_width/2 - textwidth(_T("按任意键返回菜单..."))/2, g_height - 80, _T("按任意键返回菜单..."));
//	while (!_kbhit());
//	_getch();
//}
//
//// 主函数
//int main()
//{
//	// 初始化图形界面
//	initgraph(g_width, g_height);
//	setbkcolor(COLOR_BACK);
//	srand((unsigned)time(NULL));
//
//	int choice = 0;
//	while (true) 
//	{
//		choice = draw_menu();
//		switch (choice) 
//		{
//			case 1: show_poems(); break;
//			case 2: show_customs_art(); break;
//			case 3: show_dialect_blessings(); break;
//			case 4: show_family_memories(); break;
//			case 5: show_animations(); break;
//			case 6: show_full_card(); break;
//			case 0: 
//				cleardevice();
//				settextstyle(40, 0, _T("微软雅黑"));
//				settextcolor(COLOR_TITLE);
//				outtextxy(g_width/2 - textwidth(_T("祝您冬至快乐！"))/2, g_height/2, _T("祝您冬至快乐！"));
//				delay(2000);
//				closegraph();
//				return 0;
//			default:
//				cleardevice();
//				settextcolor(RGB(255, 0, 0));
//				outtextxy(g_width/2 - textwidth(_T("无效选择，请重新输入！"))/2, g_height/2, _T("无效选择，请重新输入！"));
//				delay(1000);
//				break;
//		}
//	}
//
//	closegraph();
//	return 0;
//}
////头文件--------------------------------------------------------------------------------------------------------------
//#include <graphics.h>
//#include <conio.h>
//#include <stdio.h>
//#include <time.h>
//#include <windows.h>
//
//// 自定义颜色常量------------------------------------------------------------------------------------------------------
//#define COLOR_WINTER 0x00BFFF    // 冬日蓝
//#define COLOR_FESTIVAL 0xFF6600  // 节日橙
//#define COLOR_POEM 0x993366      // 诗词紫
//#define COLOR_MEMORY 0x336600    // 回忆绿
//
////结构体---------------------------------------------------------------------------------------------------------------
//// 雪花结构体（科技创意：动态雪花特效）
//typedef struct 
//{
//    int x, y;   // 坐标
//    int speed;  // 下落速度
//    int size;   // 大小
//} Snow;
//
//Snow snow[200];  // 雪花数组 VS不支持C99
//
//// 初始化雪花
//void initSnow() 
//{
//    srand((unsigned)time(NULL));
//    for (int i = 0; i < 200; i++) 
//    {
//        snow[i].x = rand() % getwidth();
//        snow[i].y = rand() % getheight();
//        snow[i].speed = rand() % 3 + 1;
//        snow[i].size = rand() % 3 + 1;
//    }
//}
//
//// 绘制雪花
//void drawSnow() {
//    setfillcolor(WHITE);
//    for (int i = 0; i < 200; i++) 
//    {
//        solidcircle(snow[i].x, snow[i].y, snow[i].size);
//        // 雪花下落
//        snow[i].y += snow[i].speed;
//        snow[i].x += rand() % 3 - 1;  // 左右轻微偏移
//        // 雪花重置（落地后回到顶部）
//        if (snow[i].y > getheight()) 
//        {
//            snow[i].y = 0;
//            snow[i].x = rand() % getwidth();
//        }
//    }
//}
//
//// 绘制冬至习俗插画（传统文化：简笔画）
//void drawCustom(int type) 
//{
//    setlinecolor(COLOR_FESTIVAL);
//    setfillcolor(0xFFFFCC);//?
//    switch (type) 
//    {
//    case 1:  // 饺子插画
//        // 饺子轮廓
//        ellipse(200, 350, 300, 400);
//        line(200, 375, 300, 375);
//        solidellipse(220, 360, 240, 380);
//        solidellipse(260, 360, 280, 380);
//        outtextxy(230, 410, _T("冬至吃饺子，不冻耳朵"));
//        break;
//    case 2:  // 汤圆插画
//        for (int i = 0; i < 5; i++) 
//        {
//            solidcircle(220 + i * 15, 370, 10);
//        }
//        outtextxy(230, 410, _T("冬至吃汤圆，团圆又美满"));
//        break;
//    case 3:  // 数九插画
//        rectangle(200, 350, 300, 400);
//        outtextxy(210, 360, _T("一九"));
//        outtextxy(250, 360, _T("二九"));
//        outtextxy(210, 380, _T("三九"));
//        outtextxy(250, 380, _T("四九"));
//        outtextxy(230, 410, _T("数九寒天，冬至始"));
//        break;
//    }
//}
//
//// 显示冬至诗词（传统文化）
//void showPoem(int y) 
//{
//    settextcolor(COLOR_POEM);
//    settextstyle(20, 0, _T("宋体"));
//    outtextxy(100, y, _T("《冬至夜怀湘灵》- 白居易"));
//    outtextxy(120, y + 30, _T("艳质无由见，寒衾不可亲。"));
//    outtextxy(120, y + 60, _T("何堪最长夜，俱作独眠人。"));
//    outtextxy(100, y + 90, _T("《冬至》- 杜甫"));
//    outtextxy(120, y + 120, _T("天时人事日相催，冬至阳生春又来。"));
//    outtextxy(120, y + 150, _T("刺绣五纹添弱线，吹葭六琯动浮灰。"));
//}
//
//// 显示个人情感（方言祝福+家庭回忆）
//void showEmotion(int x, int y) 
//{
//    settextcolor(COLOR_MEMORY);
//    settextstyle(18, 0, _T("楷体"));
//    // 方言祝福（可替换为自己的方言）
//    outtextxy(x, y, _T("【北方方言祝福】"));
//    outtextxy(x + 20, y + 30, _T("冬至到咧，吃碗热乎饺子，一年都不冻耳朵！"));
//    outtextxy(x, y + 60, _T("【南方方言祝福】"));
//    outtextxy(x + 20, y + 90, _T("冬至安康，食碗汤圆，阖家团圆，万事顺意！"));
//
//    // 家庭回忆（自定义修改）
//    outtextxy(x, y + 130, _T("【家庭回忆】"));
//    outtextxy(x + 20, y + 160, _T("小时候冬至，奶奶总会包羊肉饺子，"));
//    outtextxy(x + 20, y + 190, _T("一家人围在炕头，边吃边聊，暖乎乎的…"));
//}
//
//// 主界面交互逻辑
//void mainInterface() 
//{
//    // 初始化图形界面
//    initgraph(1000, 600);
//    setbkcolor(0xF0F8FF);  // 背景色：爱丽丝蓝
//    cleardevice();
//
//    initSnow();  // 初始化雪花
//
//    int poemY = 50;       // 诗词滚动Y坐标
//    int customType = 1;   // 当前显示的习俗插画类型
//    int clickCount = 0;   // 鼠标点击计数
//
//    BeginBatchDraw();  // 双缓冲绘制，防止闪烁
//    while (1) 
//    {
//        cleardevice();
//
//        // 1. 动态雪花特效（科技创意）
//        drawSnow();
//
//        // 2. 标题
//        settextcolor(COLOR_FESTIVAL);
//        settextstyle(36, 0, _T("黑体"));
//        outtextxy(250, 20, _T("冬至 · 岁寒安康"));
//
//        // 3. 动态滚动诗词（科技创意+传统文化）
//        showPoem(poemY);
//        poemY -= 1;
//        if (poemY < -200) poemY = 600;
//
//        // 4. 习俗插画（点击切换）
//        drawCustom(customType);
//
//        // 5. 个人情感展示
//        showEmotion(450, 100);
//
//        // 6. 操作提示
//        settextcolor(BLACK);
//        settextstyle(16, 0, _T("宋体"));
//        outtextxy(10, 550, _T("【操作说明】点击鼠标切换习俗插画"));
//        //outtextxy(10, 580, _T("------------------------------------------------------------------------------------------------------------------XingZi"));
//
//
//        FlushBatchDraw();
//        Sleep(10);
//
//        // 鼠标交互：切换习俗插画
//        if (MouseHit())
//        {
//            MOUSEMSG m = GetMouseMsg();
//            if (m.uMsg == WM_LBUTTONDOWN) 
//            {
//                clickCount++;
//                customType = clickCount % 3 + 1;
//            }
//        }
//
//        // 退出程序
//        if (_kbhit() && _getch() == 27) break;
//    }
//    EndBatchDraw();
//    closegraph();//关闭窗口
//}
//
//int main() 
//{
//    mainInterface();
//    return 0;
//}
#pragma comment
//头文件--------------------------------------------------------------------------------------------------------------
#include <graphics.h>//EasyX
#include <conio.h>
#include <stdio.h>
#include <time.h>//获取系统时间
#include <windows.h>//控制台
#include <stdlib.h>//rand srand

// 自定义颜色常量------------------------------------------------------------------------------------------------------
#define COLOR_WINTER 0x00BFFF    // 冬日蓝     偷的
#define COLOR_FESTIVAL 0xFF6600  // 节日橙
#define COLOR_POEM 0x993366      // 诗词紫
#define COLOR_MEMORY 0x336600    // 回忆绿

//结构体---------------------------------------------------------------------------------------------------------------
// 雪花结构体（科技创意：动态雪花特效）
typedef struct
{
    int x, y;   // 坐标
    int speed;  // 下落速度
    int size;   // 大小
} Snow;
Snow snow[200];  // 雪花数组 VS不支持C99
// 初始化雪花
void initSnow()
{
    srand((unsigned)time(NULL));//鹏哥同款直接CV
    for (int i = 0; i < 200; i++)
    {
        snow[i].x = rand() % getwidth();
        snow[i].y = rand() % getheight();
        snow[i].speed = rand() % 3 + 1;
        snow[i].size = rand() % 3 + 1;
    }
}
// 绘制雪花
void drawSnow() 
{
    setfillcolor(WHITE);
    for (int i = 0; i < 200; i++)
    {
        solidcircle(snow[i].x, snow[i].y, snow[i].size);
        // 雪花下落
        snow[i].y += snow[i].speed;
        snow[i].x += rand() % 3 - 1;  // 左右轻微偏移
        // 雪花重置（落地后回到顶部）
        if (snow[i].y > getheight())
        {
            snow[i].y = 0;
            snow[i].x = rand() % getwidth();
        }
    }
}
// 绘制冬至习俗插画（传统文化：简笔画）
// 新增参数x/y，支持自定义绘制位置
void drawCustom(int type, int x, int y)
{
    setlinecolor(COLOR_FESTIVAL);
    setfillcolor(0xFFFFCC);
    switch (type)
    {
    case 1:  // 饺子插画
        // 饺子轮廓（基于传入的x/y坐标绘制）
        ellipse(x, y, x + 100, y + 50);
        line(x, y + 25, x + 100, y + 25);
        solidellipse(x + 20, y + 10, x + 40, y + 30);
        solidellipse(x + 60, y + 10, x + 80, y + 30);
        outtextxy(x + 30, y + 60, _T("冬至吃饺子，不冻耳朵"));
        break;
    case 2:  // 汤圆插画
        for (int i = 0; i < 5; i++)
        {
            solidcircle(x + 20 + i * 15, y + 20, 10);
        }
        outtextxy(x + 30, y + 60, _T("冬至吃汤圆，团圆又美满"));
        break;
    case 3:  // 数九插画
        rectangle(x, y, x + 100, y + 50);
        outtextxy(x + 10, y + 10, _T("一九"));
        outtextxy(x + 50, y + 10, _T("二九"));
        outtextxy(x + 10, y + 30, _T("三九"));
        outtextxy(x + 50, y + 30, _T("四九"));
        outtextxy(x + 30, y + 60, _T("数九寒天，冬至始"));
        break;
    }
}
// 显示冬至诗词（传统文化）
void showPoem(int y)
{
    settextcolor(COLOR_POEM);
    settextstyle(20, 0, _T("宋体"));
    outtextxy(100, y, _T("《冬至夜怀湘灵》- 白居易"));
    outtextxy(120, y + 30, _T("艳质无由见，寒衾不可亲。"));
    outtextxy(120, y + 60, _T("何堪最长夜，俱作独眠人。"));
    outtextxy(100, y + 90, _T("《冬至》- 杜甫"));
    outtextxy(120, y + 120, _T("天时人事日相催，冬至阳生春又来。"));
    outtextxy(120, y + 150, _T("刺绣五纹添弱线，吹葭六琯动浮灰。"));
}
// 显示个人情感（方言祝福+家庭回忆）
void showEmotion(int x, int y)
{
    settextcolor(COLOR_MEMORY);
    settextstyle(18, 0, _T("楷体"));
    // 方言祝福（可替换为自己的方言）
    outtextxy(x, y, _T("【北方方言祝福】"));
    outtextxy(x + 20, y + 30, _T("冬至到咧，吃碗热乎饺子，一年都不冻耳朵！"));
    outtextxy(x, y + 60, _T("【南方方言祝福】"));
    outtextxy(x + 20, y + 90, _T("冬至安康，食碗汤圆，阖家团圆，万事顺意！"));
    // 家庭回忆（自定义修改）
    outtextxy(x, y + 130, _T("【家庭回忆】"));
    outtextxy(x + 20, y + 160, _T("小时候冬至，奶奶总会包羊肉饺子，"));
    outtextxy(x + 20, y + 190, _T("一家人围在炕头，边吃边聊，暖乎乎的…"));
}
// 主界面交互逻辑
void mainInterface()
{
    // 初始化图形界面
    initgraph(1000, 600);//不够自己调整
    setbkcolor(0xF0F8FF);  // 背景色：爱丽丝蓝 //不喜欢自己换
    cleardevice();
    initSnow();  // 初始化雪花
    int poemY = 50;       // 诗词滚动Y坐标
    int customType = 1;   // 当前显示的习俗插画类型
    int clickCount = 0;   // 鼠标点击计数
    BeginBatchDraw();  // 双缓冲绘制，防止闪烁
    while (1)
    {
        cleardevice();
        // 1. 动态雪花特效（科技创意）
        drawSnow();
        // 2. 标题
        settextcolor(COLOR_FESTIVAL);
        settextstyle(36, 0, _T("黑体"));
        outtextxy(250, 20, _T("冬至 · 岁寒安康"));
        // 3. 动态滚动诗词（科技创意+传统文化）
        showPoem(poemY);
        poemY -= 1;
        if (poemY < -200) 
            poemY = 600;//
        // 4. 个人情感展示（方言祝福+家庭回忆）- 放在上方
        showEmotion(450, 100);
        // 5. 习俗插画（点击切换）- 放在方言祝福和家庭回忆下方
        // 绘制位置：x=450（和情感文字对齐），y=350（在回忆文字下方）
        drawCustom(customType, 450, 350);
        // 6. 操作提示
        settextcolor(BLACK);
        settextstyle(16, 0, _T("宋体"));
        outtextxy(10, 550, _T("【操作说明】点击鼠标切换习俗插画"));
        //outtextxy(10, 580, _T("------------------------------------------------------------------------------------------------------------------XingZi"));
        FlushBatchDraw();
        Sleep(10);
        // 鼠标交互：切换习俗插画
        if (MouseHit())
        {
            MOUSEMSG m = GetMouseMsg();
            if (m.uMsg == WM_LBUTTONDOWN)
            {
                clickCount++;
                customType = clickCount % 3 + 1;
            }
        }
        // 退出程序
        if (_kbhit() && _getch() == 27) break;
    }
    EndBatchDraw();
    closegraph();//关闭窗口
}
int main()
{
    mainInterface();
    return 0;
}
//位置还是有点怪 不想调整了
//音乐不会搞
//其实比五子棋简单很多
//省了下棋逻辑