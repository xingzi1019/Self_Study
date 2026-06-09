#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//链表:链式存储的线性表
//链式存储除了要保存数据元素外，还需额外维护数据元素之间的逻辑关系，这两部分信息合称结点（node）
//即结点有两个域：保存数据元素的数据域和存储逻辑关系的指针域
//带头 不带头 单向 双向 循环 非循环
//const int N = 1e5 + 10;
//int e[N], ne[N], h, id;
//int map[N];//map[i]表示 i 这个数存储的位置
////头插
//void push_front(int x)
//{
//	id++;
//	e[id] = x;
//	ne[id] = ne[h];//竟然把这个漏掉了
//	ne[h] = id;
//	map[x] = id;//标记x存储的位置
//}
//void print()//遍历打印 好好理解
//{
//	for (int i = ne[h]; i != 0; i = ne[i])
//	{
//		cout << e[i] << ' ';
//	}
//	cout << endl << endl;
//}
////按值查找 返回值x的下标
//int find_by_val(int x)
//{
//	//解法一:遍历数组 o(n)
//	//for (int i = ne[h]; i; i = ne[i])
//	//{
//	//	if (e[i] == x)
//	//	{
//	//		return i;
//	//	}
//	//}
//	//return 0;
//	//解法二: 创建map数组存放信息 O(1)
//	//局限性:数据的值过大 就不能开这么大的数组
//	//链表中不能存重复的数 相当于是把链表的值换成map[]的下标 而map[]下标对应存的值是链表的下标
//	//而我要查找的值就恰好为map的下标 从而时间换空间实现 o(1) 时间复杂度的查找
//	return map[x];
//}
////在任意位置插入元素
//void push_pos(int p, int x)
//{
//	id++;
//	e[id] = x;
//	ne[id] = ne[p];
//	ne[p] = id;
//	//map别忘记
//	map[x] = id;
//}
//void erase(int p)
//{
//	if (ne[p])
//	{
//		map[e[ne[p]]] = 0; // 将 p 后⾯的元素从 map 中删除
//		ne[p] = ne[ne[p]]; // 指向下⼀个元素的下⼀个元素
//	}
//}
//int main()
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		push_front(i);
//		print();
//	}
//	cout << find_by_val(1) << endl;
//	cout << find_by_val(3) << endl;
//	cout << find_by_val(6) << endl;
//	push_pos(1, 10);
//	print();
//	push_pos(2, 100);
//	print();
//	return 0;
//}