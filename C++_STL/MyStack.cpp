#define _CRT_SECURE_NO_WARNINGS 1
//以下代码都不考虑健壮性
#include "main.h"
using namespace std;
//栈 ：访问受限的线性表
//栈是⼀种只允许在⼀端进⾏数据插⼊和删除操作的线性表 
//• 进⾏数据插⼊或删除的⼀端称为栈顶，另⼀端称为栈底 不含元素的栈称为空栈
//• 进栈就是往栈中放⼊元素，出栈就是将元素弹出栈顶
//栈顶:理解成表尾
//栈底:理解成表第一个元素
//后进先出LIFO last in first out
//如果定义了⼀个栈结构 那么添加和删除元素只能在栈顶进⾏ 不能随意位置添加和删除元素 这是栈这个数据结构的特性 也是规定
//const int N = 1e5 + 10;
//int stk[N];
//int n;//记住n默认为0
////进栈 "尾插"
//void push(int x)
//{
//	stk[++n] = x;
//}
////出栈
//void pop()
//{
//	--n;
//}
////查询栈顶元素
//int top()
//{
//	return stk[n];
//}
////判断栈是否为空
//bool empty()
//{
//	//if (n)//会隐式转换成bool类型
//	//	return false;
//	//else
//	//	return true;
//	return n == 0;
//}
////查询有效元素的个数
//int size()
//{
//	return n;
//}
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		push(i);
//	}
//	while (!empty())//while(size())
//	{
//		cout << top() << endl;
//		pop();
//	}
//	return 0;
//}