class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int ans = 0;
        int prev = 0;
        int unit;
        int mx = INT_MIN;
        for(auto &i : logs)
        {
            unit = i[1] - prev;
            if(unit > mx || (unit == mx && i[0] < ans)) {
                mx = unit;
                ans = i[0];
            }
            prev = i[1];

        }
        return ans;
    }
};