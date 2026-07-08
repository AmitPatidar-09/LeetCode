class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>suff(n,0);
        suff[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            suff[i] = max(suff[i-1], nums[i]);
        }
        int ans = 0;
        for(int j = k; j < n; j++)
        {
            ans = max(ans,nums[j] + suff[j-k]);
        }
        return ans;
    }
};