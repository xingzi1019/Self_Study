#pragma once
#include <assert.h>//assert
#include <ctype.h>//islower isupper toupper tolower
#include <errno.h>//errno
#include <limits.h>//INT_MAX
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>  // 包含srand()和rand()函数 malloc
#include <string.h>
#include <time.h> // 包含time()函数，用于获取系统时间
#include <windows.h>//控制台
//#include <algorithm.h>
#include <stddef.h>//offsetof
//#include <cstddef>
//是 C++ 标准库的头文件 主要定义与内存、指针、数组相关的类型和宏常量
//不包含函数（这是关键误区！很多人误以为它包含函数，但实际上它是“类型/常量定义头文件”）
#include <stdint.h>//int64_t
//#include <graphics.h>//EasyX
//#include <conio.h>//EasyX

//宏定义--------------------------------------------------------------------------------------------------------------
#define INITMAX 100
#define DP 5

//定义一个数据空间存储类型----------------------------------------------------------------------------------------------
typedef int Element_t;						//为Element_t取别名为int
typedef struct                              //这里用匿名结构体
{
	Element_t* data;                        //存储表中数据空间的首地址
	int pos;                                //指向数据空间的待插入的位置,也是空间里数据个数的表示
	int capacity;                           //表中目前最大的存储容量
}SEQTable_t;


//表头在堆上申请 提供给其他的函数来使用 需要释放的接口
SEQTable_t* createSeqTable(int n);            //创建表头,同时申请了数据存储空间,表头在堆上
void releaseSeqTable(SEQTable_t* table);      //释放表头,同时释放表中指向的数据存储空间

int pushbackSeqTable(SEQTable_t* table, Element_t value); //尾插法

int insertPosSeqTable(SEQTable_t* table, int index, Element_t value);

int findSeqTable(const SEQTable_t* table,Element_t value);

int deleteSeqTable(SEQTable_t* table,Element_t value);

void showSeqTable(const SEQTable_t* SEQTable);
