#include <iostream>
#include <utility>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

class Solution {
public:
    pair<TreeNode*, int> dfs(TreeNode* root) {
        if (root == nullptr)
            return {nullptr, 0};

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        if (left.second == right.second)
            return {root, left.second + 1};

        if (left.second > right.second)
            return {left.first, left.second + 1};

        return {right.first, right.second + 1};
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root).first;
    }
};

int main() {
    // Construct the tree:
    //        3
    //       / \
    //      5   1
    //     / \ / \
    //    6  2 0  8
    //      / \
    //     7   4

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);

    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);

    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    Solution obj;
    TreeNode* ans = obj.lcaDeepestLeaves(root);

    cout << "LCA of deepest leaves = " << ans->val << endl;

    return 0;
}