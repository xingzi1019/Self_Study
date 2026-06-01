#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//在某些特定的情况下，⼆叉搜索树是会退化成单链表的，并且各种操作的效率也会明显的下降
//因此我们需要⼀些特别的⼿段保证这个⼆叉搜索树的“平衡”，进⽽保证各种操作的效率
//所以需要把二叉树平衡了
//其中结点左子树与右子树的高度差定义为该结点的 平衡因子
//（一般是左子树的高度减去右子树的高度。当然，反过来也是可以的）
//由此可见，平衡二叉树中，每一个结点的平衡因子只可能是 -1、0 或 1。
//查找
//与二叉搜索树的查找一样：从根结点开始，沿某个分支逐层向下比较的过程，
//若非空，先将给定值与根结点的关键字比较
//若相等，则查找成功
//若不等，如果小于根结点的关键字，则在根结点的左子树上查找，否则在根结点的右子树上查找
//时间复杂度: 由于平衡二叉树会限制树的高度不会过高，趋近于 logn 级别，因此时间复杂度为 O(logN)
//插入：
//可以先按照二叉搜索树的插入算法插入一个结点，那么在插入过程途经的结点，都有可能受到影响
//如果这些结点的平衡因子的绝对值大于 1，此时就应该想办法调整这棵树的结构，使其重新变成平衡二叉树
//在二叉搜索树中插入新结点之后，插入路径的点中，可能存在很多平衡因子的绝对值大于 1 的
//此时找到距离插入结点最近的不平衡的点，以这个点为根的子树就是 最小不平衡子树 
//仅需让最小不平衡子树平衡，所有结点就都平衡了
//最小不平衡子树的出现可以细分成 4 种情况，因此调整策略也会分 4 种情况讨论。为了方便叙述，设最小不平衡子树的根节点为 T
//LL型 RR型 LR型 RL型
//LL型:右单旋
//以失衡结点的左孩子为轴旋转失衡的结点 使得其左孩子成为新的根节点
//原先左孩子的右子树变成失衡结点的左子树
//RR型:左单旋
//以失衡结点的右孩子为轴旋转失衡的结点 使得其右孩子成为新的根节点
//原先右孩子的左子树变成失衡结点的右子树
//LR型
//左旋左孩子然后右旋 
//RL型
//右旋左孩子然后左旋
//int main()
//{
//
//	return 0;
//}
//#include <algorithm>
//using namespace std;
//// AVL 结点定义
//template<typename T>
//struct AVLNode 
//{
//    T data;
//    AVLNode* left;
//    AVLNode* right;
//    int height;  // 结点高度
//    AVLNode(T val) : data(val), left(nullptr), right(nullptr), height(1) {}
//};
//// AVL 树类定义
//template<typename T>
//class AVLTree 
//{
//private:
//    AVLNode<T>* root;
//    // 获取结点高度
//    int getHeight(AVLNode<T>* node) 
//    {
//        return node ? node->height : 0;
//    }
//    // 获取平衡因子
//    int getBalance(AVLNode<T>* node) 
//    {
//        return node ? getHeight(node->left) - getHeight(node->right) : 0;
//    }
//    // 更新结点高度
//    void updateHeight(AVLNode<T>* node) 
//    {
//        if (node) 
//        {
//            node->height = 1 + max(getHeight(node->left), getHeight(node->right));
//        }
//    }
//    // 右旋（LL 型）
//    AVLNode<T>* rightRotate(AVLNode<T>* y) 
//    {
//        AVLNode<T>* x = y->left;
//        AVLNode<T>* T2 = x->right;
//        // 旋转
//        x->right = y;
//        y->left = T2;
//        // 更新高度
//        updateHeight(y);
//        updateHeight(x);
//        return x;  // 新的根结点
//    }
//    // 左旋（RR 型）
//    AVLNode<T>* leftRotate(AVLNode<T>* x) 
//    {
//        AVLNode<T>* y = x->right;
//        AVLNode<T>* T2 = y->left;
//        // 旋转
//        y->left = x;
//        x->right = T2;
//        // 更新高度
//        updateHeight(x);
//        updateHeight(y);
//        return y;  // 新的根结点
//    }
//    // 插入结点
//    AVLNode<T>* insert(AVLNode<T>* node, const T& val) 
//    {
//        // 1. 标准 BST 插入
//        if (node == nullptr) 
//        {
//            return new AVLNode<T>(val);
//        }
//        if (val < node->data) 
//        {
//            node->left = insert(node->left, val);
//        }
//        else if (val > node->data) 
//        {
//            node->right = insert(node->right, val);
//        }
//        else 
//        {
//            return node;  // 不允许重复
//        }
//        // 2. 更新高度
//        updateHeight(node);
//        // 3. 获取平衡因子
//        int balance = getBalance(node);
//        // 4. 如果不平衡，有 4 种情况
//        // LL 型：左子树的左子树过高
//        if (balance > 1 && val < node->left->data) 
//        {
//            return rightRotate(node);
//        }
//        // RR 型：右子树的右子树过高
//        if (balance < -1 && val > node->right->data) 
//        {
//            return leftRotate(node);
//        }
//        // LR 型：左子树的右子树过高
//        if (balance > 1 && val > node->left->data) 
//        {
//            node->left = leftRotate(node->left);
//            return rightRotate(node);
//        }
//        // RL 型：右子树的左子树过高
//        if (balance < -1 && val < node->right->data)
//        {
//            node->right = rightRotate(node->right);
//            return leftRotate(node);
//        }
//        return node;
//    }
//    // 找到最小值结点
//    AVLNode<T>* findMin(AVLNode<T>* node) 
//    {
//        while (node && node->left) 
//        {
//            node = node->left;
//        }
//        return node;
//    }
//    // 删除结点
//    AVLNode<T>* remove(AVLNode<T>* node, const T& val) 
//    {
//        // 1. 标准 BST 删除
//        if (node == nullptr) return nullptr;
//        if (val < node->data) 
//        {
//            node->left = remove(node->left, val);
//        }
//        else if (val > node->data) 
//        {
//            node->right = remove(node->right, val);
//        }
//        else 
//        {
//            // 找到要删除的结点
//            if (node->left == nullptr) 
//            {
//                AVLNode<T>* temp = node->right;
//                delete node;
//                return temp;
//            }
//            else if (node->right == nullptr) 
//            {
//                AVLNode<T>* temp = node->left;
//                delete node;
//                return temp;
//            }
//            // 有两个孩子：用后继替换
//            AVLNode<T>* successor = findMin(node->right);
//            node->data = successor->data;
//            node->right = remove(node->right, successor->data);
//        }
//        // 2. 更新高度
//        updateHeight(node);
//        // 3. 获取平衡因子
//        int balance = getBalance(node);
//        // 4. 如果不平衡，进行调整
//        // LL 型
//        if (balance > 1 && getBalance(node->left) >= 0) 
//        {
//            return rightRotate(node);
//        }
//        // RR 型
//        if (balance < -1 && getBalance(node->right) <= 0) 
//        {
//            return leftRotate(node);
//        }
//        // LR 型
//        if (balance > 1 && getBalance(node->left) < 0) 
//        {
//            node->left = leftRotate(node->left);
//            return rightRotate(node);
//        }
//        // RL 型
//        if (balance < -1 && getBalance(node->right) > 0) 
//        {
//            node->right = rightRotate(node->right);
//            return leftRotate(node);
//        }
//        return node;
//    }
//    // 中序遍历
//    void inorder(AVLNode<T>* node) 
//    {
//        if (node == nullptr) return;
//        inorder(node->left);
//        cout << node->data << "(h=" << node->height << ",bf=" << getBalance(node) << ") ";
//        inorder(node->right);
//    }
//    // 销毁树
//    void destroy(AVLNode<T>* node) 
//    {
//        if (node == nullptr) return;
//        destroy(node->left);
//        destroy(node->right);
//        delete node;
//    }
//public:
//    AVLTree() : root(nullptr) {}
//    ~AVLTree() { destroy(root); }
//    void insert(const T& val) 
//    {
//        root = insert(root, val);
//    }
//    void remove(const T& val) 
//    {
//        root = remove(root, val);
//    }
//    void display()
//    {
//        cout << "中序遍历: ";
//        inorder(root);
//        cout << endl;
//    }
//    int height()
//    {
//        return getHeight(root);
//    }
//};
//// 测试代码
//int main() 
//{
//    AVLTree<int> tree;
//    cout << "=== AVL 树测试 ===" << endl;
//    // 测试 LL 型旋转
//    cout << "\n测试 LL 型（右旋）: 插入 30, 20, 10" << endl;
//    tree.insert(30);
//    tree.insert(20);
//    tree.insert(10);
//    tree.display();
//    cout << "树高度: " << tree.height() << endl;
//    // 测试 RR 型旋转
//    cout << "\n测试 RR 型（左旋）: 插入 40, 50" << endl;
//    tree.insert(40);
//    tree.insert(50);
//    tree.display();
//    // 测试 LR 型旋转
//    AVLTree<int> tree2;
//    cout << "\n测试 LR 型（左右双旋）: 插入 30, 10, 20" << endl;
//    tree2.insert(30);
//    tree2.insert(10);
//    tree2.insert(20);
//    tree2.display();
//    // 测试 RL 型旋转
//    AVLTree<int> tree3;
//    cout << "\n测试 RL 型（右左双旋）: 插入 10, 30, 20" << endl;
//    tree3.insert(10);
//    tree3.insert(30);
//    tree3.insert(20);
//    tree3.display();
//    // 删除测试
//    cout << "\n删除测试: 删除 20" << endl;
//    tree.remove(20);
//    tree.display();
//    return 0;
//}