//#define _CRT_SECURE_NO_WARNINGS 1
//#include "main.h"
//using namespace std;
////队列也是⼀种访问受限的线性表，它只允许在表的⼀端进⾏插⼊操作，在另⼀端进⾏删除操作。
//// 尾插头删
////• 允许插⼊的⼀端称为队尾，允许删除的⼀端称为队头。
////• 先进⼊队列的元素会先出队，故队列具有先进先出(First In First Out)的特性。
//
////依旧静态实现 数组模拟
////创建
//const int N = 1e5 + 10;
//int q[N], h, t;//默认为0
////入队
//void push(int x)
//{
//	q[++t] = x;
//}
////出队
//void pop()
//{
//	h++;//只是移动h这个指针 还不是头删 如果要像头删就得像链表来实现了
//}
////查询队头元素
//int front()
//{
//	return q[h+1];
//}
////查询队尾元素
//int back()
//{
//	return q[t];
//}
////判空
//bool empty()
//{
//	return h == t;
//}
////查询有效元素个数
//int size()
//{
//	return t - h;
//}
//int main()
//{
//	for (int i =1;i<=10;i++)
//	{
//		push(i);
//	}
//	while (!empty())
//	{
//		cout << front() << ' ' << back() << endl;
//		pop();
//	}
//	return 0;
//}