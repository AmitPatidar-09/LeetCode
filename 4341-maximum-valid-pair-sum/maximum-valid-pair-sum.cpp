class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int l=0,ans=0;
        for(int i=k;i<nums.size();i++){
            l=max(l,nums[i-k]);
            ans=max(ans,l+nums[i]);
        }
        return ans;
    }
};