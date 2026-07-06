class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });
        int ans = 0;
        vector<vector<int>> temp ;
        int maxEnd = nums[0][1];
        for (int i = 1; i < n; i++) {
            
            if (maxEnd >= nums[i][1]) {
                ans++;


            } else {
                maxEnd = nums[i][1];
            }
        }

        return n - ans;
    }
};