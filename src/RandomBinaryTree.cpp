#include<iostream>
using namespace std;
#include<ctime>

// 生成层数为1~maxlevel层，值在l~r的随机二叉树
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
TreeNode* randomBinaryTree(int maxlevel, int l, int r) {
    if (maxlevel == 0 || rand() % 11 <= 1) {
        return nullptr;
    }
    TreeNode* head = new TreeNode(rand() % (r - l + 1) + l);
    head->left = randomBinaryTree(maxlevel - 1, l, r);
    head->right = randomBinaryTree(maxlevel - 1, l, r);
    return head;
}
void inOrder(TreeNode* head) {
    if (!head) return;
    inOrder(head->left);
    cout << head->val << " ";
    inOrder(head->right);
}
int main() {
    srand(time(0));
    TreeNode* root = randomBinaryTree(5, 0, 1000);
    inOrder(root);
    return 0;
}
