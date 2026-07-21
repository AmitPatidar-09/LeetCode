class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];
            bool flag = true;
            for (int j = 1; j < n; j++) {
                if (strs[j][i] != ch) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans += ch;
            else
                break;
        }
        return ans;
    }
};