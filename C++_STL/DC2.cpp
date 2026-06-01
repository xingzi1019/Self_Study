#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//class Solution
//{
//public:
//    void moveZeroes(vector<int>& nums)
//    {
//        int cur = -1;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i])
//            {
//                swap(nums[i], nums[++cur]);
//            }
//        }
//    }
//};
//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int n = nums.size();
//        int left = -1, right = n;
//        int i = 0;
//        while (i < right)
//        {
//            if (nums[i] == 2)
//                swap(nums[--right], nums[i]);
//            else if (nums[i] == 0)
//                swap(nums[++left], nums[i++]);
//            else
//                i++;
//        }
//    }
//};
//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int j = 0;
//        for (int i = m; i < nums1.size(); i++)
//        {
//            nums1[i] = nums2[j++];
//        }
//        sort(nums1.begin(), nums1.end());
//    }
//};
//类归并排序
//class Solution2 {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        vector<int> tmp(m + n);
//        int cur = 0, cur1 = 0, cur2 = 0;
//        while (cur1 < m && cur2 < n)
//        {
//            if (nums1[cur1] <= nums2[cur2])
//                tmp[cur++] = nums1[cur1++];
//            else
//                tmp[cur++] = nums2[cur2++];
//        }
//        while (cur1 < m)
//        {
//            tmp[cur++] = nums1[cur1++];
//        }
//        while (cur2 < n)
//        {
//            tmp[cur++] = nums2[cur2++];
//        }
//        for (int i = 0; i < m + n; i++)
//        {
//            nums1[i] = tmp[i];
//        }
//    }
//};
//const int N = 30;
//typedef pair<int, int> PII;
//int n;
//vector<int> p[N]; // 创建 n 个放⽊块的槽
//PII find(int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < p[i].size(); j++)
//		{
//			if (p[i][j] == x)
//			{
//				return { i, j };
//			}
//		}
//	}
//}
//void clean(int x, int y)
//{
//	// 把 [x, y] 以上的⽊块归位
//	for (int j = y + 1; j < p[x].size(); j++)
//	{
//		int t = p[x][j];
//		p[t].push_back(t);
//	}
//	p[x].resize(y + 1);
//}
//void move(int x1, int y1, int x2)
//{
//	// 把 [x1, y1] 及其以上的⽊块放在 x2 上⾯
//	for (int j = y1; j < p[x1].size(); j++)
//	{
//		p[x2].push_back(p[x1][j]);
//	}
//	p[x1].resize(y1);
//}
//int main()
//{
//	cin >> n;
//	// 初始化
//	for (int i = 0; i < n; i++)
//	{
//		p[i].push_back(i);
//	}
//	string op1, op2;
//	int a, b;
//	while (cin >> op1 >> a >> op2 >> b)
//	{
//		// 查找 a 和 b 的位置
//		PII pa = find(a);
//		int x1 = pa.first, y1 = pa.second;
//		PII pb = find(b);
//		int x2 = pb.first, y2 = pb.second;
//		if (x1 == x2) continue; // 处理不合法的操作
//		if (op1 == "move") // 把 a 上⽅归位
//		{
//			clean(x1, y1);
//		}
//		if (op2 == "onto") // 把 b 上⽅归位
//		{
//			clean(x2, y2);
//		}
//		move(x1, y1, x2);
//	}
//	// 打印
//	for (int i = 0; i < n; i++)
//	{
//		cout << i << ":";
//		for (int j = 0; j < p[i].size(); j++)
//		{
//			cout << " " << p[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}