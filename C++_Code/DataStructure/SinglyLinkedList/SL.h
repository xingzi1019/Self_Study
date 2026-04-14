#pragma once
//一些头文件--------------------------------------------------------------------------------------------------------
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
#include <stddef.h>//offsetof
#include <stdint.h>//int64_t
//#include <cstddef>
//#include <graphics.h>//EasyX
//#include <conio.h>//EasyX

//宏定义------------------------------------------------------------------------------------------------------------
#define MAX 100
#define ADD 5

//自定义类型---------------------------------------------------------------------------------------------------------
typedef int Element_t;//给int类型起了个外号叫Element_t,以后这两个名字指的是同一种东西

typedef struct _node//定义节点结构
{
	Element_t val;
	struct _node* next;
}node_t;

typedef struct//定义链表头结构
{
	node_t head;
	int count;
}LinkList_t;

//函数的定义声明-----------------------------------------------------------------------------------------------------
LinkList_t* creatLinkList();

void insertLinkListHeader(LinkList_t* table, Element_t num);

void insertLinkListPos(LinkList_t* table, Element_t num, int where);

void showLinkList(const LinkList_t* table);

LinkList_t* releaseLinkList();
