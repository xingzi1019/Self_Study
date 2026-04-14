#define _CRT_SECURE_NO_WARNINGS 1
//以后尽量写的规范些 多文件的编程
//设计并实现一个带头节点的单向链表
//实现头插法✔
//任意位置插入法
//按照值来删除某个元素
//显示整个链表的数据
#include "SL.h"
//void test()
//{
//
//}
int main()
{
	LinkList_t* table = creatLinkList();
	if (table == NULL)
	{
		return -1;
	}
	for (int i = 0; i < 10; i++)
	{
		insertLinkListHeader(table, i + 100);
	}
	insertLinkListPos(table, 666, 5);
	showLinkList(table);
	return 0;
}
//准备算法和数据结构双开了
