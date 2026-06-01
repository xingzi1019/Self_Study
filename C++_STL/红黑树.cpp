#define _CRT_SECURE_NO_WARNINGS 1
//红⿊树(简称 RBT)，也是⼀棵⼆叉搜索树
//它是在搜索树的基础上，使每个结点上增加⼀个存储位表⽰结点的颜⾊，可以是 Red 或者 Black
//通过对任意⼀条从根到叶⼦的路径上各个结点着⾊⽅式的限制
//确保没有⼀条路径会⽐其他路径⻓出 2 倍，因⽽是⼀棵接近平衡的⼆叉搜索树。
//红⿊树相对于 AVL 树来说，牺牲了部分平衡性以换取插⼊ / 删除操作时少量的旋转操作，整体来说性能要优于 AVL树
//助记:左根右 根叶黑 不红红 黑路同

//插入操作
//红⿊树的插⼊过程⼤致为：
//1. 按照⼆叉搜索树的插⼊⽅式插⼊新的结点；
//2. 默认该点是红⾊，如果破坏了红⿊树的规则，然后就分情况讨论
//| 情况 | 条件                        | 操作   
//| 情况1 | 叔结点是红色                | 父、叔变黑，爷变红，向上递归 
//| 情况2 | 叔结点是黑色，z 是父的右孩子 | 左旋父结点，转为情况3        
//| 情况3 | 叔结点是黑色，z 是父的左孩子 | 父变黑，爷变红，右旋爷结点 
//18 24 35 28 6 10 7 9 6 26
//#include <iostream>
//using namespace std;
//// 颜色枚举
//enum Color 
//{ 
//    RED, 
//    BLACK 
//};
//// 红黑树结点定义
//template<typename T>
//struct RBNode 
//{
//    T data;
//    Color color;
//    RBNode* left;
//    RBNode* right;
//    RBNode* parent;
//    RBNode(T val) : data(val), color(RED), left(nullptr), right(nullptr), parent(nullptr) {}
//};
//// 红黑树类定义
//template<typename T>
//class RBTree 
//{
//private:
//    RBNode<T>* root;
//    RBNode<T>* NIL;  // 哨兵结点
//    // 左旋
//    void leftRotate(RBNode<T>* x) 
//    {
//        RBNode<T>* y = x->right;
//        x->right = y->left;
//        if (y->left != NIL) 
//        {
//            y->left->parent = x;
//        }
//        y->parent = x->parent;
//        if (x->parent == nullptr) {
//            root = y;
//        }
//        else if (x == x->parent->left) {
//            x->parent->left = y;
//        }
//        else {
//            x->parent->right = y;
//        }
//        y->left = x;
//        x->parent = y;
//    }
//    // 右旋
//    void rightRotate(RBNode<T>* x) 
//    {
//        RBNode<T>* y = x->left;
//        x->left = y->right;
//
//        if (y->right != NIL) {
//            y->right->parent = x;
//        }
//
//        y->parent = x->parent;
//
//        if (x->parent == nullptr) {
//            root = y;
//        }
//        else if (x == x->parent->right) {
//            x->parent->right = y;
//        }
//        else {
//            x->parent->left = y;
//        }
//
//        y->right = x;
//        x->parent = y;
//    }
//    // 插入修复
//    void insertFixup(RBNode<T>* z) {
//        while (z->parent && z->parent->color == RED) {
//            if (z->parent == z->parent->parent->left) {
//                RBNode<T>* y = z->parent->parent->right;  // 叔结点
//
//                // 情况1：叔结点是红色
//                if (y->color == RED) {
//                    z->parent->color = BLACK;
//                    y->color = BLACK;
//                    z->parent->parent->color = RED;
//                    z = z->parent->parent;
//                }
//                else {
//                    // 情况2：叔结点是黑色，z 是右孩子
//                    if (z == z->parent->right) {
//                        z = z->parent;
//                        leftRotate(z);
//                    }
//                    // 情况3：叔结点是黑色，z 是左孩子
//                    z->parent->color = BLACK;
//                    z->parent->parent->color = RED;
//                    rightRotate(z->parent->parent);
//                }
//            }
//            else {
//                // 对称情况
//                RBNode<T>* y = z->parent->parent->left;  // 叔结点
//
//                if (y->color == RED) {
//                    z->parent->color = BLACK;
//                    y->color = BLACK;
//                    z->parent->parent->color = RED;
//                    z = z->parent->parent;
//                }
//                else {
//                    if (z == z->parent->left) {
//                        z = z->parent;
//                        rightRotate(z);
//                    }
//                    z->parent->color = BLACK;
//                    z->parent->parent->color = RED;
//                    leftRotate(z->parent->parent);
//                }
//            }
//        }
//        root->color = BLACK;
//    }
//
//    // 插入结点
//    void insert(RBNode<T>* z) {
//        RBNode<T>* y = nullptr;
//        RBNode<T>* x = root;
//
//        // 找到插入位置
//        while (x != NIL) {
//            y = x;
//            if (z->data < x->data) {
//                x = x->left;
//            }
//            else {
//                x = x->right;
//            }
//        }
//
//        z->parent = y;
//
//        if (y == nullptr) {
//            root = z;
//        }
//        else if (z->data < y->data) {
//            y->left = z;
//        }
//        else {
//            y->right = z;
//        }
//
//        z->left = NIL;
//        z->right = NIL;
//        z->color = RED;
//
//        insertFixup(z);
//    }
//
//    // 中序遍历
//    void inorder(RBNode<T>* node) {
//        if (node == NIL) return;
//        inorder(node->left);
//        cout << node->data << (node->color == RED ? "(R) " : "(B) ");
//        inorder(node->right);
//    }
//
//    // 计算黑色高度
//    int blackHeight(RBNode<T>* node) {
//        if (node == NIL) return 0;
//        int leftBH = blackHeight(node->left);
//        int rightBH = blackHeight(node->right);
//        return (node->color == BLACK ? 1 : 0) + max(leftBH, rightBH);
//    }
//
//    // 销毁树
//    void destroy(RBNode<T>* node) {
//        if (node == NIL) return;
//        destroy(node->left);
//        destroy(node->right);
//        delete node;
//    }
//
//    // 查找结点
//    RBNode<T>* search(RBNode<T>* node, const T& val) {
//        if (node == NIL || val == node->data) {
//            return node;
//        }
//        if (val < node->data) {
//            return search(node->left, val);
//        }
//        else {
//            return search(node->right, val);
//        }
//    }
//
//    // 替换子树
//    void transplant(RBNode<T>* u, RBNode<T>* v) {
//        if (u->parent == nullptr) {
//            root = v;
//        }
//        else if (u == u->parent->left) {
//            u->parent->left = v;
//        }
//        else {
//            u->parent->right = v;
//        }
//        v->parent = u->parent;
//    }
//
//    // 找最小值
//    RBNode<T>* minimum(RBNode<T>* node) {
//        while (node->left != NIL) {
//            node = node->left;
//        }
//        return node;
//    }
//
//    // 删除修复
//    void deleteFixup(RBNode<T>* x) {
//        while (x != root && x->color == BLACK) {
//            if (x == x->parent->left) {
//                RBNode<T>* w = x->parent->right;
//
//                // 情况1：兄弟是红色
//                if (w->color == RED) {
//                    w->color = BLACK;
//                    x->parent->color = RED;
//                    leftRotate(x->parent);
//                    w = x->parent->right;
//                }
//
//                // 情况2：兄弟是黑色，两个孩子都是黑色
//                if (w->left->color == BLACK && w->right->color == BLACK) {
//                    w->color = RED;
//                    x = x->parent;
//                }
//                else {
//                    // 情况3：兄弟是黑色，左孩子是红色，右孩子是黑色
//                    if (w->right->color == BLACK) {
//                        w->left->color = BLACK;
//                        w->color = RED;
//                        rightRotate(w);
//                        w = x->parent->right;
//                    }
//                    // 情况4：兄弟是黑色，右孩子是红色
//                    w->color = x->parent->color;
//                    x->parent->color = BLACK;
//                    w->right->color = BLACK;
//                    leftRotate(x->parent);
//                    x = root;
//                }
//            }
//            else {
//                // 对称情况
//                RBNode<T>* w = x->parent->left;
//
//                if (w->color == RED) {
//                    w->color = BLACK;
//                    x->parent->color = RED;
//                    rightRotate(x->parent);
//                    w = x->parent->left;
//                }
//
//                if (w->right->color == BLACK && w->left->color == BLACK) {
//                    w->color = RED;
//                    x = x->parent;
//                }
//                else {
//                    if (w->left->color == BLACK) {
//                        w->right->color = BLACK;
//                        w->color = RED;
//                        leftRotate(w);
//                        w = x->parent->left;
//                    }
//                    w->color = x->parent->color;
//                    x->parent->color = BLACK;
//                    w->left->color = BLACK;
//                    rightRotate(x->parent);
//                    x = root;
//                }
//            }
//        }
//        x->color = BLACK;
//    }
//
//    // 删除结点
//    void remove(RBNode<T>* z) {
//        RBNode<T>* y = z;
//        RBNode<T>* x;
//        Color yOriginalColor = y->color;
//
//        if (z->left == NIL) {
//            x = z->right;
//            transplant(z, z->right);
//        }
//        else if (z->right == NIL) {
//            x = z->left;
//            transplant(z, z->left);
//        }
//        else {
//            y = minimum(z->right);
//            yOriginalColor = y->color;
//            x = y->right;
//
//            if (y->parent == z) {
//                x->parent = y;
//            }
//            else {
//                transplant(y, y->right);
//                y->right = z->right;
//                y->right->parent = y;
//            }
//
//            transplant(z, y);
//            y->left = z->left;
//            y->left->parent = y;
//            y->color = z->color;
//        }
//
//        delete z;
//
//        if (yOriginalColor == BLACK) {
//            deleteFixup(x);
//        }
//    }
//
//public:
//    RBTree() {
//        NIL = new RBNode<T>(T());
//        NIL->color = BLACK;
//        root = NIL;
//    }
//
//    ~RBTree() {
//        destroy(root);
//        delete NIL;
//    }
//
//    void insert(const T& val) {
//        RBNode<T>* node = new RBNode<T>(val);
//        insert(node);
//    }
//
//    void remove(const T& val) {
//        RBNode<T>* node = search(root, val);
//        if (node != NIL) {
//            remove(node);
//        }
//    }
//
//    bool search(const T& val) {
//        return search(root, val) != NIL;
//    }
//
//    void display() {
//        cout << "中序遍历: ";
//        inorder(root);
//        cout << endl;
//        cout << "黑色高度: " << blackHeight(root) << endl;
//    }
//};
//
//// 测试代码
//int main() {
//    RBTree<int> tree;
//
//    cout << "=== 红黑树测试 ===" << endl;
//
//    // 插入测试
//    cout << "\n插入序列: 10, 20, 30, 15, 25, 5, 1" << endl;
//    tree.insert(10);
//    tree.insert(20);
//    tree.insert(30);
//    tree.insert(15);
//    tree.insert(25);
//    tree.insert(5);
//    tree.insert(1);
//
//    tree.display();
//
//    // 查找测试
//    cout << "\n查找 15: " << (tree.search(15) ? "存在" : "不存在") << endl;
//    cout << "查找 100: " << (tree.search(100) ? "存在" : "不存在") << endl;
//
//    // 删除测试
//    cout << "\n删除 20" << endl;
//    tree.remove(20);
//    tree.display();
//
//    return 0;
//}