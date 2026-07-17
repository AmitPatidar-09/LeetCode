class Solution {
public:
    // int maxi = INT_MIN;
    int height(TreeNode* root, int& maxi)
    {
        if(!root) return 0;
        int lh = height(root->left, maxi);
        int rh = height(root->right, maxi);
        maxi = max(maxi, lh + rh);
        return 1 + max(rh,lh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        height(root, maxi);
        return maxi;
    }
};