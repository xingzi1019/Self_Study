//#define _CRT_SECURE_NO_WARNINGS 1
//#include "main.h"
//using namespace std;
////对于⼆叉搜索树 平衡⼆叉树以及红⿊树 只需了解背后的原理 不做代码实现的要求
////重要清楚各种操作的时间复杂度 为使⽤ set 与 map 铺垫
////二叉搜索树
////左 < 根 < 右
////所以中序遍历的结果是从小到大 ---->可以去回顾一下各个遍历
////所以根据二叉搜索树的特性 搜索 插入的操作都是差不多的操作 时间复杂度是 O(N)
////构造⼀颗⼆叉搜索树的⽬的，其实并不是为了排序，⽽是为了提⾼查找和插⼊删除关键字的速度
////构建 不断向原来的树中插⼊新的结点即可
////二叉搜索树的删除
////情况一:叶子结点
////      直接删除
////情况二:只有左子树或者右子树的结点
////      直接让 x 的左子树或者右子树替代 x 的位置
////情况三:既有左子树又有右子树的结点
////      策略一:用左子树最大的结点值替换 删除左子树最大结点
////      策略二:用右子树最大的结点值替换 删除右子树最大结点
//// 
////a = {51, 68, 59, 27, 25, 33, 75, 70}
//const int MAXN = 100;
//const int NULL_NODE = -1;
//// 静态二叉树结构
//int ddata[MAXN];     // 节点值
//int lleft[MAXN];     // 左孩子下标
//int rright[MAXN];    // 右孩子下标
//int root;           // 根节点下标
//int cnt;            // 已用节点数
//// 初始化
//void init() 
//{
//    for (int i = 0; i < MAXN; i++) 
//    {
//        ddata[i] = NULL_NODE;
//        lleft[i] = NULL_NODE;
//        rright[i] = NULL_NODE;
//    }
//    root = NULL_NODE;
//    cnt = 0;
//}
//// 新建节点
//int newNode(int val) 
//{
//    ddata[cnt] = val;
//    return cnt++;
//}
//// ==================== 1. 插入 ====================
//void insert(int& rt, int val) 
//{
//    if (rt == NULL_NODE) 
//    {
//        rt = newNode(val);
//        return;
//    }
//    if (val < ddata[rt])
//        insert(lleft[rt], val);
//    else if (val > ddata[rt])
//        insert(rright[rt], val);
//}
//// ==================== 2. 查找 ====================
//bool search(int rt, int key) {
//    if (rt == NULL_NODE) return false;
//    if (ddata[rt] == key) return true;
//    if (key < ddata[rt])
//        return search(lleft[rt], key);
//    else
//        return search(rright[rt], key);
//}
//// ==================== 3. 修改 ====================
//bool update(int rt, int oldVal, int newVal) {
//    if (rt == NULL_NODE) return false;
//    if (ddata[rt] == oldVal) {
//        ddata[rt] = newVal;
//        return true;
//    }
//    if (oldVal < ddata[rt])
//        return update(lleft[rt], oldVal, newVal);
//    else
//        return update(rright[rt], oldVal, newVal);
//}
//// ==================== 4. 删除（辅助） ====================
//// 找最小值节点
//int findMin(int rt) {
//    while (lleft[rt] != NULL_NODE)
//        rt = lleft[rt];
//    return rt;
//}
//// 删除节点
//int remove(int rt, int val) {
//    if (rt == NULL_NODE) return NULL_NODE;
//
//    if (val < ddata[rt]) {
//        lleft[rt] = remove(lleft[rt], val);
//    }
//    else if (val > ddata[rt]) {
//        rright[rt] = remove(rright[rt], val);
//    }
//    else {
//        // 无左孩子
//        if (lleft[rt] == NULL_NODE)
//            return rright[rt];
//        // 无右孩子
//        if (rright[rt] == NULL_NODE)
//            return lleft[rt];
//        // 两个孩子：用后继替换
//        int minNode = findMin(rright[rt]);
//        ddata[rt] = ddata[minNode];
//        rright[rt] = remove(rright[rt], ddata[minNode]);
//    }
//    return rt;
//}
//// ==================== 中序遍历（验证BST） ====================
//void inOrder(int rt) 
//{
//    if (rt == NULL_NODE) return;
//    inOrder(lleft[rt]);
//    cout << ddata[rt] << " ";
//    inOrder(rright[rt]);
//}
//// ==================== 测试 ====================
//int main() 
//{
//    init();
//    insert(root, 5);
//    insert(root, 3);
//    insert(root, 7);
//    insert(root, 2);
//    insert(root, 4);
//    insert(root, 6);
//    insert(root, 8);
//    //       5
//    //      / \
//    //     3   7
//    //    / \ / \
//    //   2  4 6   8
//    cout << "中序遍历: ";
//    inOrder(root);
//    cout << endl;
//    // 查找
//    cout << "查找6: " << (search(root, 6) ? "存在" : "不存在") << endl;
//    // 修改
//    update(root, 6, 66);
//    cout << "修改6→66后: ";
//    inOrder(root);
//    cout << endl;
//    // 删除
//    root = remove(root, 5);
//    cout << "删除5后: ";
//    inOrder(root);
//    cout << endl;
//    return 0;
//}
