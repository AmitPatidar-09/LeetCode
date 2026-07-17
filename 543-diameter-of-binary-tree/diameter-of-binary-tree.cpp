class Solution {
public:
    int maxi = INT_MIN;
    int height(TreeNode* root)
    {
        if(!root) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        maxi = max(maxi, lh + rh);
        return 1 + max(rh,lh);
    }

    // int findmax(TreeNode* root)
    // {
    //     if(!root) return 0;
    //     int lh = height(root->left);
    //     int rh = height(root->right);
    //     maxi = max(maxi, lh + rh);
    //     findmax(root->left);
    //     findmax(root->right);
    //     return maxi;

    // }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxi;
    }
};