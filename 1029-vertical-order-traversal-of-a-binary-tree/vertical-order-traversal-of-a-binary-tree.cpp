class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*, pair<int, int>>> q;
        map<int, map<int, multiset<int>>> mp;
        q.push({root, {0, 0}});
        while (!q.empty()) {
            TreeNode* node = q.front().first;
            int v = q.front().second.first;
            int l = q.front().second.second;
            q.pop();
            mp[v][l].insert(node->val);
            if (node->left)
                q.push({node->left, {v - 1, l + 1}});
            if (node->right)
                q.push({node->right, {v + 1, l + 1}});
        }
        // vector<vector<int>>ans;
        vector<vector<int>> ans;
        // Correctly unpacking the nested maps
        for (auto& vertexPair : mp) {
            vector<int> temp;
            for (auto& levelPair : vertexPair.second) {
                // levelPair.second is the multiset<int>
                for (int val : levelPair.second) {
                    temp.push_back(val);
                }
            }
            ans.push_back(temp);
        }

        return ans;
    }
};