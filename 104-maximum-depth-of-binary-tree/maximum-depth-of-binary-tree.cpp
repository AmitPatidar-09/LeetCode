/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root) {
        if (!root)
            return 0;
        int left = 0;
        int right = 0;
        if (root->left)
            left = helper(root->left);
        if (root->right)
            right = helper(root->right);
        return 1 + max(left, right);
    }
    int maxDepth(TreeNode* root) {
        int ans = helper(root);
        return ans;
    }
};