#define _CRT_SECURE_NO_WARNINGS 1
#include "seqtable.h"
//char* UnionListNew(const char* List1, const char* List2)
//{
//	assert(List1 && List2);
//	// 计算需要的总长度
//	size_t len1 = strlen(List1);
//	size_t len2 = strlen(List2);
//	// 分配内存（+1 是为了字符串结束符'\0'）
//	char* result = (char*)malloc(len1 + len2 + 1);
//	if (result == NULL) 
//	{
//		perror("内存分配失败");
//		return NULL;
//	}
//	// 复制第一个字符串
//	strcpy(result, List1);
//	// 拼接第二个字符串
//	strcat(result, List2);
//	return result;
//}
//int main()
//{
//	char str1[512];  // 确保足够大，能容纳两个字符串
//	char str2[256];
//	printf("请输入第一个字符串: ");
//	fgets(str1, sizeof(str1), stdin);
//	printf("请输入第二个字符串: ");
//	fgets(str2, sizeof(str2), stdin);
//	// 去除fgets读取的换行符
//	str1[strcspn(str1, "\n")] = 0;
//	str2[strcspn(str2, "\n")] = 0;
//	printf("str1的原始大小: %zu 字节\n", sizeof(str1));
//	// 方法2：创建新字符串（如果要保留原str1，可以用这个方法）
//	char original[] = "Hello ";
//	char* result = UnionListNew(original, str2);
//	if (result != NULL) 
//	{
//		printf("新创建的字符串: %s\n", result);
//		free(result);  // 记得释放内存
//	}
//	return 0;
//}
//这个可以理解为通讯录的必备能力
void test01()
{
	SEQTable_t* table1 = createSeqTable(DP);
	if (table1 == NULL)
	{
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		pushbackSeqTable(table1, INITMAX + i);
	}
	showSeqTable(table1);
	releaseSeqTable(table1);
}

void test02()
{
	SEQTable_t* table1 = createSeqTable(DP);
	if (table1 == NULL)
	{
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		insertPosSeqTable(table1, 0, 500 + i);
	}
	insertPosSeqTable(table1, 0, 800);
	showSeqTable(table1);
	releaseSeqTable(table1);
}

int main(void)
{
	test02();
	return 0;
}




//多写写博客
//1、系统过完数据结构 —— 所有代码要全部跟着自己实现一遍
//2、C++新特性、Linux、MySQL
//3、过算法集训 —— 保持力扣刷题
//4、高数 四级                                 鹏哥150集   预处理
/*									  蓝桥杯报名✔ ACM三轮选拔12.18 14.30-17.00✔   linux
									  easyX 控制台 swing 数据库 shutdown命令 句柄 vwmare workstation
									  Git✔  PTA上50题 洛谷200题 LeetCode 汉诺塔(小游戏)
									  英语四级 班主任的科研组 	 数据结构 算法
									  《函数栈帧的创建与销毁》《剑指offer》《高质量C/C++编程指南》
大一上  1.C语言 中国大学MOOC 翁恺✔
		2.《C primer plus》
		3.大概学到指针和结构体✔
		4.菜鸟教程（https://www.runoob.com/）
		5.B站（C语言小项目）✔

大一下：1.数据结构与算法基础
	   2.在学这门课的过程中或者学完之后在力扣(leetcode)和洛谷两个网站去刷算法题，一天一道长期坚持。
	   3.C语言学完之后就可以开始C++学习
		1.基础语法跟B站播放量靠前的网课（黑马、尚硅谷、浙大翁恺等)，书的话看一本《C++ Primer plus》
		2.基础语法学完之后接着补相关技术体系（网络编程、多线程、Linux、数据库等）。参考发的《C++体系学习建议》。
		3.体系学完之后开始准备项目
		4.找项目：在github和gitee去找
*/