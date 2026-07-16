class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>  suf (n);
        suf[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--)
        {
            suf[i] = min(nums[i], suf[i+1]);
        }
        int pre = nums[0];
        int ans = INT_MAX;
        for (int i = 1; i < n - 1; i++) {

            if (nums[i] > pre && nums[i] > suf[i])
                ans = min(ans, pre + suf[i] + nums[i]);
            // cout << pre << " " << suf << " " << nums[i] << endl;
            pre = min(pre, nums[i]);
            // suf = min(suf, nums[n - i]);
        }
        return ans == INT_MAX ? -1 : ans;
    }
};