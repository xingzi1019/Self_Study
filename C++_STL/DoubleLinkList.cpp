#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//双向链表 依旧静态实现
//需要三个数组 第一个存放数据 第二个存储前一个元素的存储下标 第三个数组存储下一个元素的存储下标
//双向链表⽆⾮就是在单链表的基础上加上⼀个指向前驱的指针，那就再来⼀个数组，充当指向前驱的指针域即可
//const int N = 1e5 + 10;
//int e[N], ne[N], pre[N];
//int map[N];//map[i]表示值i存储的位置 
//int id, h;//默认为0
//void print()//遍历打印
//{
//	for (int i = ne[h]; i; i = ne[i])
//	{
//		cout << e[i] << ' ';
//	}
//	cout << endl << endl;
//}
//void push_front(int x)//头插
//{
//	id++;
//	e[id] = x;
//	pre[id] = h;
//	ne[id] = ne[h];
//	pre[ne[h]] = id;
//	ne[h] = id;//这个必须最后改
//	//
//	map[x] = id;
//}
//int find(int x)
//{
//	return map[x];
//}
////在任意位置之后插入元素 和头插很像
//void insert_back(int p, int x)
//{
//	id++;
//	e[id] = x;
//	pre[id] = p;
//	ne[id] = ne[p];
//	pre[ne[p]] = id;
//	ne[p] = id;//最后
//	map[x] = id;
//}
////在任意位置之前插入指针
//void insert_front(int p, int x)
//{
//	id++;
//	e[id] = x;
//	pre[id] = pre[p];
//	ne[id] = p;
//	ne[pre[p]] = id;
//	pre[p] = id;//最后
//	map[x] = id;
//}
////删除任意位置的元素
//void erase(int p)
//{
//	map[e[p]] = 0; // 把标记清空
//	ne[pre[p]] = ne[p];//好理解
//	pre[ne[p]] = pre[p];//好理解
//}
//int main()
//{
//	for (int i = 1; i < 6; i++)
//	{
//		push_front(i);
//		print();
//	}
//	//cout << find(3) << endl;
//	//cout << find(5) << endl;
//	//cout << find(0) << endl;
//	insert_back(2, 22);
//	insert_back(3, 33);
//	insert_back(4, 44);
//	print();
//	return 0;
//}
