#pragma once //头文件只被包含一次  第一种解决方案 推荐此写法

#ifndef __TEST_H__  //这样子写可以防止头文件被多次的包含 第二种方案 不推荐此写法
#define __TEST_H__
int Add(int x, int y);
#endif

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
#include <cstddef>
//是 C++ 标准库的头文件 主要定义与内存、指针、数组相关的类型和宏常量
//不包含函数（这是关键误区！很多人误以为它包含函数，但实际上它是“类型/常量定义头文件”）
#include <stdint.h>//int64_t
#include <graphics.h>//EasyX
#include <conio.h>//EasyX

//包含头文件时<>和""查找的策略不一样
//<>查找策略:直接去库目录下查找
//""查找策略:先去代码所在的路径下查找 如果找不到再去库目录下查找