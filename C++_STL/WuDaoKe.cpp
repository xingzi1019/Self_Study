// #include <iostream>
// #include <vector>
// #include <queue>
// #include <cmath>
// using namespace std;
// const int N = 2e5 + 10;
// int n;
// int s[N]; // 标记男⼥ - 0/1
// // 双向链表存数据
// int e[N];
// int pre[N], ne[N];
//
// struct node
// {
//     int d; // 技术差
//     int l, r; // 左右编号
//     // ⼩根堆，⼤元素下坠
//     bool operator <(const node& x) const
//     {
//         if (d != x.d) return d > x.d;
//         else if (l != x.l) return l > x.l;
//         else return r > x.r;
//     }
// };
//
// priority_queue<node> heap;
// bool st[N]; // 标记已经出队的⼈
// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch;
//         cin >> ch;
//         if (ch == 'B') s[i] = 1;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> e[i];
//         // 创建双向链表
//         pre[i] = i - 1;
//         ne[i] = i + 1;
//     }
//     pre[1] = ne[n] = 0; // 0 表⽰后⾯没有元素
//     // 1. 先把所有的异性差放进堆中
//     for (int i = 2; i <= n; i++)
//     {
//         if (s[i] != s[i - 1])
//         {
//             heap.push({abs(e[i] - e[i - 1]), i - 1, i});
//         }
//     }
//     // 2. 提取结果
//     vector<node> ret; // 暂存结果
//     while (heap.size())
//     {
//         node t = heap.top();
//         heap.pop();
//         int d = t.d, l = t.l, r = t.r;
//         if (st[l] || st[r]) continue;
//         ret.push_back(t);
//         st[l] = st[r] = true; // 标记 l 和 r 已经出列
//         // 修改指针，还原新的队列
//         ne[pre[l]] = ne[r];
//         pre[ne[r]] = pre[l];
//         // 判断新的左右是否会成为⼀对
//         int left = pre[l], right = ne[r];
//         if (left && right && s[left] != s[right])
//         {
//             heap.push({abs(e[left] - e[right]), left, right});
//         }
//     }
//     cout << ret.size() << endl;
//     for (auto& x : ret)
//     {
//         cout << x.l << " " << x.r << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
//
// constexpr int N = 2e5 + 10;
// int n;
// int s[N]; // 0/1
// int ne[N], e[N], pre[N];
// bool st[N];
// struct node
// {
//     int d; // 技术差
//     int l; // 左编号
//     int r; // 右编号
//     char sex; // 性别
//     bool operator< (const node& x)const
//     {
//         if (d != x.d) return d > x.d;
//         else if (l != x.l) return l > x.l;
//         else return r > x.r;
//     }
// };
// priority_queue<node> heap;
// int main()
// {
//     cin >> n;
//     for (int i = 0; i <= n; i++)
//     {
//
//     }
//     return 0;
// }
