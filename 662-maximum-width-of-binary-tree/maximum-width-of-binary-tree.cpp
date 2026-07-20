class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        long long ans = 0;

        while (!q.empty()) {

            int n = q.size();
            long long first;
            long long last;
            int mn = q.front().second;
            for (int i = 0; i < n; i++) {
                long long cur_id = q.front().second - mn;
                TreeNode* node = q.front().first;
                q.pop();
                if (i == 0)
                    first = cur_id;
                if (i == n - 1)
                    last = cur_id;

                if (node->left) {
                    q.push({node->left, 2 * cur_id + 1});
                }
                if (node->right) {
                    q.push({node->right, 2 * cur_id+2});
                }
            }
                ans = max(ans,last - first + 1);
        }
        return (int)ans;
    }
};