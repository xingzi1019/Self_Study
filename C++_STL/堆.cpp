#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//堆（heap），是⼀棵有着特殊性质的完全⼆叉树，可以⽤来实现优先级队列
//堆需要满⾜以下性质：
//1. 是⼀棵完全⼆叉树；
//2. 对于树中每个结点，如果存在⼦树，那么该结点的权值⼤于等于（或⼩于等于）⼦树中所有结点的权值。
//如果根结点⼤于等于⼦树结点的权值，称为⼤根堆；反之，称为⼩根堆

//堆的存储
//由于堆是⼀个完全⼆叉树，因此可以⽤⼀个数组来存储。（如果不清楚的同学，可以回顾《⼆叉树》中的顺序存储部分）
//结点下标为 i ：
//• 如果⽗存在，⽗下标为 i / 2 ；
//• 如果左孩⼦存在，左孩⼦下标为 i × 2 ；
//• 如果右孩⼦存在，右孩⼦下标为 i × 2 + 1

//核心操作
//以下所有操作都默认堆是⼀个⼤根堆，⼩根堆的原理反着来即可
//向上调整算法 向下调整算法

//向上调整算法
//1. 与⽗结点的权值作⽐较，如果⽐它⼤，就与⽗亲交换；
//2. 交换完之后，重复 1 操作，直到⽐⽗亲⼩，或者换到根节点的位置
//向下调整算法
//1. 找出左右⼉⼦中权值最⼤的那个，如果⽐它⼩，就与其交换；
//2. 交换完之后，重复 1 操作，直到⽐⼉⼦结点的权值都⼤，或者换到叶节点的位置
//const int N = 1e6 + 10;
//int n;
//int heap[N];
//向上调整算法
//void up(int child)
//{
//	int parent = child / 2;//完全二叉树的性质 父亲编号是
//	while (heap[child] > heap[parent] && parent >= 1)
//	{
//		swap(heap[child], heap[parent]);
//		child = parent;
//		parent = child / 2;
//	}
//}
//向下调整算法
//void down(int parent)
//{
//	int child = parent * 2;
//	while (child <= n)//左孩子都不存在右孩子也不存在
//	{
//		if (child + 1 <= n && heap[child + 1] > heap[child])//找出最大的孩子 //看是左孩子还是右孩子
//			child++;
//		if (heap[child] <= heap[parent])
//			return;
//		swap(heap[child],heap[parent]);
//		parent = child;
//		child = parent * 2;
//	}
//}

//堆的模拟实现
//const int N = 1e6 + 10;
//int n;
//int heap[N];
//void up(int child)
//{
//	int parent = child / 2;
//	while (heap[child] > heap[parent] && parent >= 1)
//	{
//		swap(heap[child], heap[parent]);
//		child = parent;//因为是循环 所以 child 和 parent的值需要更新
//		parent = child / 2;
//
//	}
//}
//void down(int parent)
//{
//	int child = parent * 2;
//	while (child <= n)
//	{
//		if (child + 1 <= n && heap[child+1] > heap[child])
//		{
//			child++;
//		}
//		if (heap[child] <= heap[parent])
//		{
//			return;
//		}
//		swap(heap[child], heap[parent]);
//		parent = child;
//		child = parent * 2;
//	}
//}
//void push(int x)
//{
//	heap[++n] = x;//从最后面插入
//	up(n);//调整使其合法
//}
//void pop()
//{
//	swap(heap[1], heap[n]);//头尾交换
//	n--;
//	down(1);//调整使其合法
//}
//int top()
//{
//	return heap[1];
//}
//int size()
//{
//	return n;
//}
//int main()
//{
//	int a[10] = { 1,41,23,10,11,2,-1,99,14,0 };
//	for (int i = 0;i<10;++i)
//	{
//		push(a[i]);
//	}
//	while (size())
//	{
//		cout << top() << " ";
//		pop();
//	}
//	return 0;
//}