class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>pref(n,0);
        pref[n-1] = nums[n-1];
        for(int i = n-2; i >=0; i--)
        {
            pref[i] = max(pref[i+1], nums[i]);
        }
        int ans = 0;
        for(int j = 0; j < n-k; j++)
        {
            ans = max(ans,nums[j] + pref[j+k]);
        }
        return ans;
    }
};