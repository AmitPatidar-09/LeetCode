class Solution {
public:
    int getKth(int lo, int hi, int k) {
        unordered_map<int, int> mp;
        vector<pair<int, int>> ans;

        for (int i = lo; i <= hi; i++) {
            int power = 0;
            int x = i;
            bool flag = true;
            while (x != 1) {
                if (x & 1)
                    x = x * 3 + 1;
                else
                    x /= 2;
                power++;
                if (mp.find(x) != mp.end()) {
                    power += mp[x];
                    ans.push_back({power, i});
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans.push_back({power, i});
            mp[i] = power;
        }
        sort(ans.begin(), ans.end());
        return ans[k - 1].second;
    }
};