class Solution {
public:
    int helper(TreeNode* root) {
        if (!root) return 0;

        int lh = helper(root->left);
        if (lh == -1) return -1; // Agar left side hi kharab hai, to aage kyu check karna?

        int rh = helper(root->right);
        if (rh == -1) return -1; // Agar right side kharab hai, to ruk jao.

        // Agar dono sides ka difference 1 se zyada hai to -1
        if (abs(lh - rh) > 1) return -1;

        // Sab sahi hai to height return karo
        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) { 
        return helper(root) != -1; 
    }
};