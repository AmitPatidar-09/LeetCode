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
    void preorder(vector<int>& ans, TreeNode* root) {
        if (root == nullptr)
            return;

        ans.push_back(root->val);
        preorder(ans, root->left);
        preorder(ans, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr)
            return {};
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            if (node->right)
                st.push(node->right);
            if (node->left)
                st.push(node->left);
            ans.push_back(node->val);
        }
        return ans;
    }
};