// Zithile 1113552 2024/11/28
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(const vector<int>& levelOrder) {
    if (levelOrder.empty() || levelOrder[0] == -1) return nullptr;
    TreeNode* root = new TreeNode(levelOrder[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < levelOrder.size()) {
        TreeNode* current = q.front();
        q.pop();
        if (levelOrder[i] != -1) {
            current->left = new TreeNode(levelOrder[i]);
            q.push(current->left);
        }
        i++;
        if (i < levelOrder.size() && levelOrder[i] != -1) {
            current->right = new TreeNode(levelOrder[i]);
            q.push(current->right);
        }
        i++;
    }
    return root;
}

int diameterOfBinaryTree(TreeNode* root, int& diameter) {
    if (!root) return 0;
    int leftHeight = diameterOfBinaryTree(root->left, diameter);
    int rightHeight = diameterOfBinaryTree(root->right, diameter);
    diameter = max(diameter, leftHeight + rightHeight);
    return 1 + max(leftHeight, rightHeight);
}

int main() {
    vector<int> levelOrder = {8, 3, 2, 6, 5, 7, 9, 3, 7, 7, 7};
    TreeNode* root = buildTree(levelOrder);
    int diameter = 0;
    diameterOfBinaryTree(root, diameter);
    cout << "The diameter of the binary tree is: " << diameter << endl;
    return 0;
}
